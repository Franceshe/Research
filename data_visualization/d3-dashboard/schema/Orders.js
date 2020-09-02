cube(`Orders`, {
  sql: `SELECT * FROM public.orders`,
  
  joins: {
    Products: {
      sql: `${CUBE}.product_id = ${Products}.id`,
      relationship: `belongsTo`
    },
    
    Users: {
      sql: `${CUBE}.user_id = ${Users}.id`,
      relationship: `belongsTo`
    }
  },
  
  measures: {
    count: {
      type: `count`,
      drillMembers: [id, createdAt]
    },

      
    number: {
      sql: `number`,
      type: `sum`
    }
  },
  
  dimensions: {
    id: {
      sql: `id`,
      type: `number`,
      primaryKey: true
    },

        // The following `dimention` is added to Orders Cube
    // as subQuery which gives the sum of all line items
    // that belong to that order
    price:  {
      sql: `${LineItems.price}`,	  
      subQuery: true,
      type:`number`,
      format: `currency`
    },

    //add the following `priceRange` dimention by using a
    // case statement to define a conditional logic for price
    // buckets
    priceRange: {
	    type: `string`,
	    case: {
	        when: [
		    {sql: `${price} < 101`, label: `$0 - $100`},
		    {sql: `${price} < 201`, label: `$100 - $200`}
	        ],
	        else:{
		  label: `$200+`
	      }
	     },
      },
    
    status: {
      sql: `status`,
      type: `string`
    },
    
    createdAt: {
      sql: `created_at`,
      type: `time`
    },
    
    completedAt: {
      sql: `completed_at`,
      type: `time`
    }
  }
});

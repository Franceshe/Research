# Build an Interactive Dashboard App with D3
* This guide shows how to build a dashboard application with React, D3.js, 
and Material UI. Which include how to set up a database, seed it with data,
build an API endpoint on top of it, and then visualize data on the frontend
with D3.js. 

## Data schema
*  model data with Cube.js data schema

### Overview
* tech stack:
1. Postgres 
2. Cube.js -> middleware between database and client,
providing API, abstraction, caching
3. react with Material UI, D3 for chart rendering

### Setting up a Database and Cube.js
* tips: you might need to reconfig for cube.js installation:
... `sudo chown -R $USER /usr/local/lib/node_modules`
* tips: add environment variable to `.env`:
`
1| CUBEJS_DB_USER=xxxxxxxx
2| CUBEJS_API_SECRET=SECRET
3| CUBEJS_DB_TYPE=postgres
4| CUBEJS_DB_NAME=ecom
5| CUBEJS_WEB_SOCKETS=true
6| CUBEJS_DB_PASS=xxxxxxxxx
`
### Building a Frontend Dashboard
### Adding interactivity

# Reference
* [D3 dashboard](https://d3-dashboard.cube.dev/)
* simulate in [codesandbox](https://codesandbox.io/s/6g8pb?file=/index.js)

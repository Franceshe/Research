# Lecture 18: Today, Video = 2d+ time

## Representation of video format
* A video is a sequence of images, 4D tensor: Tx3xHxW
1 tempral dimention, 3 channel dim, 2 spacial dimention

4D tensors: T X           3            x   H  x W
            |             |                   | 
		time(temporal) color Channel:    two spacial dimention
		                R,G,B
* some times you might want to transposse first two dimentions, for example. transpose first 2 dimentions first. Or sometimes put channel first.
* trick: how to transform the 4d imput tensor-> single score.

## Task:
1. Video Classification: eg: Recognize action/activities(verbs) video -> Semantic category: running. with.cross-entropy loss function
2. Image Classification: eg: Recognize objects(nouns)

## Problems:
* Video datas are big!
* Most videos today are shoot as ~30 frames per second fps
, 24fps for movies
* size of uncompressed video(3 bytes per pixel)
* SD(640x480)    -> ~1.5GB PER MINUTE
* HD(1920X1080)  -> 10GB PER MINUTE


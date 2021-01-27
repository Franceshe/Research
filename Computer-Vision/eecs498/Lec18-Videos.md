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
### Problem1: huge video data
* Video datas are big!
* Most videos today are shoot as ~30 frames per second fps
, 24fps for movies
* size of uncompressed video(3 bytes[RGB] per pixel)
* SD(640x480)    -> ~1.5GB PER MINUTE
* HD(1920X1080)  -> 10GB PER MINUTE
* Hard to feed such large size of data(video + raw activation of neural nets) to GPU memory(normally 12-36GB for today non specialized grade)

### Solution1: Train on subet of data(a short clips) ~3-5 Seconds 
* Down sample temporal and spatial data.
* Train on subet of data(a short clips): low fps and low spatial 
resolution. e.g. T=16, H=W=112, (3.2 seconds at 5 fps, 558KB)
* Temorarily subsample those clips so they are at low frame rate
* Down sample the spatial resolution of video frame
* Computational constraints
* Gonna get better when we have bigger memory!

### Baseline:
* Video classification: Single-Frame CNN(A VERY STRONG BASELINE):
Run CNN independently on every frame of video and extracted independent classification decision, on test time, use some aveaging techniques

### Problem:
* hard to learn local motion of adjacient pixels.


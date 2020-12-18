# Recurrent Neural Network

_This is the basic concept to approach various high level networks such as LSTM,Transformers, ... in NLP field._
## Architecture

### 1. Forward Propagation [(details)](https://stanford.edu/~shervine/teaching/cs-230/cheatsheet-recurrent-neural-networks)

![stanford.edu rnn](https://stanford.edu/~shervine/teaching/cs-230/illustrations/architecture-rnn-ltr.png?9ea4417fc145b9346a3e288801dbdfdc "RNN Architecture")

- **Encoder:** ![](https://latex.codecogs.com/svg.latex?\Large&space;a^{%3Ct%3E}=g_1(W_{aa}a^{t-1}+W_{ax}x^{%3Ct%3E}+b_a))
-  **Decoder**: ![](https://latex.codecogs.com/svg.latex?\Large&space;y^{%3Ct%3E}=g_2(W_{ya}a^{%3Ct%3E}+b_y))

>Where W<sub>ax</sub>, W<sub>aa</sub>, W<sub>ya</sub>, b<sub>a</sub>, b<sub>y</sub> are coefficients that are shared temporally and g<sub>1</sub>, g<sub>2</sub> activation functions.

### 2. Loss funtion
![](https://latex.codecogs.com/svg.latex?\Large&space;L%28%5Chat%7By%7D%2Cy%29%3D%5Csum_%7B0%7D%5E%7BT%7DL%28%5Chat%7By%7D%5E%7B%3Ct%3E%7D%2Cy%5E%7B%3Ct%3E%7D%29)

> I'm gonna choose [Cross Entropy](https://stackoverflow.com/a/36516373) as the main loss funtion for this network!

![](https://latex.codecogs.com/svg.latex?\Large&space;loss%28x%2Cy%29%3D-%5Csum%20x%5Clog%20y)

### 3. Backpropagation
We have to update 3 weights:

![](https://latex.codecogs.com/svg.latex?\Large&space;%5Cleft.%5Cbegin%7Bmatrix%7D%20%5Cfrac%7B%5Cpartial%20L%7D%7B%5Cpartial%20W_%7Baa%7D%7D%26%20%5C%5C%20%26%20%5C%5C%20%5Cfrac%7B%5Cpartial%20L%7D%7B%5Cpartial%20W_%7Bax%7D%7D%26%20%5C%5C%20%5Cend%7Bmatrix%7D%5Cright%7C%20%3D%20%5Csum_%7Bt%3D1%7D%5E%7BT%7D%5Cfrac%7B%5Cpartial%20L%5E%7B%28T%29%7D%7D%7BW%7D%7C_%7B%28t%29%7D)

![](https://latex.codecogs.com/svg.latex?\Large&space;%5Cfrac%7B%5Cpartial%20L%7D%7B%5Cpartial%20W_%7Bya%7D%7D%3D%5Cfrac%7B%5Cpartial%20L%7D%7B%5Cpartial%20W_%7B%5Chat%7By%7D%7D%7D*%5Cfrac%7B%5Cpartial%20%5Chat%7By%7D%7D%7B%5Cpartial%20W_%7Bya%7D%7D)


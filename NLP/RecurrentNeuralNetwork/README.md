# Recurrent Neural Network

_This is the basic concept to approach various high level networks such as LSTM,Transformers, ... in NLP field._
## Architecture [(details)](https://stanford.edu/~shervine/teaching/cs-230/cheatsheet-recurrent-neural-networks)

![stanford.edu rnn](https://stanford.edu/~shervine/teaching/cs-230/illustrations/architecture-rnn-ltr.png?9ea4417fc145b9346a3e288801dbdfdc "RNN Architecture")

- !["rnn nodes"](https://latex.codecogs.com/svg.latex?\Large&space;a^{%3Ct%3E}=g_1(W_{aa}a^{t-1}+W_{ax}x^{%3Ct%3E}+b_a))
-  !["rnn y"](https://latex.codecogs.com/svg.latex?\Large&space;y^{%3Ct%3E}=g_2(W_{ya}a^{%3Ct%3E}+b_y))

where W<sub>ax</sub>, W<sub>aa</sub>, W<sub>ya</sub>, b<sub>a</sub>, b<sub>y</sub> are coefficients that are shared temporally and g<sub>1</sub>, g<sub>2</sub> activation functions.


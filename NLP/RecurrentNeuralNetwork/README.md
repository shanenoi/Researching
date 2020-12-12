# Recurrent Neural Network

_This is the basic concept to approach various high level networks such as LSTM,Transformers, ... in NLP field._
## Architecture [(details)](https://stanford.edu/~shervine/teaching/cs-230/cheatsheet-recurrent-neural-networks)
![stanford.edu rnn](https://stanford.edu/~shervine/teaching/cs-230/illustrations/architecture-rnn-ltr.png?9ea4417fc145b9346a3e288801dbdfdc "RNN Architecture")

- $a^{<t>}=g_1(W_{aa}a^{<t-1>}+W_{ax}x^{<t>}+b_a)$
-  $y^{t}=g_2(W_{ya}a^{<t>}+b_y)$

where $W_{ax}$, $W_{aa}$, $W_{ya}$, $b_a$, $b_y$ are coefficients that are shared temporally and g_1, g_2g1​,g2​ activation functions.
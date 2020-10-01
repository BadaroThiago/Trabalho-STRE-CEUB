# Trabalho-STRE-CEUB
Trabalho para a matéria Sistemas de Tempo Real e Embarcados do UniCeub

# Introdução

Esse foi um trabalho desenvolvido para a matéria de Sistemas de Tempo Real e Embarcados do Uniceub, onde nos foi proposta a execução de um sistema embarcado de nossa escolha.
Foi construída uma simulação de Termômetro e Humidade para fazer a predição da chance de chuva em %. A proposta desse documento é descrever a metodologia utilizada e auxiliar na sua execução.

# Metodologia

Foi utilizado um código de multithread, controlando o sinal de acesso ao LCD com a estrutura condicional switch/case e utilizando heurística para determinar a chance de chuva.
Utilizando o simulador Tinkercad (https://www.tinkercad.com/) realizamos o medidor, onde foi utilizado:

* 1 Arduino Uno R3 + 
* 1 LCD 16x2 + 
* 2 Potenciometros (Um utilizado para substituir o medidor de humidade, devido a impedimentos da plataforma) +
* 1 Sensor de Temperatura +
* 1 Resistor +
* 2 Protoboards.

## Link para o projeto: https://www.tinkercad.com/things/kwTE2V8wrlP-termometro-e-humidade-stre/editel?sharecode=f7Q3WWWUm60opxzeV_NRthVIzqjxsb_RJa04D8QeOug

# Conclusão

O trabalho foi muito instrutivo para a área de Sistemas Embarcados de Tempo Real, porém, devido à algumas limitações não podemos implementar o circuito real, mas pelo simulador já podemos ter uma boa visão.

# esp32-sensor-simulacao

Simulação de coleta de dados com ESP32 e sensor DHT22 usando Wokwi e análise dos dados no Google Colab.

---

## 🎯 Objetivo

Este projeto simula a leitura de temperatura e umidade com o sensor **DHT22** conectado a um **ESP32**, utilizando a plataforma **Wokwi** para simulação do circuito.  
Os dados foram coletados via **Serial Monitor**, processados no **Google Colab (Python)**, e representados por gráfico com `matplotlib`.

---

## ✅ Checklist de Entrega

- [x] Circuito virtual com ESP32 e sensor DHT22 criado no Wokwi  
- [x] Código `sketch.ino` implementado com leitura dos dados  
- [x] Execução via Monitor Serial no Wokwi  
- [x] Coleta dos dados e análise no Google Colab com pandas  
- [x] Geração de gráfico com matplotlib  
- [x] Arquivos e imagens adicionados no GitHub  
- [x] `README.md` documentado com imagens e explicações  
- [x] Link do notebook público no Google Colab incluído  
- [x] Justificativa da escolha do sensor  

---

## 🧪 Sensor Utilizado e Justificativa

### 🔧 Sensor DHT22

O sensor **DHT22** foi escolhido por ser um dos sensores digitais mais populares para leitura de **temperatura e umidade**. Ele é amplamente utilizado em projetos embarcados pela sua:

- ✅ Facilidade de uso com bibliotecas prontas (como a `DHT.h`)  
- ✅ Compatibilidade com ESP32  
- ✅ Boa precisão para simulações  
- ✅ Suporte direto na plataforma Wokwi (simulação simples e estável)  

Essa escolha é ideal para projetos introdutórios de IoT e coleta de dados ambientais.

---

## 📷 Capturas de Tela

### 🔌 Circuito no Wokwi  
![Circuito](%7B41DADC56-995D-499D-8170-097EED502E65%7D.png)

### 🧠 Código no Wokwi  
![Código](%7BCB2D9B1E-3635-447A-BC39-CF72057C5CF5%7D.png)

### 🖥️ Monitor Serial  
![Serial](%7B8261E327-F6A0-4A2A-AFB1-801C34479089%7D.png)

### 📊 Tabela de dados no Google Colab  
![Tabela](%7BD784B8B2-F859-419C-9CEE-B18767533130%7D.png)

### 📈 Gráfico gerado no Colab  
![Gráfico](grafico_print.png)

---

## 🔗 Acesso ao Google Colab

Clique aqui para acessar o notebook completo com o código de análise:  
📎 [Notebook Google Colab](https://colab.research.google.com/drive/1apaaq5B5zoW0MCWxd2bXbapqm5lNb-6F?usp=sharing)

---

## 👥 Participantes

- Felipe Menezes — RM557891  
- Flavia Bocchino  -RM564213
- Pedro Zani — RM564956

---

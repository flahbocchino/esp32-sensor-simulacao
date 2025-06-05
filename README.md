# esp32-sensor-simulacao

Simulação de coleta de dados com ESP32 e sensor DHT22 usando Wokwi e análise dos dados no Google Colab.

---

## 📋 Objetivo

Este projeto simula a leitura de temperatura e umidade com o sensor **DHT22** conectado a um **ESP32** utilizando a plataforma **Wokwi**. Os dados coletados foram analisados em **Python (Google Colab)** com geração de gráfico.

---

## ✅ Checklist de Entrega

- [x] Circuito virtual com ESP32 e sensor DHT22 criado no Wokwi
- [x] Código `sketch.ino` implementado com leitura dos dados
- [x] Execução via Monitor Serial no Wokwi
- [x] Coleta dos dados e análise com pandas no Google Colab
- [x] Geração de gráfico com matplotlib
- [x] Arquivos e imagens adicionados no GitHub

---

## 🔌 Componentes Simulados

- ESP32
- Sensor DHT22 (Temperatura e Umidade)

---

## 📷 Capturas de Tela

### Circuito no Wokwi:
![Circuito](coloque-aqui-o-nome-do-print.png)

### Monitor Serial com Dados:
![Serial](coloque-aqui-o-nome-do-print-serial.png)

### Gráfico gerado:
![Gráfico](grafico.png)

---

## 🧠 Análise no Google Colab

Notebook: [`analise_sensor_dht22.ipynb`](Untitled3.ipynb)

- Conversão dos dados do monitor serial em DataFrame
- Geração de gráfico com matplotlib
- Temperatura e umidade estáveis durante a simulação

---

## 📁 Arquivos no Repositório

| Arquivo | Descrição |
|--------|-----------|
| `sketch.ino` | Código usado na simulação Wokwi |
| `Untitled3.ipynb` | Notebook com análise e gráfico |
| `grafico.png` | Gráfico gerado com matplotlib |
| `README.md` | Este arquivo |

---

## 🛠️ Como rodar esta simulação

1. Acesse [https://wokwi.com](https://wokwi.com) e selecione o ESP32
2. Conecte o sensor DHT22 com os seguintes pinos:
   - VCC → 3V3
   - GND → GND
   - DATA → GPIO 15
3. Cole o conteúdo do `sketch.ino` e inicie a simulação
4. Copie os dados do Monitor Serial para o Colab
5. Execute o notebook e gere os gráficos

---

Feito com 💻 para a Hermes Reply – Enterprise Challenge (Sprint 2)

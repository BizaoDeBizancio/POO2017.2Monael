{"filter":false,"title":"Watch.h","tooltip":"/Pratica/pratica5/DataPrecisa12/Watch/Watch.h","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":22,"column":2},"action":"insert","lines":["class Watch{","    private:","            int hora;","            int minuto;","            int segundo;","            bool AM;","    public:","            Watch();","            Watch(int,int,int,bool);","            void setHora(int);","            int getHora() const;","            void setMinuto(int);","            int getMinuto() const;","            void setSegundo(int);","            int getSegundo() const;","            void setAM(bool);","            bool isAM() const;","            Watch operator ++();","            Watch operator ++(int);","            void incrementaMinuto();","            void incrementaHora();","            void imprime() const;","};"],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":0,"column":0},"end":{"row":22,"column":2},"isBackwards":true},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1501070080870,"hash":"53745d1c0547a0c94f1911799b30c113df7ba859"}
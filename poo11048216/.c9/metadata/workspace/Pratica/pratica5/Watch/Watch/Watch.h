{"filter":false,"title":"Watch.h","tooltip":"/Pratica/pratica5/Watch/Watch/Watch.h","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":22,"column":2},"action":"insert","lines":["class Watch{","    private:","            int hora;","            int minuto;","            int segundo;","            bool AM;","    public:","            Watch();","            Watch(int,int,int, std::string);","            void setHora(int);","            int getHora() const;","            void setMinuto(int);","            int getMinuto() const;","            void setSegundo(int);","            int getSegundo() const;","            void setAM(bool);","            bool isAM() const;","            Watch operator ++();","            Watch operator ++(int);","            void incrementaMinuto();","            void incrementaHora();","            void imprime() const;","};"],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":22,"column":2},"end":{"row":22,"column":2},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1501000134913,"hash":"cee4c0bb9c8478b02f520dd7ee5af8fa0d8f0954"}
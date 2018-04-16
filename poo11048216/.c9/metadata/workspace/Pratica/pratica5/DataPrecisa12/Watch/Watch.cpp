{"filter":false,"title":"Watch.cpp","tooltip":"/Pratica/pratica5/DataPrecisa12/Watch/Watch.cpp","undoManager":{"mark":40,"position":40,"stack":[[{"start":{"row":0,"column":0},"end":{"row":96,"column":1},"action":"insert","lines":["Watch::Watch(){","    this->setHora(12);","    this->setMinuto(0);","    this->setSegundo(0);","    this->setAM(true);","}","","Watch::Watch(int h, int m, int seg, bool am){","    this->setHora(h);","    this->setMinuto(m);","    this->setSegundo(seg);","    this->setAM(am);","}","","void Watch::setAM(bool h){","    this->AM = h;","}","","bool Watch::isAM() const{","    return this->AM;","}","","void Watch::setHora(int h){","    this->hora = h;","}","","int Watch::getHora() const{","    return this->hora;","}","","void Watch::setMinuto(int m){","    this->minuto = m;","}","","int Watch::getMinuto() const{","    return this->minuto;","}","","void Watch::setSegundo(int s){","    this->segundo = s;","}","","int Watch::getSegundo() const{","    return this->segundo;","}","","Watch Watch::operator ++(){","    this->setSegundo(this->getSegundo()+1);","    ","    if(this->getSegundo()>=60){","        this->setSegundo(0);","        this->incrementaMinuto();","    }","    ","    return *this;","}","","Watch Watch::operator ++(int){","    Watch r = *this;","    ","    ++(*this);","    ","    return r;","}","","void Watch::incrementaMinuto(){","    this->setMinuto(this->getMinuto()+1);","    ","    if(this->getMinuto()>=60){","        this->setMinuto(0);","        this->incrementaHora();","    }","}","","void Watch::incrementaHora(){","    this->setHora(this->getHora()+1);","    ","    if(this->getHora()==13){","        this->setHora(1);","    }else{","        if(this->getHora()==12){","            if(this->isAM()){","                this->setAM(false);","            }else{","                this->setAM(true);","            }","        }","    }","}","","void Watch::imprime() const{","    if(this->isAM()){","        std::cout << this->getHora() << \":\" << this->getMinuto() << \":\" << this->getSegundo() << \" AM\";","    }else{","        std::cout << this->getHora() << \":\" << this->getMinuto() << \":\" << this->getSegundo() << \" PM\";","    }","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["#"],"id":4}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["i"],"id":5}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":["n"],"id":6}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":4},"action":"insert","lines":["c"],"id":7}],[{"start":{"row":0,"column":4},"end":{"row":0,"column":5},"action":"insert","lines":["l"],"id":8}],[{"start":{"row":0,"column":5},"end":{"row":0,"column":6},"action":"insert","lines":["u"],"id":9}],[{"start":{"row":0,"column":6},"end":{"row":0,"column":7},"action":"insert","lines":["d"],"id":10}],[{"start":{"row":0,"column":7},"end":{"row":0,"column":8},"action":"insert","lines":["e"],"id":11}],[{"start":{"row":0,"column":8},"end":{"row":0,"column":9},"action":"insert","lines":[" "],"id":12}],[{"start":{"row":0,"column":9},"end":{"row":0,"column":10},"action":"insert","lines":["<"],"id":13}],[{"start":{"row":0,"column":10},"end":{"row":0,"column":11},"action":"insert","lines":["i"],"id":14}],[{"start":{"row":0,"column":11},"end":{"row":0,"column":12},"action":"insert","lines":["o"],"id":15}],[{"start":{"row":0,"column":12},"end":{"row":0,"column":13},"action":"insert","lines":["s"],"id":16}],[{"start":{"row":0,"column":13},"end":{"row":0,"column":14},"action":"insert","lines":["t"],"id":17}],[{"start":{"row":0,"column":14},"end":{"row":0,"column":15},"action":"insert","lines":["r"],"id":18}],[{"start":{"row":0,"column":15},"end":{"row":0,"column":16},"action":"insert","lines":["e"],"id":19}],[{"start":{"row":0,"column":16},"end":{"row":0,"column":17},"action":"insert","lines":["a"],"id":20},{"start":{"row":0,"column":17},"end":{"row":0,"column":18},"action":"insert","lines":["s"]}],[{"start":{"row":0,"column":17},"end":{"row":0,"column":18},"action":"remove","lines":["s"],"id":21}],[{"start":{"row":0,"column":17},"end":{"row":0,"column":18},"action":"insert","lines":["m"],"id":22}],[{"start":{"row":0,"column":18},"end":{"row":0,"column":19},"action":"insert","lines":[">"],"id":23}],[{"start":{"row":0,"column":19},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":24}],[{"start":{"row":1,"column":0},"end":{"row":1,"column":1},"action":"insert","lines":["#"],"id":25}],[{"start":{"row":1,"column":1},"end":{"row":1,"column":2},"action":"insert","lines":["i"],"id":26}],[{"start":{"row":1,"column":2},"end":{"row":1,"column":3},"action":"insert","lines":["n"],"id":27}],[{"start":{"row":1,"column":3},"end":{"row":1,"column":4},"action":"insert","lines":["c"],"id":28}],[{"start":{"row":1,"column":4},"end":{"row":1,"column":5},"action":"insert","lines":["l"],"id":29}],[{"start":{"row":1,"column":5},"end":{"row":1,"column":6},"action":"insert","lines":["u"],"id":30}],[{"start":{"row":1,"column":6},"end":{"row":1,"column":7},"action":"insert","lines":["d"],"id":31}],[{"start":{"row":1,"column":7},"end":{"row":1,"column":8},"action":"insert","lines":["e"],"id":32}],[{"start":{"row":1,"column":8},"end":{"row":1,"column":9},"action":"insert","lines":[" "],"id":33}],[{"start":{"row":1,"column":9},"end":{"row":1,"column":11},"action":"insert","lines":["\"\""],"id":34}],[{"start":{"row":1,"column":10},"end":{"row":1,"column":11},"action":"insert","lines":["W"],"id":35}],[{"start":{"row":1,"column":11},"end":{"row":1,"column":12},"action":"insert","lines":["a"],"id":36}],[{"start":{"row":1,"column":12},"end":{"row":1,"column":13},"action":"insert","lines":["t"],"id":37}],[{"start":{"row":1,"column":13},"end":{"row":1,"column":14},"action":"insert","lines":["c"],"id":38}],[{"start":{"row":1,"column":14},"end":{"row":1,"column":15},"action":"insert","lines":["h"],"id":39}],[{"start":{"row":1,"column":15},"end":{"row":1,"column":16},"action":"insert","lines":["."],"id":40}],[{"start":{"row":1,"column":16},"end":{"row":1,"column":17},"action":"insert","lines":["h"],"id":41}]]},"ace":{"folds":[],"scrolltop":780,"scrollleft":0,"selection":{"start":{"row":3,"column":0},"end":{"row":99,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":54,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1501070110624,"hash":"4e1ddfc4e85fbafa0bdd3efccb202f46a7a7a8fa"}
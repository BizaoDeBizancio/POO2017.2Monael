{"filter":false,"title":"Pilha.cpp","tooltip":"/Pratica/pratica5/PilhaDinamica/Pilha/Pilha.cpp","undoManager":{"mark":45,"position":45,"stack":[[{"start":{"row":0,"column":0},"end":{"row":57,"column":1},"action":"insert","lines":["Pilha::Pilha(){","    this->setTopo(NULL);","}","","Pilha::Pilha(Item *pt){","    this->setTopo(pt);","}","","void Pilha::setTopo(Item *pt){","    this->topo = pt;","}","","Item* Pilha::getTopo(){","    return this->topo;","}","","void Pilha::empilhar(Item *pt){","    if(this->vazia()){","        this->setTopo(pt);","    }else{","        Item *aux;","        aux = this->getTopo();","        pt->setProximo(aux);","        this->setTopo(pt);","    }","}","","void Pilha::desempilhar(){","    if(!this->vazia()){","        Item *pt = this->getTopo();","        this->setTopo(pt->getProximo());","        std::cout << \"[\" << pt->getValor() << \"]\" << std::endl;","    }","}","","bool Pilha::vazia(){","    if(this->getTopo()==NULL){","        return true;","    }else{","        return false;","    }","}","","void Pilha::printStack(){","    if(!this->vazia()){","        Item *aux = this->getTopo();","    ","        while(aux!=NULL){","            if(aux->getProximo()==NULL){","                std::cout << aux->getValor();","            }else{","                std::cout << aux->getValor() << \" \";","            }","            aux = aux->getProximo();","        }","        std::cout << std::endl;","    }","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["#"],"id":4}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["i"],"id":5}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":["n"],"id":6}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":4},"action":"insert","lines":["c"],"id":7}],[{"start":{"row":0,"column":4},"end":{"row":0,"column":5},"action":"insert","lines":["l"],"id":8}],[{"start":{"row":0,"column":5},"end":{"row":0,"column":6},"action":"insert","lines":["u"],"id":9}],[{"start":{"row":0,"column":6},"end":{"row":0,"column":7},"action":"insert","lines":["d"],"id":10}],[{"start":{"row":0,"column":7},"end":{"row":0,"column":8},"action":"insert","lines":["e"],"id":11}],[{"start":{"row":0,"column":8},"end":{"row":0,"column":9},"action":"insert","lines":[" "],"id":12}],[{"start":{"row":0,"column":9},"end":{"row":0,"column":10},"action":"insert","lines":["<"],"id":13}],[{"start":{"row":0,"column":10},"end":{"row":0,"column":11},"action":"insert","lines":["i"],"id":14}],[{"start":{"row":0,"column":11},"end":{"row":0,"column":12},"action":"insert","lines":["o"],"id":15}],[{"start":{"row":0,"column":12},"end":{"row":0,"column":13},"action":"insert","lines":["s"],"id":16}],[{"start":{"row":0,"column":13},"end":{"row":0,"column":14},"action":"insert","lines":["t"],"id":17}],[{"start":{"row":0,"column":14},"end":{"row":0,"column":15},"action":"insert","lines":["r"],"id":18}],[{"start":{"row":0,"column":15},"end":{"row":0,"column":16},"action":"insert","lines":["e"],"id":19}],[{"start":{"row":0,"column":16},"end":{"row":0,"column":17},"action":"insert","lines":["z"],"id":20}],[{"start":{"row":0,"column":17},"end":{"row":0,"column":18},"action":"insert","lines":["m"],"id":21}],[{"start":{"row":0,"column":17},"end":{"row":0,"column":18},"action":"remove","lines":["m"],"id":22}],[{"start":{"row":0,"column":16},"end":{"row":0,"column":17},"action":"remove","lines":["z"],"id":23}],[{"start":{"row":0,"column":16},"end":{"row":0,"column":17},"action":"insert","lines":["a"],"id":24}],[{"start":{"row":0,"column":17},"end":{"row":0,"column":18},"action":"insert","lines":["m"],"id":25}],[{"start":{"row":0,"column":18},"end":{"row":0,"column":19},"action":"insert","lines":[">"],"id":26}],[{"start":{"row":0,"column":19},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":27}],[{"start":{"row":1,"column":0},"end":{"row":1,"column":1},"action":"insert","lines":["#"],"id":28}],[{"start":{"row":1,"column":1},"end":{"row":1,"column":2},"action":"insert","lines":["i"],"id":29}],[{"start":{"row":1,"column":2},"end":{"row":1,"column":3},"action":"insert","lines":["n"],"id":30}],[{"start":{"row":1,"column":3},"end":{"row":1,"column":4},"action":"insert","lines":["c"],"id":31}],[{"start":{"row":1,"column":4},"end":{"row":1,"column":5},"action":"insert","lines":["l"],"id":32}],[{"start":{"row":1,"column":5},"end":{"row":1,"column":6},"action":"insert","lines":["u"],"id":33}],[{"start":{"row":1,"column":6},"end":{"row":1,"column":7},"action":"insert","lines":["d"],"id":34}],[{"start":{"row":1,"column":7},"end":{"row":1,"column":8},"action":"insert","lines":["e"],"id":35}],[{"start":{"row":1,"column":8},"end":{"row":1,"column":9},"action":"insert","lines":[" "],"id":36}],[{"start":{"row":1,"column":9},"end":{"row":1,"column":10},"action":"insert","lines":["<"],"id":37}],[{"start":{"row":1,"column":9},"end":{"row":1,"column":10},"action":"remove","lines":["<"],"id":38}],[{"start":{"row":1,"column":9},"end":{"row":1,"column":11},"action":"insert","lines":["\"\""],"id":39}],[{"start":{"row":1,"column":10},"end":{"row":1,"column":11},"action":"insert","lines":["P"],"id":40}],[{"start":{"row":1,"column":11},"end":{"row":1,"column":12},"action":"insert","lines":["i"],"id":41}],[{"start":{"row":1,"column":12},"end":{"row":1,"column":13},"action":"insert","lines":["l"],"id":42}],[{"start":{"row":1,"column":13},"end":{"row":1,"column":14},"action":"insert","lines":["h"],"id":43}],[{"start":{"row":1,"column":14},"end":{"row":1,"column":15},"action":"insert","lines":["a"],"id":44}],[{"start":{"row":1,"column":15},"end":{"row":1,"column":16},"action":"insert","lines":["."],"id":45}],[{"start":{"row":1,"column":16},"end":{"row":1,"column":17},"action":"insert","lines":["h"],"id":46}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":1,"column":17},"end":{"row":1,"column":17},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1500998642868,"hash":"b4389353bb99753a55916ea058831b45ae385609"}
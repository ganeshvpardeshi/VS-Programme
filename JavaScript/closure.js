function abc(x){
    return function xyz(b){
        b=b+x;
        console.log(b);
        return b;
    }
}
abc(4)(2);
// console.log(abc(4));
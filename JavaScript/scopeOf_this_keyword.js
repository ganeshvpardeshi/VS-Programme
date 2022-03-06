const obj ={
    myFunction(){
        console.log(this);
    },
     xyz(b){
         x = 1;
        b=b+x;
        console.log(b);
        return b;
    },
    myFunction1(){
       function myFunction2()
       {
           console.log(this);
       }
       return myFunction2(); 
    }
}
// console.log(obj.myFunction1);//this keyword will refers current object 
obj.xyz(2);
const test = obj.myFunction();
obj.myFunction1();//global object 
test;//this keyword will refers current object 
function greet ()
{
    console.log(this);
}
const test1 = new greet();
// console.log(test1);
/*following "call","apply",and "bind" method are changing the scope of
"this keyword" to the current object(obj) */
const obj ={
        name : "ganesh",
        age : 19,
}
let myFunction = function(city,surname,middlename)
{
    console.log(this.name+" "+middlename+" "+surname+" "+this.age+" "+city);
}
myFunction.call(obj,'Nashik','Pardeshi');
/*callMethod:-  in this above "call" method use "this keyword" to refers the 
current object that pass in round bracket  */
myFunction.apply(obj,['Nashik','Pardeshi','Vijay']);
/*applyMethod:-   in this above "apply" method it takes parameters in "array format" 
means if ypu want to pass parameters you want use array   */
let test = myFunction.bind(obj,'aurangabad','vijay');
test();
/* bindMethod:-  in this above "bind" method, the function will do the operation first
but we want to call bind method excusion or displaying that bind method 
operation by manually */
function greet()
{
    console.log(this);
    console.log(this === global);//true 
    /*this line will check the same properties of both keyword */ 
}
greet(); /*this above function greet's this keyword will refering 
directly to the main object or parent object that is "Gobal Object"  */

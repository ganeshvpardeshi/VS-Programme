const posts = [{name: "first post", title: "this is first post"},
               {name: "second post", title: "this is 2nd post"}];



function getPost() {
    setTimeout(function(){
        posts.forEach(function(ele){
            console.log("name", ele.name);
            console.log("title", ele.title);
        })
    }, 1000);
}
function createPost(post) {
    return new Promise((resolve, reject) => {
            setTimeout(function(){
                    posts.push(post);
                    let err = false;
                    if(!err) {
                        resolve();
                    } else {
                        reject("something went wrong");
                    }
                }, 2000);
    })
}
// createPost({name:"3rd post", title:"this is my 3rd post"}, getPost)
// // getPost();
// createPost({name:"3rd post", title:"this is my 3rd post"}).then(getPost).catch(function(err) {console.log("error in catch", err)});

async function init() {
    await createPost({name:"3rd post", title:"this is my 3rd post"});
    getPost();
}
init();


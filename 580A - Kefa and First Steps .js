const rd = require('readline');

const rl = rd.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('', (ni) => {
    const n = parseInt(ni);
    rl.question('',(arri) =>{
        const arr = arri.split(' ').map(Number);
        
        let ml = 1;
        let cl = 1;
        for(let i = 0; i < n; i++){
            if(arr[i]>=arr[i-1]){
                cl ++;
                ml = Math.max(ml, cl);
            }
            else{
                cl = 1;
            }
        }
        console.log(ml);
        rl.close();
    })

});

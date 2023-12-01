const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function cd(n, m) {
  for (let i = 1; i <= n; i++) {
    if (i % 2 !== 0) {
      console.log('#'.repeat(m));
    } else {
      if (i % 4 === 0) {
        console.log('#' + '.'.repeat(m - 1));
      } else {
        console.log('.'.repeat(m - 1) + '#');
      }
    }
  }
}

rl.question('', (input) => {
  const [n, m] = input.split(' ').map(Number);
  cd(n, m);
  rl.close();
});

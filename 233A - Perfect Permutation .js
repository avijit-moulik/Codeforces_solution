const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('', (input) => {
  const n = parseInt(input);

  if (n % 2 === 1) {
    console.log(-1);
  } else {
    const p = Array.from({ length: n }, (_, i) => i + 1);

    for (let i = 0; i < n; i += 2) {
      const temp = p[i];
      p[i] = p[i + 1];
      p[i + 1] = temp;
    }

    console.log(p.join(' '));
  }

  rl.close();
});

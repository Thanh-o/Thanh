import React, { useState } from 'react';
import './s1.css'

const PTB2 = () => {
const [a, setA] = useState(0);
const [b, setB] = useState(0);
const [c, setC] = useState(0);
const [solution, setSolution] = useState('');

const KQ = () => {
const delta = b * b - 4 * a * c;
if (delta < 0) {
setSolution('Phương trình vô nghiệm');
} else if (delta === 0) {
const x = -b / (2 * a);
setSolution(`Phương trình có nghiệm kép: x = ${x}`);
} else {
const x1 = (-b + Math.sqrt(delta)) / (2 * a);
const x2 = (-b - Math.sqrt(delta)) / (2 * a);
setSolution(`Phương trình có hai nghiệm phân biệt: x1 = ${x1} và x2 = ${x2}`);
}
};

return (
<div>
    <h1>Giải phương trình bậc 2: ax2 + bx + c = 0  </h1>
    <h4>Ta có phương trình: </h4>
<input type="number" onChange={(e) => setA(Number(e.target.value))} />x^2 +
<input type="number" onChange={(e) => setB(Number(e.target.value))} />x +
<input type="number" onChange={(e) => setC(Number(e.target.value))} /> = 0 
<br />
<br />
<button onClick={KQ}>Giải phương trình</button><br/><br />
{solution}
</div>
);
};

export default PTB2;
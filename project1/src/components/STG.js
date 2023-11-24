import React, { useState } from 'react';
import './STG.css';

const STG = () => {
  const [a, setA] = useState(0);
  const [b, setB] = useState(0);
  const [c, setC] = useState(0);
  const [solution, setSolution] = useState('');

  const s = (a + b + c) / 2;
  const area = Math.sqrt(s * (s - a) * (s - b) * (s - c));

  return (
    <div>
      <h1>Tam giác với cạnh </h1>
      a = <input type="number" onChange={(e) => setA(Number(e.target.value))} /><br/>
      b = <input type="number" onChange={(e) => setB(Number(e.target.value))} /><br/>
      c = <input type="number" onChange={(e) => setC(Number(e.target.value))} /><br/>
      <h2>Diện tích = {area.toFixed(2)}</h2>
    </div>
  );
}

export default STG;
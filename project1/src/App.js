import logo from './logo.svg';
import './App.css';
import Product from './product';
import './style.css';

function App() {
  return (
    <div>
      <h1>PRODUCT</h1>
      <div className="App">
        <Product
        img="https://giadinh.mediacdn.vn/2021/1/2/photo-1-1609589680616478051930.jpg"
        name="new product"
        desc="the new product of Nike "
        price="$200"
          />
        <Product
        img="https://vcdn-giadinh.vnecdn.net/2022/05/03/gai-beo-1-2-6866-1651575364.jpg"
        name="new product"
        desc="the new product of Nike "
        price="$200"
          />
        <Product
        img="https://bizweb.dktcdn.net/100/438/408/files/con-gai-tuoi-dan-1998-yody-vn1.jpg?v=1677037645343"
        name="new product"
        desc="the new product of Nike "
        price="$200"
          />     
      
     </div>
    </div>
   
  );
}

export default App; 



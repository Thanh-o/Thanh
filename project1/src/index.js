import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import App1 from './App1';
import App2 from './Passing the updater function';
import reportWebVitals from './reportWebVitals';
import RegistrationForm from './components/Registerform'
import PTB2 from './components/PT B2';
import STG from './components/STG';
import Appx from './components/App';


class Test extends React.Component{
  // Hàm khởi tạo Object => step 1 Initiallzation
  constructor(props){
    // super: gọi các phương thức khởi tạo(contructor) của lớp(class) cha,dùng lại hàm khởi tạo của lớp cha
    super(props);
    // thí : gọi đối tượng (object) hiện tại của class
    this.state = {hello: "world!"};
  }
  // Mounting : Step 2
  componentDidMount(){
    console.log("componentDidMount()");
  }
  // Step 3
  changeState(){
    this.setState({hello: "fpt- aptect"});
  }
  render(){
    return(
      <div>
        <h1>Hello{this.state.hello}</h1>
        <h2>
          <a onClick={this.changeState.bind(this)}>Click here!</a>
        </h2>
        
      </div>
    );
  }
  // Step 4
  shouldComponentUpdate(nextProps, nextState){
    console.log("shouldCoponentUpdate()");
    return true;
    // Step 5
  }
  componentDidUpdate(){
    console.log("componentDidUpdate()")
  }
}


const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
    {/* <App /> */}
    <Appx></Appx>
  </React.StrictMode>
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals(); 

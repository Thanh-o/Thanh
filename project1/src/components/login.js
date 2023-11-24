import React,{Component} from "react";
import './style.css';

// extend: kế thừa
// vd: A extend B;thì B là Lớp(class) cha của A;
// Login kế thừa lại những Method, property trong lớp Compenent
class login extends Component
{
    render(){
        return(
            <div>
                <h2>Login Form</h2>
                Username: <input type="text"/>
                <br/>
                Password: <input type="password"/>
                <br/>
                <input type="sumbit"/>
            </div>
        );
    }
}
export default login;
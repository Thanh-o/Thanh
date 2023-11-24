import React,{useState} from "react";

function RegistrationForm(){
    const [inputs,setInput] = useState({});
    const handleChange =(event)=>{
        const name = event.target.name;
        const value = event.target.value;
        console.log(name);
        console.log(value);
        setInput(values => ({...values,[name]:value})) 
    }
    const handleSubmit =(event) =>{
        //  kiểm soát bất đồng bộ sự kiện đảm bảo các sự kiện ko diễn ra đồng thời
        event.preventDefault();
        console.log(inputs);
    }
    return(
        <div>
            <form onSubmit={handleSubmit}>
                <label>
                    Enter your Name: <input
                    type="text"
                    name="username"
                    value={inputs.userName || ""}
                    onChange={handleChange}
                    />
                </label>
                <br/>
                <input type="submit" />
            </form>
        </div>
    )

}
export default RegistrationForm;
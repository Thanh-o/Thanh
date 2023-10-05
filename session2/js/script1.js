// JavaScript:
// 1. Ngôn ngữ kịch bản scripting (ko phải ngôn ngữ lập trình)
// 2. Hướng đối tượng ko hoàn toàn 
// (dùng như hướng đối tượng nhưng ko thể ko có tính kế thừa)
// document.getElementsByName(): document: là 1 Đối tượng(object)
// getElementsByName(): Phương thức(Method)
// Để truy cập(gọi) 1 Phương thức: Tên đối tượng .(chấm) Tên phương thức
// document.getElementsByName()

// int a;
// a=10;
// var a; //có thể là bất kỳ dữ liệu nào
// a = "Hello";
// a = 1.5;
// a = 20;
var today = new Date();//today là 1 object có kiểu Date; Ngày
var hourNow = today.getHours;//Giờ hiện tại
var greeting;
if(hourNow > 18){
    greeting = "Good evening";
}else if(hourNow > 12){
    greeting = "Good afternoon";
}else if(hourNow > 0){
    greeting = "Good morning";
}else{
    greeting = "Welcome";
}
document.write('<h3>' + greeting + '<H3>');
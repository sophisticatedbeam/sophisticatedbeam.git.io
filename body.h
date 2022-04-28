<!doctype html>
<!--
<htmlApplication
  applicationName="Menu Demo"
  fixedSize="no"
  width=900
  height=500
  menu="yes" />
-->
<html>
<head>
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<style>
body { 
  background-image: url("pattern.svg"); 
}
</style>

<script type="text/javascript">

function callback1()
{
  alert("callback1");
}
function callback2()
{
  alert("callback2");
}
function callback3()
{
  alert("callback3");
}
function callback4()
{
  alert("callback4");
}
function callback5()
{
  alert("callback5");
}
function createMenu()
{
  window.external.AddMenu("Menu1","Item1","callback1");
  window.external.AddMenu("Menu1","Item2","callback2");
  window.external.AddMenu("Menu1","","");
  window.external.AddMenu("Menu1","Item3","callback3");
      
  window.external.AddMenu("Menu2","Item1","callback4");
  window.external.AddMenu("Menu2","Item2","callback5");
}

</script>
</head>
<body onload="createMenu()">

</body>
</html>

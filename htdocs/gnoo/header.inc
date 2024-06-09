<div id="header">
<%if(skintype,archive)%>
	<h1><a href="<%sitevar(url)%>" title="<%blogsetting(name)%>"><img src="xxx/logo2-trans.png" alt="La Escocesa - Asociación de artistas y artesanos" name="La Escocesa" id="La_Escocesa" width="556" height="63" border="0"></a></h1>
<%endif%>
<%if(skintype,archivelist)%>
	<h1><a href="<%sitevar(url)%>" title="<%blogsetting(name)%>"><img src="xxx/logo2-trans.png" alt="La Escocesa - Asociación de artistas y artesanos" name="La Escocesa" id="La_Escocesa" width="556" height="63" border="0"></a></h1>
<%endif%>
<%if(skintype,error)%>
	<h1><a href="<%sitevar(url)%>" title="<%blogsetting(name)%>"><img src="xxx/logo2-trans.png" alt="La Escocesa - Asociación de artistas y artesanos" name="La Escocesa" id="La_Escocesa" width="556" height="63" border="0" /></a></h1>
<%endif%>
<%if(skintype,index)%>
	<h1><a href="<%sitevar(url)%>" title="<%blogsetting(name)%>"><img src="xxx/logo2-trans.png" alt="La Escocesa - Asociación de artistas y artesanos" name="La Escocesa" id="La_Escocesa" width="556" height="63" border="0" /></a></h1>
<%endif%>
<%if(skintype,item)%>
	<h1><a href="<%sitevar(url)%>" title="<%blogsetting(name)%>"><img src="xxx/logo2-trans.png" alt="La Escocesa - Asociación de artistas y artesanos" name="La Escocesa" id="La_Escocesa" width="556" height="63" border="0" /></a></h1>
<%endif%>
<%if(skintype,member)%>
	<h1><a href="<%sitevar(url)%>" title="<%blogsetting(name)%>"><img src="xxx/logo2-trans.png" alt="La Escocesa - Asociación de artistas y artesanos" name="La Escocesa" id="La_Escocesa" width="556" height="63" border="0" /></a></h1>
<%endif%>
<%if(skintype,search)%>
	<h1><a href="<%sitevar(url)%>" title="<%blogsetting(name)%>"><img src="xxx/logo2-trans.png" alt="La Escocesa - Asociación de artistas y artesanos" name="La Escocesa" id="La_Escocesa" width="556" height="63" border="0" /></a></h1>
<%endif%>
<div id="navigation">
<h3 class="hidden">Navigation</h3>
	<ul>
		<li class="nav1"><a href="<%sitevar(url)%>" title="Home page" accesskey="1">Home</a></li>
		<li class="nav2"><a href="<%todaylink%>" title="Hoy" accesskey="2">Hoy</a></li>
		<li class="nav3"><a href="<%archivelink%>" title="Historial" accesskey="3">Historial</a></li>
		<%if(loggedin)%>
		<li class="nav4"><a href="<%adminurl%>" title="Administrati&oacute;n" accesskey="4">Admin</a></li>
		<%endif%>
	</ul>
</div>
<div id="fontcontrol">
	<h3 class="hidden">Adjust font size:</h3>
	<div id="mail"><a href="&#109;&#97;&#105;&#108;&#116;&#111;&#58;&#105;&#110;&#102;&#111;&#64;&#108;&#97;&#101;&#115;&#99;&#111;&#99;&#101;&#115;&#97;&#46;&#111;&#114;&#103;">&#105;&#110;&#102;&#111;&#64;&#108;&#97;&#101;&#115;&#99;&#111;&#99;&#101;&#115;&#97;&#46;&#111;&#114;&#103;</a></div>
</div><!--
<div id="fontcontrol">
	<h3 class="hidden">Adjust font size:</h3>
	<ul>
		<li class="font1"><a href="#" onclick="setActiveStyleSheet('Small');return false;" title="Fuentes peque&ntilde;as"><i>Fuentes peque&ntilde;as</i></a></li>
		<li class="font2"><a href="#" onclick="setActiveStyleSheet('Medium');return false;" title="Fuentes medianas"><i>Fuentes medianas</i></a></li>
		<li class="font3"><a href="#" onclick="setActiveStyleSheet('Large');return false;" title="Fuentes grandes"><i>Fuentes grandes</i></a></li>
	</ul>
</div>-->
</div>

<div id="wrapper">
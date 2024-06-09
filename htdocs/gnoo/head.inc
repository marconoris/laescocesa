<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="es" lang="es">
<head>
<!-- compliance patch for microsoft browsers -->
<!--[if gte IE 7]>
    <link rel="stylesheet" href="<%skinfile(IE7fix.css)%>" type="text/css" media="screen" />
	<![endif]-->
<!--[if lt IE 7]>
	<script type="text/javascript" src="/scripts/supersleight-min.js"></script>
    <link rel="stylesheet" href="<%skinfile(IEfix.css)%>" type="text/css" media="screen" />
	<![endif]-->


	<meta http-equiv="Content-Type" content="text/html; charset=utf8" /> 
	<meta name="generator" content="<%version%>" />
	<meta name="description" content="<%if(skintype,error)%><%sitevar(name)%><%else%><%blogsetting(name)%><%endif%> - Colectivo de los vecinos de La Escocesa" />
	<meta name="copyright" content="Copyright (c) 2005 by La Escocesa - Colectivo de los vecinos de La Escocesa" />
	<meta name="revisit-after" content="1 days" />
	<meta name="distribution" content="Global" />
	<meta name="author" content="www.marconoris.com" />
	<meta name="rating" content="General" />
	<meta name="KEYWORDS" content="La Escocesa, Can Ricart, Poblenou, Barcelona, 22@. Notícies de La Escocesa" />
	<meta http-equiv="Expires" content="-1" />
	<meta http-equiv="Pragma" content="no-cache" />
	<meta http-equiv="Cache-Control" content="no-cache, must-revalidate" />
	<script type="text/javascript" src="/nucleus/scripts/jquery-latest.pack.js"></script>
	<script type="text/javascript" src="/nucleus/scripts/thickbox-compressed.js"></script>
	<link rel="stylesheet" href="/nucleus/scripts/thickbox.css" type="text/css" media="screen" />
	<!-- RSS 2.0 feed -->
	<link rel="alternate" type="application/rss+xml" title="RSS" href="/nucleus/xml-rss2.php?blogid=1" />
	<link rel="EditURI" type="application/rsd+xml" title="RSD" href="rsd.php" />
	<link rel="stylesheet" type="text/css" href="<%skinfile(01_style0101.css)%>" />
	<link rel="alternate stylesheet" type="text/css" href="<%skinfile(01_style0101.css)%>" title="Small" />
	<link rel="alternate stylesheet" type="text/css" href="<%skinfile(01_style0102.css)%>" title="Medium" />
	<link rel="alternate stylesheet" type="text/css" href="<%skinfile(01_style0103.css)%>" title="Large" />
	<link rel="stylesheet" type="text/css" href="<%skinfile(01_navigation.css)%>" />
	<link rel="stylesheet" type="text/css" href="<%skinfile(nicetitle.css)%>" />

	<script type="text/javascript" src="<%skinfile(styleswitcher.js)%>"></script>
<%if(skintype,archive)%>

	<title><%blogsetting(desc)%> &raquo; Archive - La Escocesa, Poblenou, Barcelona, 22@. Colectivo de los vecinos de La Escocesa</title>
	<link rel="archives" title="Archives" href="<%archivelink%>" />
	<link rel="top" title="Today" href="<%sitevar(url)%>" />
	<link rel="up" href="<%todaylink%>" title="Today" />
	</head>
	<body id="archives">
<%endif%>
<%if(skintype,archivelist)%>
	<title><%blogsetting(desc)%> &raquo; Archive List</title>
	<link rel="archives" title="Archives" href="<%archivelink%>" />
	<link rel="top" title="Today" href="<%sitevar(url)%>" />
	<link rel="up" href="<%todaylink%>" title="Today" />
	</head>
	<body id="archives">
<%endif%>
<%if(skintype,error)%>
	<title><%sitevar(name)%> &raquo; Error!</title>
	<link rel="top" title="Today" href="<%todaylink%>" />
	<link rel="up" href="<%todaylink%>" title="Today" />
	</head>
	<body id="error">
<%endif%>
<%if(skintype,index)%>
	<title><%blogsetting(desc)%></title>
	<link rel="bookmark" title="Nucleus" href="http://nucleuscms.org/" />
	<link rel="archives" title="Archives" href="<%archivelink%>" />
	<link rel="top" title="Today" href="<%todaylink%>" />
	<link rel="alternate" type="application/xml+rss" title="RSS" href="xml-rss2.php" />
	<link rel="EditURI" type="application/rsd+xml" title="RSD" href="rsd.php" />
	</head>
	<body id="home">
<%endif%>
<%if(skintype,item)%>
	<title><%blogsetting(desc)%> &raquo; <%itemtitle%></title>
	<link rel="archives" title="Archives" href="<%archivelink%>" />
	<link rel="top" title="Today" href="<%sitevar(url)%>" />
	<link rel="next" href="<%nextlink%>" title="Next Item" />
	<link rel="prev" href="<%prevlink%>" title="Previous Item" />
	<link rel="up" href="<%todaylink%>" title="Today" />
	</head>
	<body id="itempage">
<%endif%>
<%if(skintype,member)%>
	<title><%sitevar(name)%> &raquo; Member Details</title>
	<link rel="top" title="Today" href="<%todaylink%>" />
	<link rel="up" href="<%todaylink%>" title="Today" />
	</head>
	<body id="member">
<%endif%>
<%if(skintype,search)%>
	<title><%blogsetting(desc)%> &raquo; Search</title>
	<link rel="archives" title="Archives" href="<%archivelink%>" />
	<link rel="top" title="Today" href="<%sitevar(url)%>" />
	<link rel="up" href="<%todaylink%>" title="Today" />
</head>
<body id="search"><a name="top" id="top"></a>
<%endif%>
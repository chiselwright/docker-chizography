<!-- header.inc -->
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="">
    <meta name="author" content="[%author%]">

    [%# QUICK HACK %][% IF graph_headers %][%graph_headers%][% END %]

    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon" />

    <title>[% IF page_title %][%page_title%] - [% END %][%site_name%]</title>

    <!-- Bootstrap core CSS -->
    <link rel="stylesheet" href="//netdna.bootstrapcdn.com/bootstrap/3.0.0/css/bootstrap.min.css">
<link href='//fonts.googleapis.com/css?family=Roboto+Condensed:400,300|Englebert' rel='stylesheet' type='text/css'>
<link href='//fonts.googleapis.com/css?family=News+Cycle:400,700' rel='stylesheet' type='text/css'>



    <!-- Custom styles for this template -->
    <link rel="stylesheet" href="/css/chizography.css">
    <!-- http://www.google.com/fonts#UsePlace:use -->
    <link href='//fonts.googleapis.com/css?family=Roboto+Condensed' rel='stylesheet' type='text/css'>

    <!-- HTML5 shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!--[if lt IE 9]>
      <script src="/assets/js/html5shiv.js"></script>
      <script src="/assets/js/respond.min.js"></script>
    <![endif]-->

<script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script>
<script>
     (adsbygoogle = window.adsbygoogle || []).push({
          google_ad_client: "ca-pub-2964145353238376",
          enable_page_level_ads: true
     });
</script>

  </head>

  <body>
    [% PROCESS facebook_sdk_whosfirst.inc %]
    <!-- Static navbar -->
    <div class="navbar navbar-default navbar-static-top" role="navigation">
      <div class="container">
        <div class="navbar-header">
          <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
            <span class="sr-only">Toggle navigation</span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
          <a class="navbar-brand" href="/">[%site_name%]</a>
        </div>
        <div class="navbar-collapse collapse">
          <ul class="nav navbar-nav">
            <li class="dropdown">
                <a href="#" class="dropdown-toggle" data-toggle="dropdown">Personal <b class="caret"></b></a>
                <ul class="dropdown-menu">
                    <li><a href="/about">About</a></li>
                    <li><a href="/contact">Contact</a></li>
                    <li class="divider"></li>
                    <li><a href="http://blog.chisel.pm/">Personal musings&hellip;</a></li>
                    <li><a href="http://blogs.perl.org/users/chisel/">Technical musings&hellip;</a></li>
                    <li class="divider"></li>
                    <li>&nbsp;&nbsp;Gaming</li>
                    <li><a href="http://boardtalk.chizography.net">Board Talk</a></li>
                    <li><a href="http://www.gameshelf.se/?&u=chizcw">Collection Info</a></li>
                </ul>
            </li>
            <li class="dropdown">
                <a href="#" class="dropdown-toggle" data-toggle="dropdown">Apps <b class="caret"></b></a>
                <ul class="dropdown-menu">
                    <li><a href="/droid">Android</a></li>
                    <ul><li><a href="/droid/whosfirst">Who's First?</a></li></ul>
                    <ul><li><a href="/droid/spytimer">SpyTimer</a></li></ul>
                    <ul><li><a href="/droid/spytimer.free">SpyTimer FREE</a></li></ul>
                </ul>
            </li>
            <li><a href="/products/clothing">Clothing</a></li>
          </ul>
        </div><!--/.nav-collapse -->
      </div>
    </div>
<!-- header.inc -->

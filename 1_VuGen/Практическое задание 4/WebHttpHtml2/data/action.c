Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=99", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_4NRQJ23B87=GS1.1.1632641092.1.0.1632641092.0; DOMAIN=api.adblock-for-youtube.com");

	web_add_cookie("_ga=GA1.2.392403629.1632641092; DOMAIN=api.adblock-for-youtube.com");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"99\", \"Google Chrome\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("adregex", 
		"URL=https://api.adblock-for-youtube.com/api/v1/adregex", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		LAST);

	web_url("update", 
		"URL=https://api.adblock-for-youtube.com/api/v1/update?v=5.1.7&xtid=cmedhionkhpnakcndndgjdbohmhepckk", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j96&a=1087150236&t=pageview&_s=1&dl=chrome-extension%3A%2F%2Fcmedhionkhpnakcndndgjdbohmhepckk%2F_generated_background_page.html&dp=background.html%3Fv%3D5.1.7&ul=ru-ru&de=UTF-8&sd=24-bit&sr=1920x1080&vp=&je=0&_u=QCCAgEAB~&jid=882821311&gjid=1854598965&cid=1036189143.1632641083&tid=UA-55554816-6&_gid=1271469547.1647872441&z=1648506799", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("IDE=AHWqTUnjnQBxJPRjRgKwU-LrdNGB4Qpp9CH96Gci0aVCKAHmOwoMD1cLJrEkz9f4zEU; DOMAIN=stats.g.doubleclick.net");

	web_add_header("Origin", 
		"chrome-extension://cmedhionkhpnakcndndgjdbohmhepckk");

	web_add_header("X-Client-Data", 
		"CI22yQEIprbJAQjEtskBCKmdygEIg9LKAQiSocsBCJ75ywEI54TMAQibnMwBCNCizAE=");

	web_custom_request("collect", 
		"URL=https://stats.g.doubleclick.net/j/collect?t=dc&aip=1&_r=3&v=1&_v=j96&tid=UA-55554816-6&cid=1036189143.1632641083&jid=882821311&gjid=1854598965&_gid=1271469547.1647872441&_u=QCCAgEABAAAAAE~&z=826632662", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_add_cookie("NID=511=OVUaQplR0fvEXVpnZUGBnTJ2ZPRnoW3FbRFIxe6fm934TxHhRbVBs2VAm4LBJ6yiCjfmV-w8jqGennTHLQN0tadU0P6Wrc51ou6uQBL3wdu0NwM63ncZK0OAaiMdvPnlutMWj0uh8bdvzgkIYI25oEXi_emF7RBXsMPxhh7gdxr0GgVAUt_PMRKiAk7sdxaUzuswF4zVKO28NHc; DOMAIN=www.google.com");

	web_add_cookie("1P_JAR=2022-03-27-04; DOMAIN=www.google.com");

	web_revert_auto_header("DNT");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("ddljson", 
		"URL=https://www.google.com/async/ddljson?async=ntp:2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("SMSV=ADHTe-D1d5sbGUQRuoK53zoqSvLrr9x_ig1Xw2x-Wxsf6Kpdvq1SYs-TawYoZaJMaTMxhYdCa7c3PsAYLaCMJo6pz39aP9GNe_-cGgzjqNP3tfHOslGKZ1s; DOMAIN=accounts.google.com");

	web_add_cookie("S=billing-ui-v3=-IVxZDwm2-39J3rcffjvoVJiB-Na0SmE:billing-ui-v3-efe=-IVxZDwm2-39J3rcffjvoVJiB-Na0SmE; DOMAIN=accounts.google.com");

	web_add_cookie("LSOLH=_SVI_EPL3gY_r8fUCGAwiP01BRURIZl9xWS1SdFU4T2g3Z0dDWGpDR2JHNjFJWHcxYllBSGk2djU0V1ZiaXNPaU1xUTJnQi04REhPYnY1QQ_:27406394:3ee8; DOMAIN=accounts.google.com");

	web_add_cookie("user_id=106486266330361520242; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQI7JQB; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI51J482NLyi7JwKq9vq4JiEanLKt2wP5sdYRbKy__VXsxg0nKsGxkvS9UIaCnAU_UufIrMVjUjouzSL1zXaBjqnI37AA4urD8eTXpI1p5m9rESs0HW-HJcEQmERM3b9Sw68XKTQRpnAEnUOLrX2OtdZgRk3yw; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=AVQQ_LBvRPHAcZ0-RBrZQQuggJ49qJjFmwGPPj6RM869iXnL-Ogy90Xojx8; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=OVUaQplR0fvEXVpnZUGBnTJ2ZPRnoW3FbRFIxe6fm934TxHhRbVBs2VAm4LBJ6yiCjfmV-w8jqGennTHLQN0tadU0P6Wrc51ou6uQBL3wdu0NwM63ncZK0OAaiMdvPnlutMWj0uh8bdvzgkIYI25oEXi_emF7RBXsMPxhh7gdxr0GgVAUt_PMRKiAk7sdxaUzuswF4zVKO28NHc; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2022-03-27-04; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:CUjKLmQQv4zMMfklSZYFJkz4QMPVsDufbz-culJ78053JavcomjyT2ziiOKylrprADtjKmfvl-7f0NS29NF52OKg8yx5XA:LQe1YctkxBp5V1Ml; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"ckcmdpmhiekiihmfjffdehhbhgllpapg,ipjjmoaaiokdonnldckdhmhojapklmdi,phcogmapnhgdbmilclanafaljonkjppa");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_auto_header("X-Goog-Update-Updater", 
		"chromecrx-99.0.4844.82");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=99.0.4844.82&lang=ru&acceptformat=crx3&x=id%3Dckcmdpmhiekiihmfjffdehhbhgllpapg%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D7%2526e%253D0%2526dr%253D1&x=id%3Dipjjmoaaiokdonnldckdhmhojapklmdi%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D7%2526e%253D1&x="
		"id%3Dphcogmapnhgdbmilclanafaljonkjppa%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D7%2526e%253D0%2526dr%253D1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"aapbdbdomjkkjkaonfhkkikfgjllcleb,aapocclcgogkmnckokdopfmhonfmgoek,aeajpdomellldbbkbeccocedicnehfhe,ahkjpbeeocnddjkakilopmfdlnjdpcdm,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,bihmplhobchoageeokmgbdihknkjbknd,blpcfgokakmgnkcojhhkbfbldkacnbeo,cmedhionkhpnakcndndgjdbohmhepckk,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,gighmmpiobklfepjocnamgkkbiglidom,lbdmhpkmonokeldelekgfefldfboblbj,mfhcmdonhekjhfbjmeacdjbhlfgpjabp,nmmhkkegccagdldgiimedpiccmgmieda,"
		"ojplelelocihfchkdaebocpankipadmp,pjkljhegncpnkpknbcohdijeoejaedia,ponfpcnoihfmfllpaingbgckeeldkhle");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:iYruhwqCD5HXzsmd4PMeS8y9v3LjRcspn7vy6gNive4&cup2hreq=340ab7877e114aa37e929c86416963265bd2711eae11b48b5d3713180375b22d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"aapbdbdomjkkjkaonfhkkikfgjllcleb\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.5d10668974197fc78da78e47bd468cb4ad1960fddd087c86f0c65cf79ad6237f\"}]},\"ping\":{\"ping_freshness\":\"{d4d0ba57-e6c3-44a9-b0db-85fbadfe3c20}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"2.0.12\"},{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{1af10638-a74a-439c-b389-7d59ad200cfc}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aeajpdomellldbbkbeccocedicnehfhe\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3\"}]},\"ping\":{\"ping_freshness\":\"{0303390a-1635-4043-8314-0f6039b320fb}\",\"rd\":5563},\"updatecheck\":{},"
		"\"version\":\"3\"},{\"appid\":\"ahkjpbeeocnddjkakilopmfdlnjdpcdm\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.97f69affddad16dd92d72008ff7727e86149d54f9c2e9a5a66227f96738cfbfd\"}]},\"ping\":{\"ping_freshness\":\"{d82d5f2e-59b3-43dd-b805-416ae2727e3b}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"1.8.42.0\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\""
		"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{a25678b9-4841-4b8b-9c8c-72ae285afa54}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{4fddbde9-3321-4cb2-98c3-65119573dd1a}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"14.5\"},{\"appid\":\"bihmplhobchoageeokmgbdihknkjbknd\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.1.0\"}]},\"ping\":{\"ping_freshness\":\"{bf4c53be-5b88-436f-8608-4bd909d92100}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"4.1.0\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{2e15850f-dce2-4527-ae2f-a3902f2077bc}\",\"rd\":5563},\"updatecheck"
		"\":{},\"version\":\"4.2.8\"},{\"appid\":\"cmedhionkhpnakcndndgjdbohmhepckk\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.82a60c82091faf59e280e9dccf434818fd2fe5ed2603c07b42962bc1f798e998\"}]},\"ping\":{\"ping_freshness\":\"{9c3fac18-c53e-4e33-8792-3245cf245258}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"5.1.7\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages"
		"\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{4506b06d-0c60-4bd6-b241-29188a063062}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.8c309cfaa94404e912b8bdda17b94a22dc1f4203dac28f709dc47dde60467282\"}]},\"ping\":{\"ping_freshness\":\"{00787d6b-2782-4e7a-9edc-29b18c4c8b06}\",\"rd\":5563},\"updatecheck\":{},\"version\":"
		"\"1.41.0\"},{\"appid\":\"gighmmpiobklfepjocnamgkkbiglidom\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.d93ec80a6738ff5bbdeed14c0fcbd87b09bb2e5f91c475330f28e0ba9e6b6513\"}]},\"ping\":{\"ping_freshness\":\"{f095ac45-b6b3-4674-92bd-165a485a258a}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"4.44.0\"},{\"appid\":\"lbdmhpkmonokeldelekgfefldfboblbj\",\"cohort\":\"1::\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\""
		"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3.3\"}]},\"ping\":{\"ping_freshness\":\"{f345bc6e-9a4c-4116-90d3-1955cb76dc77}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"3.3\"},{\"appid\":\"mfhcmdonhekjhfbjmeacdjbhlfgpjabp\",\"cohort\":\"1::\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.4\"}]},\"ping\":{\"ping_freshness\":\"{5de74df4-89cc-4206-9764-fadc221f0885}\",\"rd\":5563},\"updatecheck\":{},\"version\":\""
		"1.0.4\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{5449b891-01ee-479d-b693-8b51f44cc1db}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"ojplelelocihfchkdaebocpankipadmp\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3.20\"}]},\"ping\":{\"ping_freshness\":\""
		"{8f1ce785-d6c8-42a7-b855-b580882c9a6b}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"3.20\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.3\"}]},\"ping\":{\"ping_freshness\":\"{5862bd5d-4a38-4788-a5e0-d984f2224b65}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"ponfpcnoihfmfllpaingbgckeeldkhle\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\""
		"packages\":{\"package\":[{\"fp\":\"2.2.0.112\"}]},\"ping\":{\"ping_freshness\":\"{6744d1b3-c9f0-4524-8b18-21337fe080f8}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"2.0.112\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"ru\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.22000.556\"},\"prodversion\":\"99.0.4844.82\",\"protocol\":\"3.1\",\"requestid\":\"{248d31c8-8449-424a-bea7-c30495a19db4}\",\"sessionid\":\"{208c80ab-fdae-4c42-b5ee-a5bda8b802ec}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.122\"},\"updaterversion\":\"99.0.4844.82\"}}", 
		LAST);

	web_revert_auto_header("X-Goog-Update-Interactivity");

	web_revert_auto_header("X-Goog-Update-Updater");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("X-Client-Data", 
		"CI22yQEIprbJAQjEtskBCKmdygEIg9LKAQjfgssBCJKhywEI6vLLAQie+csBCOeEzAEIpY7MAQjOmMwBCJuczAEIwZ7MAQiaocwBCNCizAE=");

	web_url("newtab_ogb", 
		"URL=https://www.google.com/async/newtab_ogb?hl=ru&async=fixed:0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("DNT", 
		"1");

	web_add_header("Origin", 
		"chrome-extension://bihmplhobchoageeokmgbdihknkjbknd");

	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"99\", \"Google Chrome\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("status", 
		"URL=https://api.hsselite.com/1/plain/status", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\n\\x89\\x01\\x08\\x05\\x12\"TC559f8c0ea706a2ed8005738d5c64af4c\\x1A\\x16com.touchvpn.extchrome \\xA4\\xB9\\x02*\\x06Chrome2\\x06Chrome:\\x0FWindows NT 10.0B\\x02ruR b1fbd5c88f0e45b10000000881315668", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("newtab_promos", 
		"URL=https://www.google.com/async/newtab_promos", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Origin", 
		"chrome-extension://bihmplhobchoageeokmgbdihknkjbknd");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"99\", \"Google Chrome\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("payment_popup", 
		"URL=https://api.hsselite.com/1/plain/config/payment_popup", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\n\\x89\\x01\\x08\\x05\\x12\"TC559f8c0ea706a2ed8005738d5c64af4c\\x1A\\x16com.touchvpn.extchrome \\xA4\\xB9\\x02*\\x06Chrome2\\x06Chrome:\\x0FWindows NT 10.0B\\x02ruR b1fbd5c88f0e45b10000000881315668", 
		LAST);

	lr_start_transaction("Go_To_Flights");

	lr_start_transaction("HomePage");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(29);

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("HomePage",LR_AUTO);

	lr_start_transaction("Login");

	web_revert_auto_header("Sec-Fetch-User");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	lr_think_time(18);

	web_submit_form("login.pl", 
		"Snapshot=t165.inf", 
		ITEMDATA, 
		"Name=username", "Value=sergey", ENDITEM, 
		"Name=password", "Value=pass", ENDITEM, 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	web_revert_auto_header("DNT");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hfnkpimlhhgieaddgfemjhofmfblmnib,khaoiebndkojlmppeemjhbpbandiljpe,obedbbhbpmojnkanicioggnmelmoomoc,gkmgaooipdjhmangpemjhigmamcehddo,cmahhnpholdijhjokonmfdjbfmklppij,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,efniojlnjndmcbiieegkicadnoecjjef,ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,"
		"dhlpobdgcjafebgbbhjdnapejmpkgiie,laoigpblnllgcgjnjnllmfolckpjlhki,pdafiollngonhoadbmdoemagnfpdphbe,ojhpjlocmbogdgmfpkhlaaeamibhnphh,imefjhfbkmcmebodilednhmaccmincoa,llkgjffcdpffmhiakmfcdcblohccpfmo,lmelglejhemejginpboagddgdfbepgmp,gonpemdgkjcecdgbnaabipppbmgfggbe,eeigpngbgcognadeebkilcpcaedhellh,jamhcnnkihinmdlkakkaopbjbbcngflc");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-99.0.4844.82");

	lr_think_time(6);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:L45WcFFVmictycKAj7Ys94N44Rtzkx5XHsF2kgbHSt0&cup2hreq=eee5dafe07bf097173b53c0e7ab833cbb65710597b9e9376d529874ca5bd4b78", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{2af77c3c-321e-4407-998f-7a3d8c94f35d}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{0d9bb440-cffe-47f9-b57d-4f8bd907d95f}\","
		"\"rd\":5563},\"updatecheck\":{},\"version\":\"4.10.2449.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{ad7e8459-078f-40b7-832b-e4b632dae70f}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\""
		"cohorthint\":\"M54AndUp\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.93823a4e71e764b932ee22dfcf84c24429867a440c5e480e55be527ac30de1ae\"}]},\"ping\":{\"ping_freshness\":\"{01a04b34-6b88-4040-947a-f23e9c76c6be}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"9.34.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.12eb68c3f3ab954a2cccf982a22b1c0f3f75a541813ffb81f84e642d78e6baf9\"}]},\"ping\":{\"ping_freshness\":\"{175f7896-e6ad-4eb1-8ee4-a044ee44265e}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"7239\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5f1c8af8a15da419e629cc50d85e7326cda080bd1f7df8ac38a16b98e0a2739b\"}]},\"ping\":{\"ping_freshness\":\""
		"{45a1a5a5-f786-4326-9a22-a91a88362d30}\",\"rd\":5563},\"tag\":\"46\",\"updatecheck\":{},\"version\":\"48\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.4a42393b05ebfb448b05e0dd4e910bac22599b46a72cfb13226a77268d07453b\"}]},\"ping\":{\"ping_freshness\":\"{631ee86d-0c42-4fe9-8a57-88063fba684d}\",\"rd\":5563},\"updatecheck\""
		":{},\"version\":\"20220315.435616495\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.f34e17cc90ce3e33fece88503070bc71be525c6a75d5a516addf758ae811eb5f\"}]},\"ping\":{\"ping_freshness\":\"{c3b11344-2ed6-4582-b86c-e362c47561ba}\",\"rd\":5563},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"99.279.200\"},{\"appid\":\""
		"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GGLS\",\"cohort\":\"1:wr3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7\"}]},\"ping\":{\"ping_freshness\":\"{03cf9515-86b5-456d-8770-0058154e7399}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"1.0.6\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a1dbd992522087ec916f08a112434c240e6dda6764366666a4525e97378945a9\"}]},\"ping\":{\"ping_freshness\":\"{8e761c34-d630-4414-b44d-f6498952df5c}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"2022.3.24.2\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{05e0e58c-3aa5-43e5-88ac-97b758d8e099}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:142l:\",\"cohorthint\":\"M99-M100.0.4896.46\",\"cohortname\":\"M99-M100.0.4896.46\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.63b7b7bec47e9a517fa1727871fa06d32a13579ba70e327b0009884f33f20527\"}]},\"ping\":{\""
		"ping_freshness\":\"{2dcc040b-fefd-4b67-8983-83cea94de5bc}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"210\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{32807692-8663-401e-9f04-8d38ceefe000}\",\"rd\":5563},\"updatecheck\":{},\"version\":\""
		"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8c8806a418295d25a4fdd19d0c35c81165835fcd3d4f2b1f295ee535c320db1\"}]},\"ping\":{\"ping_freshness\":\"{5160c20d-08cb-4979-9b7e-b353136b8015}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"2790\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9:\",\""
		"cohorthint\":\"M80AndAbove\",\"cohortname\":\"M80AndAbove\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.bfa1a6198e6ca1d70da66818e4de60ea78606520ef33ece1433eb5a3402560e9\"}]},\"ping\":{\"ping_freshness\":\"{7deefb29-4e3c-4ed9-afd9-5c16407502ae}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"2022.3.14.1147\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"GGLS\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":"
		"[{\"fp\":\"1.8b9dc2cd32d1b5f147a17377cef75ec160103d6c02faf4947978fb6d9a25983b\"}]},\"ping\":{\"ping_freshness\":\"{00b48030-5f0c-4fd6-ac32-1c4a87787fe7}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"20211020.1\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.db60fc5d4ab81e28fe58d82f3ad26622c4ca4cade28e2b636068ac91ca62224d\"}]},\"ping\":{\""
		"ping_freshness\":\"{6ae3d93e-ba97-49db-bbaa-cea1475094f6}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"1.0.7.1642025427\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"GGLS\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a\"}]},\"ping\":{\"ping_freshness\":\"{fd1605f9-1d01-4fa4-afc9-3da6e9bb80b8}\",\"rd\":5563},\"updatecheck\":{},\""
		"version\":\"2021.8.17.1300\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{bb448274-3554-4a35-aa62-2d8f169d1815}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"GGLS\",\"cohort\":\"1:zor"
		":\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c5d1f68a61e1a2ea56b08431b1e9de8bca675e76bed24772447af68d35436d50\"}]},\"ping\":{\"ping_freshness\":\"{ab1245c7-53cb-4fa4-83e2-fe9a2a53a917}\",\"rd\":5563},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"27.8\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{c615880f-bf14-48ad-ac56-341d5e806ece}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ca33735f84fd65b502ca0f70fc5e2184151a6dbbdbeb28043e6716f0985f5291\"}]},\"ping\":{\"ping_freshness\":\""
		"{5e404dc2-3aa8-48c5-9e63-a65370ae3880}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"323\"},{\"_internal_experimental_sets\":\"false\",\"_v2_format_plz\":\"true\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:13c9:\",\"cohorthint\":\"V2 General release\",\"cohortname\":\"V2 General release\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\""
		"{ac29d674-d755-457d-8c6f-36b1a4eeb9bf}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"2022.2.15.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{09b768b9-2e06-4ec2-ba3d-030b842833df}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"}"
		",{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c197f793cd1f5193268ca130404dae454dcd2d544efe9050c3a2424c9471828e\"}]},\"ping\":{\"ping_freshness\":\"{93f863d4-d2ea-4cbd-9d1a-09f8a1ae425d}\",\"rd\":5563},\"updatecheck\":{},\"version\":\"102.0.4967.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\""
		":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"ru\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.556\"},\"prodversion\":\"99.0.4844.82\",\"protocol\":\"3.1\",\"requestid\":\"{4d1da983-a663-4a00-9b98-842cdc23a64e}\",\"sessionid\":\"{9053c1bb-a511-48f5-8f2f-d59666800b31}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\""
		":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.122\"},\"updaterversion\":\"99.0.4844.82\"}}", 
		LAST);

	lr_start_transaction("Flights");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"99\", \"Google Chrome\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(10);

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Flights",LR_AUTO);

	lr_start_transaction("Logout");

	web_revert_auto_header("Sec-Fetch-User");

	lr_think_time(9);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t168.inf", 
		LAST);

	lr_end_transaction("Logout",LR_AUTO);

	lr_end_transaction("Go_To_Flights",LR_AUTO);

	return 0;
}
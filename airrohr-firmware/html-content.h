const char TXT_CONTENT_TYPE_JSON[] PROGMEM = "application/json";
const char TXT_CONTENT_TYPE_INFLUXDB[] PROGMEM = "application/x-www-form-urlencoded";
const char TXT_CONTENT_TYPE_TEXT_HTML[] PROGMEM = "text/html; charset=utf-8";
const char TXT_CONTENT_TYPE_TEXT_PLAIN[] PROGMEM = "text/plain";
const char TXT_CONTENT_TYPE_IMAGE_SVG[] PROGMEM = "image/svg+xml";

const char DBG_TXT_TEMPERATURE[] PROGMEM = "Temperature: ";
const char DBG_TXT_HUMIDITY[] PROGMEM = "Humidity: ";
const char DBG_TXT_PRESSURE[] PROGMEM = "Pressure: ";
const char DBG_TXT_START_READING[] PROGMEM = "Start reading ";
const char DBG_TXT_END_READING[] PROGMEM = "End reading ";

const char WEB_PAGE_HEADER[] PROGMEM = "<html>\
<head>\
<title>{t}</title>\
<meta name='viewport' content='width=device-width'>\
<style type='text/css'>\
body{font-family:Arial;margin:0}\
.content{margin:10px}\
.r{text-align:right}\
td{vertical-align:top;}\
a{text-decoration:none;padding:10px;background:#38b5ad;color:white;display:block;width:auto;border-radius:5px;}\
input[type='text']{width:100%;}\
input[type='password']{width:100%;}\
input[type='submit']{border-radius:5px;font-size:medium;padding:5px;}\
.submit_green{padding:9px !important;width:100%;border-style:none;background:#38b5ad;color:white;text-align:left;}\
</style>\
</head><body>\
<div style='min-height:120px;background-color:#38b5ad;margin-bottom:20px'>\
	<a href='/' style='background:none;width:0;display:inline'><img src='/images?name=luftdaten_logo' style='float:left;margin:20px'/></a>\
	<h3 style='margin:0'>{tt}</h3>\
	<small>ID: {id}<br/>MAC: {mac}<br/>{fwt}: {fw}</small></div><div class='content'><h4>{h} {n} {t}</h4>";

const char WEB_PAGE_FOOTER[] PROGMEM = "<br/><br/><a href='/' style='display:inline;'>{t}</a><br/><br/><br/>\
<a href='http://codefor.de/' target='_blank' style='display:inline;background:none;width:0px;'><img src='/images?name=cfg_logo' style='width:200px;max-width:50%;'/></a>\
</div></body></html>\r\n";

const char WEB_ROOT_PAGE_CONTENT[] PROGMEM = "<a href='/values'>{t}</a><br/>\
<a href='http://deutschland.maps.luftdaten.info/' target='_blank'>{karte}</a><br/>\
<a href='/config'>{conf}</a><br/>\
<a href='/removeConfig'>{conf_delete}</a><br/>\
<a href='/reset'>{restart}</a><br/>\
<table style='width:100%;'>\
<tr><td style='width:33%;'><a href='/debug?level=0'>Debug null</a></td>\
<td style='width:33%;'><a href='/debug?level=1'>Debug Error</a></td>\
<td style='width:33%;'><a href='/debug?level=2'>Debug Warning</a></td>\
</tr><tr>\
<td><a href='/debug?level=3'>Debug Info low</a></td>\
<td><a href='/debug?level=4'>Debug Info medium</a></td>\
<td><a href='/debug?level=5'>Debug Info high</a></td>\
</tr>\
</table>\
";

const char WEB_CONFIG_SCRIPT[] PROGMEM = "<script>\
function setSSID(ssid){document.getElementById('wlanssid').value=ssid.innerText||ssid.textContent;document.getElementById('wlanpwd').focus();}\
function load_wifi_list(){var x=new XMLHttpRequest();x.open('GET','/wifi');x.onload = function(){if (x.status === 200) {document.getElementById('wifilist').innerHTML = x.responseText;}};x.send();}\
</script>";

const char WEB_REMOVE_CONFIG_CONTENT[] PROGMEM = "<h3>{t}</h3>\
<table><tr><td><form method='POST' action='/removeConfig'><input type='submit' class='submit_green' name='submit' value='{b}'/></form></td><td><a href='/'>{c}</a></td></tr></table>\
";

const char WEB_RESET_CONTENT[] PROGMEM = "<h3>{t}</h3>\
<table><tr><td><form method='POST' action'/reset'><input type='submit' class='submit_green' name='submit' value='{b}'/></form></td><td><a href='/'>{c}</a></td></tr></table>\
";

const char CFG_LOGO_SVG[] PROGMEM = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\
<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\" \"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\
<svg version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" x=\"0px\" y=\"0px\" width=\"413.859px\" height=\"100px\" viewBox=\"0 0 413.859 100\" enable-background=\"new 0 0 413.859 100\" xml:space=\"preserve\">\
<g id=\"Ebene_1\">\
<g>\
<g>\
<path fill=\"#1E1E1C\" d=\"M254.928,15.062c-1.463-0.941-2.545-1.27-3.813-1.27c-2.261,0-3.481,1.412-3.481,4.475v1.549h9.222 v3.579h-9.222V43.54h-3.957V23.396h-6.684v-3.579h6.684v-1.458c0-5.743,2.775-8.145,7.296-8.145 c2.166,0,3.623,0.568,4.942,1.367L254.928,15.062z\"/>\
<path fill=\"#1E1E1C\" d=\"M270.04,40.338c4.85,0,7.628-4.094,7.628-8.658c0-4.565-2.778-8.66-7.628-8.66 c-4.846,0-7.621,4.095-7.621,8.66C262.419,36.244,265.194,40.338,270.04,40.338 M270.04,19.439 c7.247,0,11.673,5.696,11.673,12.24c0,6.541-4.426,12.235-11.673,12.235c-7.245,0-11.671-5.694-11.671-12.235 C258.369,25.136,262.795,19.439,270.04,19.439\"/>\
<path fill=\"#1E1E1C\" d=\"M303.071,27.349c-0.328-2.73-1.739-4.329-4.565-4.329c-4.141,0-8.045,3.904-8.045,11.955v8.565h-3.954 V19.816h3.954v4.378c1.836-2.873,4.797-4.757,8.752-4.757c4.708,0,7.53,2.827,7.815,7.911H303.071z\"/>\
<path fill=\"#1E1E1C\" d=\"M256.196,84.68c-1.507,3.296-4.802,4.805-8.283,4.805c-7.153,0-13.319-5.462-13.319-16.855 c0-11.387,6.166-16.849,13.603-16.849c6.493,0,10.355,4.187,11.812,10.026l-3.906,1.175c-1.458-4.801-3.765-7.249-7.905-7.249 c-5.604,0-9.323,3.909-9.323,12.896c0,8.993,3.719,12.898,9.323,12.898c4.517,0,6.964-3.249,7.389-9.087h-7.389v-3.954h11.671 v16.616h-3.437L256.196,84.68z\"/>\
<path fill=\"#1E1E1C\" d=\"M268.032,74.514h14.071c-0.705-3.769-3.201-5.933-7.057-5.933 C271.236,68.581,268.834,70.935,268.032,74.514 M286.293,78.09h-18.545c0.237,4.706,3.11,7.811,7.299,7.811 c3.574,0,6.024-1.74,7.624-4.707l3.151,1.646c-2.586,4.995-6.352,6.646-10.775,6.646c-6.922,0-11.344-5.324-11.344-12.243 c0-6.683,4.232-12.235,11.344-12.235c7.34,0,11.246,5.222,11.246,11.438V78.09z\"/>\
<path fill=\"#1E1E1C\" d=\"M306.968,72.912c-0.328-2.732-1.74-4.331-4.563-4.331c-4.143,0-8.048,3.905-8.048,11.955v8.566h-3.954 v-23.72h3.954v4.377c1.835-2.872,4.798-4.754,8.752-4.754c4.71,0,7.532,2.821,7.815,7.906H306.968z\"/>\
<path fill=\"#1E1E1C\" d=\"M339.11,89.103h-3.951V72.254c0-2.588-0.756-3.623-2.592-3.623c-2.256,0-4.188,2.68-4.188,9.317v11.154 h-3.956V72.254c0-2.588-0.751-3.623-2.587-3.623c-2.259,0-4.188,2.68-4.188,9.317v11.154h-3.955v-23.72h3.955v3.012 c1.224-1.975,3.109-3.389,5.555-3.389c2.682,0,4.234,1.505,4.894,3.858c1.223-2.26,3.344-3.858,5.836-3.858 c2.919,0,5.177,1.882,5.177,6.402V89.103z\"/>\
<path fill=\"#1E1E1C\" d=\"M351.438,85.905c3.061,0,7.583-1.883,7.583-7.25v-0.75h-5.181c-4.049,0-6.307,1.689-6.307,4.373 C347.534,84.537,349.088,85.905,351.438,85.905 M362.972,89.103h-3.202l-0.565-3.34c-1.505,2.166-4.845,3.722-8.375,3.722 c-3.955,0-7.346-2.357-7.346-7.206c0-5.272,4.235-7.765,10.735-7.765h4.803v-1.04c0-3.671-2.592-4.893-5.463-4.893 c-2.778,0-4.849,1.741-5.603,4.048l-3.481-0.94c1.082-4.141,4.752-6.683,9.084-6.683c5.553,0,9.413,2.586,9.413,9.131V89.103z\"/>\
<path fill=\"#1E1E1C\" d=\"M388.099,89.103h-3.956V73.431c0-3.298-1.553-4.85-4.378-4.85c-3.72,0-6.966,4.048-6.966,10.971v9.551 h-3.953v-23.72h3.953v4.377c1.693-2.732,4.661-4.754,8.048-4.754c4.942,0,7.252,3.014,7.252,7.578V89.103z\"/>\
</g>\
<polygon fill=\"#1E1E1C\" points=\"409.572,65.383 402.561,82.75 394.606,65.383 390.184,65.383 400.441,87.503 395.831,98.705 399.784,98.705 413.859,65.383\"/>\
</g>\
<g>\
<polygon fill=\"#FF8282\" points=\"55.843,9.094 55.843,10.385 55.843,92.207 62.688,92.207 64.6,92.207 66.232,92.207 66.232,9.094\"/>\
<g>\
<path fill=\"#FF645F\" d=\"M97.05,100c0.712,0,1.65-0.642,1.65-1.352V1.297c0-0.712-0.938-1.295-1.65-1.295H64.6 c-0.714,0-0.964,0.29-0.964,0.648v1.945v6.49c0,0.715,0.25,1.305,0.964,1.305h22.063c0.716,0,1.649,0.578,1.649,1.292v76.579 c0,0.715-0.934,1.349-1.649,1.349H64.6c-0.714,0-0.964,0.242-0.964,0.6v1.946v6.492c0,0.71,0.25,1.352,0.964,1.352H97.05z\"/>\
</g>\
<polygon fill=\"#8CDBA6\" points=\"111.688,9.094 111.688,10.385 111.688,92.207 120.411,92.207 122.079,92.207 122.079,9.094\"/>\
<g>\
<path fill=\"#21D68F\" d=\"M120.779,99.942V89.559c14.286,0,24.256-17.758,24.256-39.585c0-21.828-9.97-39.589-24.256-39.589V0 c19.481,0,34.64,22.419,34.64,49.974C155.419,77.526,140.261,99.942,120.779,99.942\"/>\
<path fill=\"#00ABFA\" d=\"M12.985,68.016v14.32v4.605c0,7.769,4.973,13.059,12.831,13.059h2.208h6.358h7.502 c0.359,0,0.973-0.642,0.973-1.352v-7.79c0-0.71-0.906-1.248-1.622-1.248h-7.457h-3.806h-2.356c-3.363,0-4.238-1.589-4.238-5.429 V78.06v-8.494v-7.616c0-7.834-3.187-10.717-7.062-12.135c3.876-1.417,7.062-4.297,7.062-12.125v-5.41V18.552v-3.261 c0-3.772,0.753-4.898,4.238-4.898h2.933h3.721h7.615c0.359,0,0.973-0.592,0.973-1.307V1.298c0-0.713-0.906-1.296-1.622-1.296 h-6.237h-5.889h-3.293c-7.858,0-12.831,5.088-12.831,12.688v4.076V33.75c0,0-0.256,3.898-0.444,5.225 c-0.491,3.512-4.795,6.519-7.458,6.479H1.001C0.288,45.454,0,46.015,0,46.729v7.785c0,0.716,0.288,1.331,1.001,1.331h3.729 c3.399-0.047,7.695,2.817,8.021,7.093C12.848,64.176,12.985,68.016,12.985,68.016\"/>\
<path fill=\"#BD3B38\" d=\"M64.6,0.002h-3.681h-4.107c-0.713,0-0.969,0.583-0.969,1.297v2.397v5.39v1.307h0.969H64.6h1.636V9.086 V1.299V0.002H64.6z\"/>\
<path fill=\"#BD3B38\" d=\"M55.843,90.858v3.68v4.11c0,0.71,0.256,1.352,0.969,1.352h2.4H64.6h1.633v-1.352v-7.79V89.61H64.6 h-7.788h-0.969V90.858z\"/>\
<path fill=\"#00B05C\" d=\"M120.411,0.002h-3.679h-4.109c-0.712,0-0.936,0.583-0.936,1.297v2.397v5.39v1.307h0.936h7.788h1.668 V9.086V1.299V0.002H120.411z\"/>\
<path fill=\"#00B05C\" d=\"M111.688,90.858v3.68v4.11c0,0.71,0.224,1.352,0.936,1.352h2.397h5.391h1.668v-1.352v-7.79V89.61h-1.668 h-7.788h-0.936V90.858z\"/>\
<path fill=\"#78CCC7\" d=\"M176.623,68.016v14.32v4.605c0,7.769,4.878,13.059,12.735,13.059h2.209h6.36h7.501 c0.357,0,1.064-0.642,1.064-1.352v-7.79c0-0.71-1-1.248-1.715-1.248h-7.458h-3.806h-2.356c-3.359,0-4.144-1.429-4.144-5.27 V82.06V69.565v-7.616c0-2.521-0.74-4.806-1.315-6.104h-17.429c4.786,1.299,6.834,3.015,7.812,7.185 C176.567,65.104,176.623,68.016,176.623,68.016\"/>\
<path fill=\"#78CCC7\" d=\"M175.886,38.971c-1.005,3.401-3.25,5.187-7.261,6.483h16.354c1.016-2.596,2.035-4.328,2.035-7.766 v-5.407V18.552v-3.261c0-3.772,0.657-4.898,4.144-4.898h2.933h3.718h7.62c0.357,0,1.064-0.592,1.064-1.307V1.298 c0-0.713-1-1.298-1.715-1.298h-6.236h-5.887h-3.297c-7.857,0-12.735,5.09-12.735,12.69v4.079v16.98 C176.623,33.75,176.39,37.275,175.886,38.971\"/>\
<path fill=\"#96DBD6\" d=\"M178.415,50.73c2.628,0.966,5.513,2.518,7.284,5.114h19.079c0.715,0,1.715-0.615,1.715-1.329v-7.787 c0-0.714-1-1.274-1.715-1.274h-19.799C183.68,48.052,180.591,49.938,178.415,50.73\"/>\
<path fill=\"#40A6A6\" d=\"M164.545,45.454c-0.716,0-0.909,0.561-0.909,1.274v7.789c0,0.712,0.193,1.327,0.909,1.327h3.726h17.429 c-1.169-2.597-4.077-4.375-6.152-5.185c2.177-0.797,4.133-2.607,5.433-5.206h-16.354H164.545z\"/>\
</g>\
</g>\
</g>\
</svg>";

// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const char Roboto_Mono_9[] PROGMEM = {
	0x07, // Width: 7
	0x0C, // Height: 12
	0x20, // First Char: 32
	0xE0, // Numbers of Chars: 224

	// Jump Table:
	0xFF, 0xFF, 0x00, 0x05,  // 32:65535
	0x00, 0x00, 0x06, 0x05,  // 33:0
	0x00, 0x06, 0x07, 0x06,  // 34:6
	0x00, 0x0D, 0x09, 0x05,  // 35:13
	0x00, 0x16, 0x0A, 0x06,  // 36:22
	0x00, 0x20, 0x0C, 0x07,  // 37:32
	0x00, 0x2C, 0x0A, 0x06,  // 38:44
	0x00, 0x36, 0x05, 0x06,  // 39:54
	0x00, 0x3B, 0x08, 0x06,  // 40:59
	0x00, 0x43, 0x08, 0x06,  // 41:67
	0x00, 0x4B, 0x09, 0x05,  // 42:75
	0x00, 0x54, 0x09, 0x05,  // 43:84
	0x00, 0x5D, 0x06, 0x06,  // 44:93
	0x00, 0x63, 0x07, 0x05,  // 45:99
	0x00, 0x6A, 0x06, 0x05,  // 46:106
	0x00, 0x70, 0x07, 0x05,  // 47:112
	0x00, 0x77, 0x09, 0x06,  // 48:119
	0x00, 0x80, 0x08, 0x06,  // 49:128
	0x00, 0x88, 0x0A, 0x06,  // 50:136
	0x00, 0x92, 0x09, 0x06,  // 51:146
	0x00, 0x9B, 0x0B, 0x06,  // 52:155
	0x00, 0xA6, 0x09, 0x06,  // 53:166
	0x00, 0xAF, 0x09, 0x06,  // 54:175
	0x00, 0xB8, 0x09, 0x05,  // 55:184
	0x00, 0xC1, 0x09, 0x06,  // 56:193
	0x00, 0xCA, 0x09, 0x06,  // 57:202
	0x00, 0xD3, 0x08, 0x05,  // 58:211
	0x00, 0xDB, 0x09, 0x06,  // 59:219
	0x00, 0xE4, 0x09, 0x05,  // 60:228
	0x00, 0xED, 0x09, 0x05,  // 61:237
	0x00, 0xF6, 0x09, 0x06,  // 62:246
	0x00, 0xFF, 0x09, 0x06,  // 63:255
	0x01, 0x08, 0x0B, 0x07,  // 64:264
	0x01, 0x13, 0x0A, 0x05,  // 65:275
	0x01, 0x1D, 0x09, 0x06,  // 66:285
	0x01, 0x26, 0x0A, 0x06,  // 67:294
	0x01, 0x30, 0x09, 0x06,  // 68:304
	0x01, 0x39, 0x0A, 0x06,  // 69:313
	0x01, 0x43, 0x09, 0x06,  // 70:323
	0x01, 0x4C, 0x0B, 0x07,  // 71:332
	0x01, 0x57, 0x0A, 0x06,  // 72:343
	0x01, 0x61, 0x0A, 0x05,  // 73:353
	0x01, 0x6B, 0x09, 0x06,  // 74:363
	0x01, 0x74, 0x0A, 0x06,  // 75:372
	0x01, 0x7E, 0x0A, 0x06,  // 76:382
	0x01, 0x88, 0x0A, 0x06,  // 77:392
	0x01, 0x92, 0x0A, 0x06,  // 78:402
	0x01, 0x9C, 0x0B, 0x07,  // 79:412
	0x01, 0xA7, 0x09, 0x06,  // 80:423
	0x01, 0xB0, 0x0C, 0x07,  // 81:432
	0x01, 0xBC, 0x0A, 0x06,  // 82:444
	0x01, 0xC6, 0x0A, 0x06,  // 83:454
	0x01, 0xD0, 0x09, 0x05,  // 84:464
	0x01, 0xD9, 0x09, 0x06,  // 85:473
	0x01, 0xE2, 0x09, 0x05,  // 86:482
	0x01, 0xEB, 0x09, 0x05,  // 87:491
	0x01, 0xF4, 0x0A, 0x05,  // 88:500
	0x01, 0xFE, 0x09, 0x05,  // 89:510
	0x02, 0x07, 0x0A, 0x06,  // 90:519
	0x02, 0x11, 0x08, 0x06,  // 91:529
	0x02, 0x19, 0x08, 0x05,  // 92:537
	0x02, 0x21, 0x08, 0x06,  // 93:545
	0x02, 0x29, 0x07, 0x05,  // 94:553
	0x02, 0x30, 0x0A, 0x05,  // 95:560
	0x02, 0x3A, 0x05, 0x05,  // 96:570
	0x02, 0x3F, 0x0A, 0x06,  // 97:575
	0x02, 0x49, 0x09, 0x06,  // 98:585
	0x02, 0x52, 0x0A, 0x06,  // 99:594
	0x02, 0x5C, 0x0A, 0x06,  // 100:604
	0x02, 0x66, 0x09, 0x06,  // 101:614
	0x02, 0x6F, 0x09, 0x06,  // 102:623
	0x02, 0x78, 0x0A, 0x06,  // 103:632
	0x02, 0x82, 0x0A, 0x06,  // 104:642
	0x02, 0x8C, 0x0C, 0x06,  // 105:652
	0x02, 0x98, 0x08, 0x06,  // 106:664
	0x02, 0xA0, 0x0A, 0x06,  // 107:672
	0x02, 0xAA, 0x0C, 0x06,  // 108:682
	0x02, 0xB6, 0x0C, 0x07,  // 109:694
	0x02, 0xC2, 0x0A, 0x06,  // 110:706
	0x02, 0xCC, 0x09, 0x06,  // 111:716
	0x02, 0xD5, 0x09, 0x06,  // 112:725
	0x02, 0xDE, 0x0A, 0x06,  // 113:734
	0x02, 0xE8, 0x07, 0x05,  // 114:744
	0x02, 0xEF, 0x0A, 0x06,  // 115:751
	0x02, 0xF9, 0x0A, 0x06,  // 116:761
	0x03, 0x03, 0x0A, 0x06,  // 117:771
	0x03, 0x0D, 0x09, 0x05,  // 118:781
	0x03, 0x16, 0x09, 0x05,  // 119:790
	0x03, 0x1F, 0x0A, 0x05,  // 120:799
	0x03, 0x29, 0x09, 0x05,  // 121:809
	0x03, 0x32, 0x0A, 0x06,  // 122:818
	0x03, 0x3C, 0x0A, 0x06,  // 123:828
	0x03, 0x46, 0x06, 0x05,  // 124:838
	0x03, 0x4C, 0x07, 0x05,  // 125:844
	0x03, 0x53, 0x09, 0x05,  // 126:851
	0xFF, 0xFF, 0x00, 0x05,  // 127:65535
	0xFF, 0xFF, 0x00, 0x05,  // 128:65535
	0xFF, 0xFF, 0x00, 0x05,  // 129:65535
	0xFF, 0xFF, 0x00, 0x05,  // 130:65535
	0xFF, 0xFF, 0x00, 0x05,  // 131:65535
	0xFF, 0xFF, 0x00, 0x05,  // 132:65535
	0xFF, 0xFF, 0x00, 0x05,  // 133:65535
	0xFF, 0xFF, 0x00, 0x05,  // 134:65535
	0xFF, 0xFF, 0x00, 0x05,  // 135:65535
	0xFF, 0xFF, 0x00, 0x05,  // 136:65535
	0xFF, 0xFF, 0x00, 0x05,  // 137:65535
	0xFF, 0xFF, 0x00, 0x05,  // 138:65535
	0xFF, 0xFF, 0x00, 0x05,  // 139:65535
	0xFF, 0xFF, 0x00, 0x05,  // 140:65535
	0xFF, 0xFF, 0x00, 0x05,  // 141:65535
	0xFF, 0xFF, 0x00, 0x05,  // 142:65535
	0xFF, 0xFF, 0x00, 0x05,  // 143:65535
	0xFF, 0xFF, 0x00, 0x05,  // 144:65535
	0xFF, 0xFF, 0x00, 0x05,  // 145:65535
	0xFF, 0xFF, 0x00, 0x05,  // 146:65535
	0xFF, 0xFF, 0x00, 0x05,  // 147:65535
	0xFF, 0xFF, 0x00, 0x05,  // 148:65535
	0xFF, 0xFF, 0x00, 0x05,  // 149:65535
	0xFF, 0xFF, 0x00, 0x05,  // 150:65535
	0xFF, 0xFF, 0x00, 0x05,  // 151:65535
	0xFF, 0xFF, 0x00, 0x05,  // 152:65535
	0xFF, 0xFF, 0x00, 0x05,  // 153:65535
	0xFF, 0xFF, 0x00, 0x05,  // 154:65535
	0xFF, 0xFF, 0x00, 0x05,  // 155:65535
	0xFF, 0xFF, 0x00, 0x05,  // 156:65535
	0xFF, 0xFF, 0x00, 0x05,  // 157:65535
	0xFF, 0xFF, 0x00, 0x05,  // 158:65535
	0xFF, 0xFF, 0x00, 0x05,  // 159:65535
	0xFF, 0xFF, 0x00, 0x05,  // 160:65535
	0x03, 0x5C, 0x06, 0x05,  // 161:860
	0x03, 0x62, 0x0A, 0x06,  // 162:866
	0x03, 0x6C, 0x0A, 0x05,  // 163:876
	0x03, 0x76, 0x0A, 0x06,  // 164:886
	0x03, 0x80, 0x09, 0x05,  // 165:896
	0x03, 0x89, 0x06, 0x05,  // 166:905
	0x03, 0x8F, 0x0A, 0x06,  // 167:911
	0x03, 0x99, 0x07, 0x05,  // 168:921
	0x03, 0xA0, 0x0B, 0x07,  // 169:928
	0x03, 0xAB, 0x07, 0x05,  // 170:939
	0x03, 0xB2, 0x07, 0x06,  // 171:946
	0x03, 0xB9, 0x09, 0x06,  // 172:953
	0x03, 0xC2, 0x07, 0x05,  // 173:962
	0x03, 0xC9, 0x0B, 0x07,  // 174:969
	0x03, 0xD4, 0x07, 0x05,  // 175:980
	0x03, 0xDB, 0x07, 0x05,  // 176:987
	0x03, 0xE2, 0x09, 0x05,  // 177:994
	0x03, 0xEB, 0x07, 0x05,  // 178:1003
	0x03, 0xF2, 0x07, 0x05,  // 179:1010
	0x03, 0xF9, 0x05, 0x05,  // 180:1017
	0x03, 0xFE, 0x0A, 0x06,  // 181:1022
	0x04, 0x08, 0x08, 0x05,  // 182:1032
	0x04, 0x10, 0x05, 0x05,  // 183:1040
	0x04, 0x15, 0x06, 0x05,  // 184:1045
	0x04, 0x1B, 0x07, 0x06,  // 185:1051
	0x04, 0x22, 0x07, 0x05,  // 186:1058
	0x04, 0x29, 0x09, 0x05,  // 187:1065
	0x04, 0x32, 0x0A, 0x06,  // 188:1074
	0x04, 0x3C, 0x0C, 0x06,  // 189:1084
	0x04, 0x48, 0x0A, 0x06,  // 190:1096
	0x04, 0x52, 0x0A, 0x06,  // 191:1106
	0x04, 0x5C, 0x0A, 0x05,  // 192:1116
	0x04, 0x66, 0x0A, 0x05,  // 193:1126
	0x04, 0x70, 0x0A, 0x05,  // 194:1136
	0x04, 0x7A, 0x0A, 0x05,  // 195:1146
	0x04, 0x84, 0x0A, 0x05,  // 196:1156
	0x04, 0x8E, 0x0A, 0x05,  // 197:1166
	0x04, 0x98, 0x0C, 0x06,  // 198:1176
	0x04, 0xA4, 0x09, 0x06,  // 199:1188
	0x04, 0xAD, 0x0A, 0x06,  // 200:1197
	0x04, 0xB7, 0x0A, 0x06,  // 201:1207
	0x04, 0xC1, 0x0A, 0x06,  // 202:1217
	0x04, 0xCB, 0x0A, 0x06,  // 203:1227
	0x04, 0xD5, 0x0A, 0x05,  // 204:1237
	0x04, 0xDF, 0x0A, 0x05,  // 205:1247
	0x04, 0xE9, 0x0A, 0x05,  // 206:1257
	0x04, 0xF3, 0x0A, 0x05,  // 207:1267
	0x04, 0xFD, 0x09, 0x06,  // 208:1277
	0x05, 0x06, 0x0A, 0x06,  // 209:1286
	0x05, 0x10, 0x0B, 0x07,  // 210:1296
	0x05, 0x1B, 0x0B, 0x07,  // 211:1307
	0x05, 0x26, 0x0B, 0x07,  // 212:1318
	0x05, 0x31, 0x0B, 0x07,  // 213:1329
	0x05, 0x3C, 0x0B, 0x07,  // 214:1340
	0x05, 0x47, 0x09, 0x05,  // 215:1351
	0x05, 0x50, 0x0B, 0x07,  // 216:1360
	0x05, 0x5B, 0x09, 0x06,  // 217:1371
	0x05, 0x64, 0x09, 0x06,  // 218:1380
	0x05, 0x6D, 0x09, 0x06,  // 219:1389
	0x05, 0x76, 0x09, 0x06,  // 220:1398
	0x05, 0x7F, 0x09, 0x05,  // 221:1407
	0x05, 0x88, 0x09, 0x06,  // 222:1416
	0x05, 0x91, 0x0A, 0x06,  // 223:1425
	0x05, 0x9B, 0x0A, 0x06,  // 224:1435
	0x05, 0xA5, 0x0A, 0x06,  // 225:1445
	0x05, 0xAF, 0x0A, 0x06,  // 226:1455
	0x05, 0xB9, 0x0A, 0x06,  // 227:1465
	0x05, 0xC3, 0x0A, 0x06,  // 228:1475
	0x05, 0xCD, 0x0A, 0x06,  // 229:1485
	0x05, 0xD7, 0x0C, 0x07,  // 230:1495
	0x05, 0xE3, 0x09, 0x06,  // 231:1507
	0x05, 0xEC, 0x09, 0x06,  // 232:1516
	0x05, 0xF5, 0x09, 0x06,  // 233:1525
	0x05, 0xFE, 0x09, 0x06,  // 234:1534
	0x06, 0x07, 0x09, 0x06,  // 235:1543
	0x06, 0x10, 0x0C, 0x06,  // 236:1552
	0x06, 0x1C, 0x0C, 0x06,  // 237:1564
	0x06, 0x28, 0x0C, 0x06,  // 238:1576
	0x06, 0x34, 0x0C, 0x06,  // 239:1588
	0x06, 0x40, 0x09, 0x06,  // 240:1600
	0x06, 0x49, 0x0A, 0x06,  // 241:1609
	0x06, 0x53, 0x09, 0x06,  // 242:1619
	0x06, 0x5C, 0x09, 0x06,  // 243:1628
	0x06, 0x65, 0x09, 0x06,  // 244:1637
	0x06, 0x6E, 0x09, 0x06,  // 245:1646
	0x06, 0x77, 0x09, 0x06,  // 246:1655
	0x06, 0x80, 0x09, 0x05,  // 247:1664
	0x06, 0x89, 0x09, 0x06,  // 248:1673
	0x06, 0x92, 0x0A, 0x06,  // 249:1682
	0x06, 0x9C, 0x0A, 0x06,  // 250:1692
	0x06, 0xA6, 0x0A, 0x06,  // 251:1702
	0x06, 0xB0, 0x0A, 0x06,  // 252:1712
	0x06, 0xBA, 0x09, 0x05,  // 253:1722
	0x06, 0xC3, 0x09, 0x06,  // 254:1731
	0x06, 0xCC, 0x09, 0x05,  // 255:1740

	// Font Data:
	0x00,0x00,0x00,0x00,0x3C,0x01,	// 33
	0x00,0x00,0x00,0x00,0x0C,0x00,0x0C,	// 34
	0x40,0x00,0xF0,0x01,0x5C,0x01,0xF8,0x00,0x54,	// 35
	0x00,0x00,0x38,0x01,0x24,0x02,0x48,0x02,0xD8,0x01,	// 36
	0x00,0x00,0x1C,0x00,0xD4,0x00,0xB8,0x00,0x48,0x01,0xC0,0x01,	// 37
	0x00,0x00,0xD8,0x01,0x24,0x01,0x5C,0x01,0xC0,0x01,	// 38
	0x00,0x00,0x00,0x00,0x0C,	// 39
	0x00,0x00,0x00,0x00,0xF0,0x01,0x0C,0x06,	// 40
	0x00,0x00,0x00,0x04,0x0C,0x02,0xF0,0x01,	// 41
	0x10,0x00,0x60,0x00,0x38,0x00,0x60,0x00,0x10,	// 42
	0x20,0x00,0x20,0x00,0xF8,0x00,0x20,0x00,0x20,	// 43
	0x00,0x00,0x00,0x00,0x00,0x03,	// 44
	0x00,0x00,0x40,0x00,0x40,0x00,0x40,	// 45
	0x00,0x00,0x00,0x00,0x00,0x01,	// 46
	0x00,0x00,0x80,0x01,0x60,0x00,0x1C,	// 47
	0x00,0x00,0xF8,0x00,0x24,0x01,0x24,0x01,0xF8,	// 48
	0x00,0x00,0x08,0x00,0x08,0x00,0xFC,0x01,	// 49
	0x00,0x00,0x88,0x01,0x44,0x01,0x24,0x01,0x18,0x01,	// 50
	0x00,0x00,0x88,0x01,0x24,0x01,0x24,0x01,0xD8,	// 51
	0x00,0x00,0xC0,0x00,0xB0,0x00,0x88,0x00,0xFC,0x01,0x80,	// 52
	0x00,0x00,0x9C,0x00,0x14,0x01,0x14,0x01,0xE4,	// 53
	0x00,0x00,0xF8,0x00,0x1C,0x01,0x14,0x01,0xE0,	// 54
	0x00,0x00,0x04,0x00,0xC4,0x01,0x34,0x00,0x0C,	// 55
	0x00,0x00,0xD8,0x00,0x24,0x01,0x24,0x01,0xD8,	// 56
	0x00,0x00,0x38,0x00,0x44,0x01,0xC4,0x01,0xF8,	// 57
	0x00,0x00,0x00,0x00,0x10,0x01,0x10,0x01,	// 58
	0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x03,0x10,	// 59
	0x00,0x00,0x60,0x00,0x60,0x00,0x90,0x00,0x90,	// 60
	0x00,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x50,	// 61
	0x00,0x00,0x90,0x00,0xA0,0x00,0x60,0x00,0x40,	// 62
	0x00,0x00,0x08,0x00,0x44,0x01,0x24,0x00,0x18,	// 63
	0x00,0x00,0xF8,0x00,0xFC,0x01,0xFC,0x01,0x84,0x00,0xF8,	// 64
	0x00,0x01,0xF0,0x00,0x4C,0x00,0x78,0x00,0x80,0x01,	// 65
	0x00,0x00,0xFC,0x01,0x24,0x01,0x24,0x01,0xD8,	// 66
	0x00,0x00,0xF8,0x00,0x04,0x01,0x04,0x01,0x8C,0x01,	// 67
	0x00,0x00,0xFC,0x01,0x04,0x01,0x8C,0x01,0xF8,	// 68
	0x00,0x00,0xFC,0x01,0x24,0x01,0x24,0x01,0x24,0x01,	// 69
	0x00,0x00,0xFC,0x01,0x24,0x00,0x24,0x00,0x24,	// 70
	0x00,0x00,0xF8,0x00,0x8C,0x01,0x04,0x01,0x24,0x01,0xE8,	// 71
	0x00,0x00,0xFC,0x01,0x20,0x00,0x20,0x00,0xFC,0x01,	// 72
	0x04,0x01,0x04,0x01,0xFC,0x01,0x04,0x01,0x04,0x01,	// 73
	0x00,0x00,0x80,0x00,0x00,0x01,0x00,0x01,0xFC,	// 74
	0x00,0x00,0xFC,0x01,0x20,0x00,0x78,0x00,0x84,0x01,	// 75
	0x00,0x00,0xFC,0x01,0x00,0x01,0x00,0x01,0x00,0x01,	// 76
	0x00,0x00,0xFC,0x01,0x78,0x00,0x38,0x00,0xFC,0x01,	// 77
	0x00,0x00,0xFC,0x01,0x38,0x00,0xC0,0x00,0xFC,0x01,	// 78
	0x00,0x00,0xF8,0x00,0x0C,0x01,0x04,0x01,0x04,0x01,0xF8,	// 79
	0x00,0x00,0xFC,0x01,0x24,0x00,0x24,0x00,0x18,	// 80
	0x00,0x00,0xF8,0x00,0x0C,0x01,0x04,0x01,0x04,0x01,0xF8,0x02,	// 81
	0x00,0x00,0xFC,0x01,0x24,0x00,0xE4,0x00,0x18,0x01,	// 82
	0x00,0x00,0x98,0x00,0x24,0x01,0x24,0x01,0xCC,0x01,	// 83
	0x04,0x00,0x04,0x00,0xFC,0x01,0x04,0x00,0x04,	// 84
	0x00,0x00,0xFC,0x00,0x00,0x01,0x00,0x01,0xFC,	// 85
	0x04,0x00,0x78,0x00,0x80,0x01,0x70,0x00,0x0C,	// 86
	0x3C,0x00,0xC0,0x01,0x3C,0x00,0xF0,0x01,0xFC,	// 87
	0x00,0x00,0x8C,0x01,0x70,0x00,0xD8,0x00,0x04,0x01,	// 88
	0x04,0x00,0x18,0x00,0xE0,0x01,0x18,0x00,0x04,	// 89
	0x00,0x00,0x84,0x01,0x64,0x01,0x14,0x01,0x0C,0x01,	// 90
	0x00,0x00,0x00,0x00,0xFC,0x07,0x04,0x04,	// 91
	0x00,0x00,0x0C,0x00,0x70,0x00,0x80,0x01,	// 92
	0x00,0x00,0x00,0x00,0x04,0x04,0xFC,0x07,	// 93
	0x00,0x00,0x30,0x00,0x0C,0x00,0x18,	// 94
	0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,	// 95
	0x00,0x00,0x00,0x00,0x04,	// 96
	0x00,0x00,0xE0,0x01,0x50,0x01,0x50,0x01,0xF0,0x01,	// 97
	0x00,0x00,0xFC,0x01,0x10,0x01,0x10,0x01,0xE0,	// 98
	0x00,0x00,0xE0,0x00,0x10,0x01,0x10,0x01,0xB0,0x01,	// 99
	0x00,0x00,0xE0,0x00,0x10,0x01,0x10,0x01,0xFC,0x01,	// 100
	0x00,0x00,0xE0,0x00,0x50,0x01,0x50,0x01,0x60,	// 101
	0x00,0x00,0x10,0x00,0xFC,0x01,0x14,0x00,0x14,	// 102
	0x00,0x00,0xE0,0x00,0x10,0x05,0x10,0x05,0xF0,0x03,	// 103
	0x00,0x00,0xFC,0x01,0x10,0x00,0x10,0x00,0xF0,0x01,	// 104
	0x00,0x00,0x10,0x01,0x10,0x01,0xF4,0x01,0x00,0x01,0x00,0x01,	// 105
	0x00,0x00,0x10,0x04,0x10,0x04,0xF4,0x03,	// 106
	0x00,0x00,0xFC,0x01,0x40,0x00,0xA0,0x00,0x10,0x01,	// 107
	0x00,0x00,0x04,0x01,0x04,0x01,0xFC,0x01,0x00,0x01,0x00,0x01,	// 108
	0x00,0x00,0xF0,0x01,0x10,0x00,0xF0,0x01,0x10,0x00,0xF0,0x01,	// 109
	0x00,0x00,0xF0,0x01,0x10,0x00,0x10,0x00,0xF0,0x01,	// 110
	0x00,0x00,0xE0,0x00,0x10,0x01,0x10,0x01,0xE0,	// 111
	0x00,0x00,0xF0,0x07,0x10,0x01,0x10,0x01,0xE0,	// 112
	0x00,0x00,0xE0,0x00,0x10,0x01,0x10,0x01,0xF0,0x07,	// 113
	0x00,0x00,0xF0,0x01,0x10,0x00,0x10,	// 114
	0x00,0x00,0xB0,0x01,0x50,0x01,0x50,0x01,0xA0,0x01,	// 115
	0x00,0x00,0x10,0x00,0xF8,0x01,0x10,0x01,0x10,0x01,	// 116
	0x00,0x00,0xF0,0x01,0x00,0x01,0x00,0x01,0xF0,0x01,	// 117
	0x10,0x00,0x60,0x00,0x80,0x01,0xE0,0x00,0x10,	// 118
	0x70,0x00,0xC0,0x01,0x30,0x00,0xC0,0x01,0xF0,	// 119
	0x00,0x00,0xB0,0x01,0x40,0x00,0xA0,0x00,0x10,0x01,	// 120
	0x10,0x00,0x60,0x04,0x80,0x03,0xE0,0x00,0x10,	// 121
	0x00,0x00,0x10,0x01,0xD0,0x01,0x30,0x01,0x10,0x01,	// 122
	0x00,0x00,0x00,0x00,0x40,0x00,0xB8,0x03,0x04,0x04,	// 123
	0x00,0x00,0x00,0x00,0xFC,0x07,	// 124
	0x00,0x00,0x04,0x04,0xB8,0x03,0x40,	// 125
	0x40,0x00,0x20,0x00,0x20,0x00,0x40,0x00,0x60,	// 126
	0x00,0x00,0x00,0x00,0x90,0x07,	// 161
	0x00,0x00,0xE0,0x01,0x10,0x01,0x08,0x02,0x10,0x01,	// 162
	0x20,0x01,0xF8,0x01,0x24,0x01,0x04,0x01,0x08,0x01,	// 163
	0x00,0x00,0xF0,0x01,0x10,0x01,0x10,0x01,0xF0,0x01,	// 164
	0xA4,0x00,0xB8,0x00,0xE0,0x01,0xB8,0x00,0xA4,	// 165
	0x00,0x00,0x00,0x00,0xDC,0x01,	// 166
	0x00,0x00,0x78,0x02,0xA4,0x04,0xA4,0x04,0xEC,0x07,	// 167
	0x00,0x00,0x04,0x00,0x00,0x00,0x04,	// 168
	0x00,0x00,0xE0,0x00,0xF0,0x01,0xB0,0x01,0x10,0x01,0xE0,	// 169
	0x00,0x00,0x78,0x00,0x54,0x00,0x7C,	// 170
	0x00,0x00,0x40,0x00,0xE0,0x00,0xA0,	// 171
	0x00,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x60,	// 172
	0x00,0x00,0x40,0x00,0x40,0x00,0x40,	// 173
	0x00,0x00,0xE0,0x00,0xF0,0x01,0x70,0x01,0x10,0x01,0xE0,	// 174
	0x00,0x00,0x04,0x00,0x04,0x00,0x04,	// 175
	0x00,0x00,0x08,0x00,0x14,0x00,0x18,	// 176
	0x20,0x01,0x20,0x01,0x78,0x01,0x20,0x01,0x20,	// 177
	0x00,0x00,0x24,0x00,0x3C,0x00,0x20,	// 178
	0x00,0x00,0x00,0x00,0x54,0x00,0x6C,	// 179
	0x00,0x00,0x00,0x00,0x04,	// 180
	0x00,0x00,0xF0,0x07,0x00,0x01,0x00,0x01,0xF0,0x01,	// 181
	0x00,0x00,0x3C,0x00,0x3C,0x00,0xFC,0x01,	// 182
	0x00,0x00,0x00,0x00,0x20,	// 183
	0x00,0x00,0x00,0x00,0x00,0x06,	// 184
	0x00,0x00,0x00,0x00,0x04,0x00,0x1C,	// 185
	0x00,0x00,0x3C,0x00,0x24,0x00,0x3C,	// 186
	0x00,0x00,0xA0,0x00,0x40,0x00,0xA0,0x00,0x40,	// 187
	0x04,0x00,0x9C,0x00,0x60,0x00,0x98,0x01,0xC0,0x01,	// 188
	0x04,0x00,0x5C,0x00,0x30,0x00,0x28,0x01,0xE0,0x01,0x00,0x01,	// 189
	0x24,0x00,0xBC,0x00,0x60,0x00,0x98,0x01,0xC0,0x01,	// 190
	0x00,0x00,0x00,0x07,0xD0,0x04,0x00,0x04,0x00,0x02,	// 191
	0x00,0x01,0xF1,0x00,0x4E,0x00,0x78,0x00,0x80,0x01,	// 192
	0x00,0x01,0xF0,0x00,0x4E,0x00,0x79,0x00,0x80,0x01,	// 193
	0x00,0x01,0xF2,0x00,0x4E,0x00,0x7A,0x00,0x80,0x01,	// 194
	0x00,0x01,0xF2,0x00,0x4D,0x00,0x7B,0x00,0x80,0x01,	// 195
	0x00,0x01,0xF2,0x00,0x4C,0x00,0x7A,0x00,0x80,0x01,	// 196
	0x00,0x01,0xF0,0x00,0x4F,0x00,0x7B,0x00,0x80,0x01,	// 197
	0x00,0x01,0xE0,0x00,0x98,0x00,0xFC,0x01,0x24,0x01,0x00,0x01,	// 198
	0x00,0x00,0xF8,0x00,0x84,0x01,0x84,0x07,0xCC,	// 199
	0x00,0x00,0xFC,0x01,0x27,0x01,0x24,0x01,0x24,0x01,	// 200
	0x00,0x00,0xFC,0x01,0x24,0x01,0x26,0x01,0x25,0x01,	// 201
	0x00,0x00,0xFC,0x01,0x26,0x01,0x26,0x01,0x24,0x01,	// 202
	0x00,0x00,0xFE,0x01,0x24,0x01,0x26,0x01,0x24,0x01,	// 203
	0x04,0x01,0x07,0x01,0xFC,0x01,0x04,0x01,0x04,0x01,	// 204
	0x04,0x01,0x04,0x01,0xFE,0x01,0x05,0x01,0x04,0x01,	// 205
	0x04,0x01,0x06,0x01,0xFD,0x01,0x06,0x01,0x04,0x01,	// 206
	0x04,0x01,0x06,0x01,0xFC,0x01,0x06,0x01,0x04,0x01,	// 207
	0x20,0x00,0xFC,0x01,0x24,0x01,0x8C,0x01,0xF8,	// 208
	0x00,0x00,0xFE,0x01,0x39,0x00,0xC3,0x00,0xFC,0x01,	// 209
	0x00,0x00,0xF8,0x00,0x0D,0x01,0x06,0x01,0x04,0x01,0xF8,	// 210
	0x00,0x00,0xF8,0x00,0x0C,0x01,0x06,0x01,0x05,0x01,0xF8,	// 211
	0x00,0x00,0xF8,0x00,0x0E,0x01,0x05,0x01,0x06,0x01,0xF8,	// 212
	0x00,0x00,0xF8,0x00,0x0F,0x01,0x05,0x01,0x07,0x01,0xF8,	// 213
	0x00,0x00,0xF8,0x00,0x0E,0x01,0x04,0x01,0x06,0x01,0xF8,	// 214
	0x00,0x00,0x90,0x00,0x60,0x00,0x60,0x00,0x90,	// 215
	0x00,0x00,0xF8,0x03,0xC4,0x01,0x24,0x01,0x1C,0x01,0xFC,	// 216
	0x00,0x00,0xFC,0x00,0x03,0x01,0x00,0x01,0xFC,	// 217
	0x00,0x00,0xFC,0x00,0x00,0x01,0x03,0x01,0xFC,	// 218
	0x00,0x00,0xFC,0x00,0x02,0x01,0x02,0x01,0xFC,	// 219
	0x00,0x00,0xFE,0x00,0x00,0x01,0x02,0x01,0xFC,	// 220
	0x04,0x00,0x18,0x00,0xE2,0x01,0x19,0x00,0x04,	// 221
	0x00,0x00,0xFC,0x01,0x90,0x00,0x90,0x00,0x60,	// 222
	0x00,0x00,0xF8,0x01,0x04,0x01,0x34,0x01,0xC8,0x01,	// 223
	0x00,0x00,0xD0,0x01,0x54,0x01,0x50,0x01,0xF0,0x01,	// 224
	0x00,0x00,0xE0,0x01,0x50,0x01,0x54,0x01,0xF0,0x01,	// 225
	0x00,0x00,0xE0,0x01,0x54,0x01,0x54,0x01,0xF0,0x01,	// 226
	0x00,0x00,0xE0,0x01,0x54,0x01,0x54,0x01,0xF0,0x01,	// 227
	0x00,0x00,0xE4,0x01,0x50,0x01,0x54,0x01,0xF0,0x01,	// 228
	0x00,0x00,0xE4,0x01,0x5A,0x01,0x54,0x01,0xF0,0x01,	// 229
	0x00,0x00,0xD0,0x01,0x50,0x01,0xE0,0x00,0x50,0x01,0x70,0x01,	// 230
	0x00,0x00,0xE0,0x00,0x90,0x01,0x90,0x07,0xA0,	// 231
	0x00,0x00,0xE0,0x00,0x54,0x01,0x50,0x01,0x60,	// 232
	0x00,0x00,0xE0,0x00,0x50,0x01,0x54,0x01,0x60,	// 233
	0x00,0x00,0xE0,0x00,0x54,0x01,0x54,0x01,0x60,	// 234
	0x00,0x00,0xE4,0x00,0x50,0x01,0x54,0x01,0x60,	// 235
	0x00,0x00,0x10,0x01,0x14,0x01,0xF0,0x01,0x00,0x01,0x00,0x01,	// 236
	0x00,0x00,0x10,0x01,0x10,0x01,0xF0,0x01,0x04,0x01,0x00,0x01,	// 237
	0x00,0x00,0x10,0x01,0x10,0x01,0xF4,0x01,0x00,0x01,0x00,0x01,	// 238
	0x00,0x00,0x10,0x01,0x14,0x01,0xF0,0x01,0x04,0x01,0x00,0x01,	// 239
	0x00,0x00,0xE0,0x00,0x18,0x01,0x1C,0x01,0xF0,	// 240
	0x00,0x00,0xF0,0x01,0x14,0x00,0x14,0x00,0xF0,0x01,	// 241
	0x00,0x00,0xE0,0x00,0x14,0x01,0x10,0x01,0xE0,	// 242
	0x00,0x00,0xE0,0x00,0x10,0x01,0x14,0x01,0xE0,	// 243
	0x00,0x00,0xE0,0x00,0x14,0x01,0x14,0x01,0xE0,	// 244
	0x00,0x00,0xE0,0x00,0x14,0x01,0x14,0x01,0xE0,	// 245
	0x00,0x00,0xE0,0x00,0x14,0x01,0x10,0x01,0xE4,	// 246
	0x20,0x00,0x20,0x00,0xA8,0x00,0x20,0x00,0x20,	// 247
	0x00,0x00,0xE0,0x00,0xD0,0x01,0x50,0x01,0xE0,	// 248
	0x00,0x00,0xF0,0x01,0x04,0x01,0x00,0x01,0xF0,0x01,	// 249
	0x00,0x00,0xF0,0x01,0x00,0x01,0x04,0x01,0xF0,0x01,	// 250
	0x00,0x00,0xF0,0x01,0x04,0x01,0x04,0x01,0xF0,0x01,	// 251
	0x00,0x00,0xF4,0x01,0x00,0x01,0x04,0x01,0xF0,0x01,	// 252
	0x10,0x00,0x60,0x04,0x80,0x03,0xE4,0x00,0x10,	// 253
	0x00,0x00,0xFC,0x07,0x10,0x01,0x10,0x01,0xE0,	// 254
	0x10,0x00,0x64,0x04,0x80,0x03,0xE4,0x00,0x10	// 255
};

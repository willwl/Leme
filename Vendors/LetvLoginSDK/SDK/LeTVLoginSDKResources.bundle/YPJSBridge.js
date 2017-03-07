var %@ = {};
%@.%@ = function(cmd, param) {
	if (!param) {
		param = cmd;
		cmd = null;
	}
	var url = "YPJSBridge://" + cmd + "?" + escape(param);
	console.log(url);
	document.location = url;
};
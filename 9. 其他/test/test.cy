(function(exports){
  
  ///不使用exports导出，全局函数
  sum = function(a, b){
    return a + b;
  };
  
  exports.minus = function(a, b){
  	return a - b;
  };

///每次不变化的
  exports.appId = [NSBundle mainBundle].bundleIdentifier;

///每次都变化的
  exports.rootVc = function(){
  	return UIApp.keyWindow.rootViewController;
  }

  exports.docPath = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];

})(exports);
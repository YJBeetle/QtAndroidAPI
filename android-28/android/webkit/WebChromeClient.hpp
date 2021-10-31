#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Message;
}
namespace android::view
{
	class View;
}
namespace android::webkit
{
	class ConsoleMessage;
}
namespace android::webkit
{
	class JsPromptResult;
}
namespace android::webkit
{
	class JsResult;
}
namespace android::webkit
{
	class PermissionRequest;
}
namespace android::webkit
{
	class WebChromeClient_FileChooserParams;
}
namespace android::webkit
{
	class WebView;
}

namespace android::webkit
{
	class WebChromeClient : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebChromeClient(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebChromeClient(QJniObject obj);
		
		// Constructors
		WebChromeClient();
		
		// Methods
		android::graphics::Bitmap getDefaultVideoPoster();
		android::view::View getVideoLoadingProgressView();
		void getVisitedHistory(__JniBaseClass arg0);
		void onCloseWindow(android::webkit::WebView arg0);
		jboolean onConsoleMessage(android::webkit::ConsoleMessage arg0);
		void onConsoleMessage(jstring arg0, jint arg1, jstring arg2);
		jboolean onCreateWindow(android::webkit::WebView arg0, jboolean arg1, jboolean arg2, android::os::Message arg3);
		void onExceededDatabaseQuota(jstring arg0, jstring arg1, jlong arg2, jlong arg3, jlong arg4, __JniBaseClass arg5);
		void onGeolocationPermissionsHidePrompt();
		void onGeolocationPermissionsShowPrompt(jstring arg0, __JniBaseClass arg1);
		void onHideCustomView();
		jboolean onJsAlert(android::webkit::WebView arg0, jstring arg1, jstring arg2, android::webkit::JsResult arg3);
		jboolean onJsBeforeUnload(android::webkit::WebView arg0, jstring arg1, jstring arg2, android::webkit::JsResult arg3);
		jboolean onJsConfirm(android::webkit::WebView arg0, jstring arg1, jstring arg2, android::webkit::JsResult arg3);
		jboolean onJsPrompt(android::webkit::WebView arg0, jstring arg1, jstring arg2, jstring arg3, android::webkit::JsPromptResult arg4);
		jboolean onJsTimeout();
		void onPermissionRequest(android::webkit::PermissionRequest arg0);
		void onPermissionRequestCanceled(android::webkit::PermissionRequest arg0);
		void onProgressChanged(android::webkit::WebView arg0, jint arg1);
		void onReachedMaxAppCacheSize(jlong arg0, jlong arg1, __JniBaseClass arg2);
		void onReceivedIcon(android::webkit::WebView arg0, android::graphics::Bitmap arg1);
		void onReceivedTitle(android::webkit::WebView arg0, jstring arg1);
		void onReceivedTouchIconUrl(android::webkit::WebView arg0, jstring arg1, jboolean arg2);
		void onRequestFocus(android::webkit::WebView arg0);
		void onShowCustomView(android::view::View arg0, __JniBaseClass arg1);
		void onShowCustomView(android::view::View arg0, jint arg1, __JniBaseClass arg2);
		jboolean onShowFileChooser(android::webkit::WebView arg0, __JniBaseClass arg1, android::webkit::WebChromeClient_FileChooserParams arg2);
	};
} // namespace android::webkit


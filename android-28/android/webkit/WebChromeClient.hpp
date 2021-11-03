#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::webkit
{
	class WebChromeClient : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebChromeClient(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebChromeClient(QJniObject obj);
		
		// Constructors
		WebChromeClient();
		
		// Methods
		android::graphics::Bitmap getDefaultVideoPoster();
		android::view::View getVideoLoadingProgressView();
		void getVisitedHistory(JObject arg0);
		void onCloseWindow(android::webkit::WebView arg0);
		jboolean onConsoleMessage(android::webkit::ConsoleMessage arg0);
		void onConsoleMessage(JString arg0, jint arg1, JString arg2);
		jboolean onCreateWindow(android::webkit::WebView arg0, jboolean arg1, jboolean arg2, android::os::Message arg3);
		void onExceededDatabaseQuota(JString arg0, JString arg1, jlong arg2, jlong arg3, jlong arg4, JObject arg5);
		void onGeolocationPermissionsHidePrompt();
		void onGeolocationPermissionsShowPrompt(JString arg0, JObject arg1);
		void onHideCustomView();
		jboolean onJsAlert(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3);
		jboolean onJsBeforeUnload(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3);
		jboolean onJsConfirm(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3);
		jboolean onJsPrompt(android::webkit::WebView arg0, JString arg1, JString arg2, JString arg3, android::webkit::JsPromptResult arg4);
		jboolean onJsTimeout();
		void onPermissionRequest(android::webkit::PermissionRequest arg0);
		void onPermissionRequestCanceled(android::webkit::PermissionRequest arg0);
		void onProgressChanged(android::webkit::WebView arg0, jint arg1);
		void onReachedMaxAppCacheSize(jlong arg0, jlong arg1, JObject arg2);
		void onReceivedIcon(android::webkit::WebView arg0, android::graphics::Bitmap arg1);
		void onReceivedTitle(android::webkit::WebView arg0, JString arg1);
		void onReceivedTouchIconUrl(android::webkit::WebView arg0, JString arg1, jboolean arg2);
		void onRequestFocus(android::webkit::WebView arg0);
		void onShowCustomView(android::view::View arg0, JObject arg1);
		void onShowCustomView(android::view::View arg0, jint arg1, JObject arg2);
		jboolean onShowFileChooser(android::webkit::WebView arg0, JObject arg1, android::webkit::WebChromeClient_FileChooserParams arg2);
	};
} // namespace android::webkit


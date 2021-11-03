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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebChromeClient(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebChromeClient(QAndroidJniObject obj);
		
		// Constructors
		WebChromeClient();
		
		// Methods
		android::graphics::Bitmap getDefaultVideoPoster() const;
		android::view::View getVideoLoadingProgressView() const;
		void getVisitedHistory(JObject arg0) const;
		void onCloseWindow(android::webkit::WebView arg0) const;
		jboolean onConsoleMessage(android::webkit::ConsoleMessage arg0) const;
		void onConsoleMessage(JString arg0, jint arg1, JString arg2) const;
		jboolean onCreateWindow(android::webkit::WebView arg0, jboolean arg1, jboolean arg2, android::os::Message arg3) const;
		void onExceededDatabaseQuota(JString arg0, JString arg1, jlong arg2, jlong arg3, jlong arg4, JObject arg5) const;
		void onGeolocationPermissionsHidePrompt() const;
		void onGeolocationPermissionsShowPrompt(JString arg0, JObject arg1) const;
		void onHideCustomView() const;
		jboolean onJsAlert(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3) const;
		jboolean onJsBeforeUnload(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3) const;
		jboolean onJsConfirm(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3) const;
		jboolean onJsPrompt(android::webkit::WebView arg0, JString arg1, JString arg2, JString arg3, android::webkit::JsPromptResult arg4) const;
		jboolean onJsTimeout() const;
		void onPermissionRequest(android::webkit::PermissionRequest arg0) const;
		void onPermissionRequestCanceled(android::webkit::PermissionRequest arg0) const;
		void onProgressChanged(android::webkit::WebView arg0, jint arg1) const;
		void onReachedMaxAppCacheSize(jlong arg0, jlong arg1, JObject arg2) const;
		void onReceivedIcon(android::webkit::WebView arg0, android::graphics::Bitmap arg1) const;
		void onReceivedTitle(android::webkit::WebView arg0, JString arg1) const;
		void onReceivedTouchIconUrl(android::webkit::WebView arg0, JString arg1, jboolean arg2) const;
		void onRequestFocus(android::webkit::WebView arg0) const;
		void onShowCustomView(android::view::View arg0, JObject arg1) const;
		void onShowCustomView(android::view::View arg0, jint arg1, JObject arg2) const;
		jboolean onShowFileChooser(android::webkit::WebView arg0, JObject arg1, android::webkit::WebChromeClient_FileChooserParams arg2) const;
	};
} // namespace android::webkit


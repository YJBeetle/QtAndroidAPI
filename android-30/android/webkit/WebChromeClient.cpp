#include "../graphics/Bitmap.hpp"
#include "../os/Message.hpp"
#include "../view/View.hpp"
#include "./ConsoleMessage.hpp"
#include "./JsPromptResult.hpp"
#include "./JsResult.hpp"
#include "./PermissionRequest.hpp"
#include "./WebChromeClient_FileChooserParams.hpp"
#include "./WebView.hpp"
#include "../../JString.hpp"
#include "./WebChromeClient.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebChromeClient::WebChromeClient(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebChromeClient::WebChromeClient()
		: JObject(
			"android.webkit.WebChromeClient",
			"()V"
		) {}
	
	// Methods
	android::graphics::Bitmap WebChromeClient::getDefaultVideoPoster() const
	{
		return callObjectMethod(
			"getDefaultVideoPoster",
			"()Landroid/graphics/Bitmap;"
		);
	}
	android::view::View WebChromeClient::getVideoLoadingProgressView() const
	{
		return callObjectMethod(
			"getVideoLoadingProgressView",
			"()Landroid/view/View;"
		);
	}
	void WebChromeClient::getVisitedHistory(JObject arg0) const
	{
		callMethod<void>(
			"getVisitedHistory",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
	void WebChromeClient::onCloseWindow(android::webkit::WebView arg0) const
	{
		callMethod<void>(
			"onCloseWindow",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		);
	}
	jboolean WebChromeClient::onConsoleMessage(android::webkit::ConsoleMessage arg0) const
	{
		return callMethod<jboolean>(
			"onConsoleMessage",
			"(Landroid/webkit/ConsoleMessage;)Z",
			arg0.object()
		);
	}
	void WebChromeClient::onConsoleMessage(JString arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"onConsoleMessage",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	jboolean WebChromeClient::onCreateWindow(android::webkit::WebView arg0, jboolean arg1, jboolean arg2, android::os::Message arg3) const
	{
		return callMethod<jboolean>(
			"onCreateWindow",
			"(Landroid/webkit/WebView;ZZLandroid/os/Message;)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void WebChromeClient::onExceededDatabaseQuota(JString arg0, JString arg1, jlong arg2, jlong arg3, jlong arg4, JObject arg5) const
	{
		callMethod<void>(
			"onExceededDatabaseQuota",
			"(Ljava/lang/String;Ljava/lang/String;JJJLandroid/webkit/WebStorage$QuotaUpdater;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void WebChromeClient::onGeolocationPermissionsHidePrompt() const
	{
		callMethod<void>(
			"onGeolocationPermissionsHidePrompt",
			"()V"
		);
	}
	void WebChromeClient::onGeolocationPermissionsShowPrompt(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"onGeolocationPermissionsShowPrompt",
			"(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void WebChromeClient::onHideCustomView() const
	{
		callMethod<void>(
			"onHideCustomView",
			"()V"
		);
	}
	jboolean WebChromeClient::onJsAlert(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3) const
	{
		return callMethod<jboolean>(
			"onJsAlert",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	jboolean WebChromeClient::onJsBeforeUnload(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3) const
	{
		return callMethod<jboolean>(
			"onJsBeforeUnload",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	jboolean WebChromeClient::onJsConfirm(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3) const
	{
		return callMethod<jboolean>(
			"onJsConfirm",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	jboolean WebChromeClient::onJsPrompt(android::webkit::WebView arg0, JString arg1, JString arg2, JString arg3, android::webkit::JsPromptResult arg4) const
	{
		return callMethod<jboolean>(
			"onJsPrompt",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object()
		);
	}
	jboolean WebChromeClient::onJsTimeout() const
	{
		return callMethod<jboolean>(
			"onJsTimeout",
			"()Z"
		);
	}
	void WebChromeClient::onPermissionRequest(android::webkit::PermissionRequest arg0) const
	{
		callMethod<void>(
			"onPermissionRequest",
			"(Landroid/webkit/PermissionRequest;)V",
			arg0.object()
		);
	}
	void WebChromeClient::onPermissionRequestCanceled(android::webkit::PermissionRequest arg0) const
	{
		callMethod<void>(
			"onPermissionRequestCanceled",
			"(Landroid/webkit/PermissionRequest;)V",
			arg0.object()
		);
	}
	void WebChromeClient::onProgressChanged(android::webkit::WebView arg0, jint arg1) const
	{
		callMethod<void>(
			"onProgressChanged",
			"(Landroid/webkit/WebView;I)V",
			arg0.object(),
			arg1
		);
	}
	void WebChromeClient::onReachedMaxAppCacheSize(jlong arg0, jlong arg1, JObject arg2) const
	{
		callMethod<void>(
			"onReachedMaxAppCacheSize",
			"(JJLandroid/webkit/WebStorage$QuotaUpdater;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void WebChromeClient::onReceivedIcon(android::webkit::WebView arg0, android::graphics::Bitmap arg1) const
	{
		callMethod<void>(
			"onReceivedIcon",
			"(Landroid/webkit/WebView;Landroid/graphics/Bitmap;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebChromeClient::onReceivedTitle(android::webkit::WebView arg0, JString arg1) const
	{
		callMethod<void>(
			"onReceivedTitle",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void WebChromeClient::onReceivedTouchIconUrl(android::webkit::WebView arg0, JString arg1, jboolean arg2) const
	{
		callMethod<void>(
			"onReceivedTouchIconUrl",
			"(Landroid/webkit/WebView;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	void WebChromeClient::onRequestFocus(android::webkit::WebView arg0) const
	{
		callMethod<void>(
			"onRequestFocus",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		);
	}
	void WebChromeClient::onShowCustomView(android::view::View arg0, JObject arg1) const
	{
		callMethod<void>(
			"onShowCustomView",
			"(Landroid/view/View;Landroid/webkit/WebChromeClient$CustomViewCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebChromeClient::onShowCustomView(android::view::View arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"onShowCustomView",
			"(Landroid/view/View;ILandroid/webkit/WebChromeClient$CustomViewCallback;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean WebChromeClient::onShowFileChooser(android::webkit::WebView arg0, JObject arg1, android::webkit::WebChromeClient_FileChooserParams arg2) const
	{
		return callMethod<jboolean>(
			"onShowFileChooser",
			"(Landroid/webkit/WebView;Landroid/webkit/ValueCallback;Landroid/webkit/WebChromeClient$FileChooserParams;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::webkit


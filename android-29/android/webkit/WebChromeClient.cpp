#include "../graphics/Bitmap.hpp"
#include "../os/Message.hpp"
#include "../view/View.hpp"
#include "./ConsoleMessage.hpp"
#include "./JsPromptResult.hpp"
#include "./JsResult.hpp"
#include "./PermissionRequest.hpp"
#include "./WebChromeClient_FileChooserParams.hpp"
#include "./WebView.hpp"
#include "./WebChromeClient.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebChromeClient::WebChromeClient(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WebChromeClient::WebChromeClient()
		: __JniBaseClass(
			"android.webkit.WebChromeClient",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject WebChromeClient::getDefaultVideoPoster()
	{
		return callObjectMethod(
			"getDefaultVideoPoster",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject WebChromeClient::getVideoLoadingProgressView()
	{
		return callObjectMethod(
			"getVideoLoadingProgressView",
			"()Landroid/view/View;"
		);
	}
	void WebChromeClient::getVisitedHistory(__JniBaseClass arg0)
	{
		callMethod<void>(
			"getVisitedHistory",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
	void WebChromeClient::onCloseWindow(android::webkit::WebView arg0)
	{
		callMethod<void>(
			"onCloseWindow",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		);
	}
	jboolean WebChromeClient::onConsoleMessage(android::webkit::ConsoleMessage arg0)
	{
		return callMethod<jboolean>(
			"onConsoleMessage",
			"(Landroid/webkit/ConsoleMessage;)Z",
			arg0.object()
		);
	}
	void WebChromeClient::onConsoleMessage(jstring arg0, jint arg1, jstring arg2)
	{
		callMethod<void>(
			"onConsoleMessage",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean WebChromeClient::onCreateWindow(android::webkit::WebView arg0, jboolean arg1, jboolean arg2, android::os::Message arg3)
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
	void WebChromeClient::onExceededDatabaseQuota(jstring arg0, jstring arg1, jlong arg2, jlong arg3, jlong arg4, __JniBaseClass arg5)
	{
		callMethod<void>(
			"onExceededDatabaseQuota",
			"(Ljava/lang/String;Ljava/lang/String;JJJLandroid/webkit/WebStorage$QuotaUpdater;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void WebChromeClient::onGeolocationPermissionsHidePrompt()
	{
		callMethod<void>(
			"onGeolocationPermissionsHidePrompt",
			"()V"
		);
	}
	void WebChromeClient::onGeolocationPermissionsShowPrompt(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"onGeolocationPermissionsShowPrompt",
			"(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V",
			arg0,
			arg1.object()
		);
	}
	void WebChromeClient::onHideCustomView()
	{
		callMethod<void>(
			"onHideCustomView",
			"()V"
		);
	}
	jboolean WebChromeClient::onJsAlert(android::webkit::WebView arg0, jstring arg1, jstring arg2, android::webkit::JsResult arg3)
	{
		return callMethod<jboolean>(
			"onJsAlert",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	jboolean WebChromeClient::onJsBeforeUnload(android::webkit::WebView arg0, jstring arg1, jstring arg2, android::webkit::JsResult arg3)
	{
		return callMethod<jboolean>(
			"onJsBeforeUnload",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	jboolean WebChromeClient::onJsConfirm(android::webkit::WebView arg0, jstring arg1, jstring arg2, android::webkit::JsResult arg3)
	{
		return callMethod<jboolean>(
			"onJsConfirm",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	jboolean WebChromeClient::onJsPrompt(android::webkit::WebView arg0, jstring arg1, jstring arg2, jstring arg3, android::webkit::JsPromptResult arg4)
	{
		return callMethod<jboolean>(
			"onJsPrompt",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	jboolean WebChromeClient::onJsTimeout()
	{
		return callMethod<jboolean>(
			"onJsTimeout",
			"()Z"
		);
	}
	void WebChromeClient::onPermissionRequest(android::webkit::PermissionRequest arg0)
	{
		callMethod<void>(
			"onPermissionRequest",
			"(Landroid/webkit/PermissionRequest;)V",
			arg0.object()
		);
	}
	void WebChromeClient::onPermissionRequestCanceled(android::webkit::PermissionRequest arg0)
	{
		callMethod<void>(
			"onPermissionRequestCanceled",
			"(Landroid/webkit/PermissionRequest;)V",
			arg0.object()
		);
	}
	void WebChromeClient::onProgressChanged(android::webkit::WebView arg0, jint arg1)
	{
		callMethod<void>(
			"onProgressChanged",
			"(Landroid/webkit/WebView;I)V",
			arg0.object(),
			arg1
		);
	}
	void WebChromeClient::onReachedMaxAppCacheSize(jlong arg0, jlong arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"onReachedMaxAppCacheSize",
			"(JJLandroid/webkit/WebStorage$QuotaUpdater;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void WebChromeClient::onReceivedIcon(android::webkit::WebView arg0, android::graphics::Bitmap arg1)
	{
		callMethod<void>(
			"onReceivedIcon",
			"(Landroid/webkit/WebView;Landroid/graphics/Bitmap;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebChromeClient::onReceivedTitle(android::webkit::WebView arg0, jstring arg1)
	{
		callMethod<void>(
			"onReceivedTitle",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void WebChromeClient::onReceivedTouchIconUrl(android::webkit::WebView arg0, jstring arg1, jboolean arg2)
	{
		callMethod<void>(
			"onReceivedTouchIconUrl",
			"(Landroid/webkit/WebView;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void WebChromeClient::onRequestFocus(android::webkit::WebView arg0)
	{
		callMethod<void>(
			"onRequestFocus",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		);
	}
	void WebChromeClient::onShowCustomView(android::view::View arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"onShowCustomView",
			"(Landroid/view/View;Landroid/webkit/WebChromeClient$CustomViewCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebChromeClient::onShowCustomView(android::view::View arg0, jint arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"onShowCustomView",
			"(Landroid/view/View;ILandroid/webkit/WebChromeClient$CustomViewCallback;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean WebChromeClient::onShowFileChooser(android::webkit::WebView arg0, __JniBaseClass arg1, android::webkit::WebChromeClient_FileChooserParams arg2)
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


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
	
	WebChromeClient::WebChromeClient(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebChromeClient::WebChromeClient()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebChromeClient",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject WebChromeClient::getDefaultVideoPoster()
	{
		return __thiz.callObjectMethod(
			"getDefaultVideoPoster",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject WebChromeClient::getVideoLoadingProgressView()
	{
		return __thiz.callObjectMethod(
			"getVideoLoadingProgressView",
			"()Landroid/view/View;"
		);
	}
	void WebChromeClient::getVisitedHistory(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"getVisitedHistory",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void WebChromeClient::onCloseWindow(android::webkit::WebView arg0)
	{
		__thiz.callMethod<void>(
			"onCloseWindow",
			"(Landroid/webkit/WebView;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean WebChromeClient::onConsoleMessage(android::webkit::ConsoleMessage arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onConsoleMessage",
			"(Landroid/webkit/ConsoleMessage;)Z",
			arg0.__jniObject().object()
		);
	}
	void WebChromeClient::onConsoleMessage(jstring arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onConsoleMessage",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void WebChromeClient::onConsoleMessage(const QString &arg0, jint arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"onConsoleMessage",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jboolean WebChromeClient::onCreateWindow(android::webkit::WebView arg0, jboolean arg1, jboolean arg2, android::os::Message arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onCreateWindow",
			"(Landroid/webkit/WebView;ZZLandroid/os/Message;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void WebChromeClient::onExceededDatabaseQuota(jstring arg0, jstring arg1, jlong arg2, jlong arg3, jlong arg4, __JniBaseClass arg5)
	{
		__thiz.callMethod<void>(
			"onExceededDatabaseQuota",
			"(Ljava/lang/String;Ljava/lang/String;JJJLandroid/webkit/WebStorage$QuotaUpdater;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void WebChromeClient::onExceededDatabaseQuota(const QString &arg0, const QString &arg1, jlong arg2, jlong arg3, jlong arg4, __JniBaseClass arg5)
	{
		__thiz.callMethod<void>(
			"onExceededDatabaseQuota",
			"(Ljava/lang/String;Ljava/lang/String;JJJLandroid/webkit/WebStorage$QuotaUpdater;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void WebChromeClient::onGeolocationPermissionsHidePrompt()
	{
		__thiz.callMethod<void>(
			"onGeolocationPermissionsHidePrompt",
			"()V"
		);
	}
	void WebChromeClient::onGeolocationPermissionsShowPrompt(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onGeolocationPermissionsShowPrompt",
			"(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebChromeClient::onGeolocationPermissionsShowPrompt(const QString &arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onGeolocationPermissionsShowPrompt",
			"(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void WebChromeClient::onHideCustomView()
	{
		__thiz.callMethod<void>(
			"onHideCustomView",
			"()V"
		);
	}
	jboolean WebChromeClient::onJsAlert(android::webkit::WebView arg0, jstring arg1, jstring arg2, android::webkit::JsResult arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onJsAlert",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean WebChromeClient::onJsAlert(android::webkit::WebView arg0, const QString &arg1, const QString &arg2, android::webkit::JsResult arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onJsAlert",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	jboolean WebChromeClient::onJsBeforeUnload(android::webkit::WebView arg0, jstring arg1, jstring arg2, android::webkit::JsResult arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onJsBeforeUnload",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean WebChromeClient::onJsBeforeUnload(android::webkit::WebView arg0, const QString &arg1, const QString &arg2, android::webkit::JsResult arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onJsBeforeUnload",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	jboolean WebChromeClient::onJsConfirm(android::webkit::WebView arg0, jstring arg1, jstring arg2, android::webkit::JsResult arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onJsConfirm",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean WebChromeClient::onJsConfirm(android::webkit::WebView arg0, const QString &arg1, const QString &arg2, android::webkit::JsResult arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onJsConfirm",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	jboolean WebChromeClient::onJsPrompt(android::webkit::WebView arg0, jstring arg1, jstring arg2, jstring arg3, android::webkit::JsPromptResult arg4)
	{
		return __thiz.callMethod<jboolean>(
			"onJsPrompt",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	jboolean WebChromeClient::onJsPrompt(android::webkit::WebView arg0, const QString &arg1, const QString &arg2, const QString &arg3, android::webkit::JsPromptResult arg4)
	{
		return __thiz.callMethod<jboolean>(
			"onJsPrompt",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4.__jniObject().object()
		);
	}
	jboolean WebChromeClient::onJsTimeout()
	{
		return __thiz.callMethod<jboolean>(
			"onJsTimeout",
			"()Z"
		);
	}
	void WebChromeClient::onPermissionRequest(android::webkit::PermissionRequest arg0)
	{
		__thiz.callMethod<void>(
			"onPermissionRequest",
			"(Landroid/webkit/PermissionRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void WebChromeClient::onPermissionRequestCanceled(android::webkit::PermissionRequest arg0)
	{
		__thiz.callMethod<void>(
			"onPermissionRequestCanceled",
			"(Landroid/webkit/PermissionRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void WebChromeClient::onProgressChanged(android::webkit::WebView arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onProgressChanged",
			"(Landroid/webkit/WebView;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WebChromeClient::onReachedMaxAppCacheSize(jlong arg0, jlong arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onReachedMaxAppCacheSize",
			"(JJLandroid/webkit/WebStorage$QuotaUpdater;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void WebChromeClient::onReceivedIcon(android::webkit::WebView arg0, android::graphics::Bitmap arg1)
	{
		__thiz.callMethod<void>(
			"onReceivedIcon",
			"(Landroid/webkit/WebView;Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebChromeClient::onReceivedTitle(android::webkit::WebView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onReceivedTitle",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WebChromeClient::onReceivedTitle(android::webkit::WebView arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onReceivedTitle",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void WebChromeClient::onReceivedTouchIconUrl(android::webkit::WebView arg0, jstring arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onReceivedTouchIconUrl",
			"(Landroid/webkit/WebView;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void WebChromeClient::onReceivedTouchIconUrl(android::webkit::WebView arg0, const QString &arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onReceivedTouchIconUrl",
			"(Landroid/webkit/WebView;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void WebChromeClient::onRequestFocus(android::webkit::WebView arg0)
	{
		__thiz.callMethod<void>(
			"onRequestFocus",
			"(Landroid/webkit/WebView;)V",
			arg0.__jniObject().object()
		);
	}
	void WebChromeClient::onShowCustomView(android::view::View arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onShowCustomView",
			"(Landroid/view/View;Landroid/webkit/WebChromeClient$CustomViewCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebChromeClient::onShowCustomView(android::view::View arg0, jint arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onShowCustomView",
			"(Landroid/view/View;ILandroid/webkit/WebChromeClient$CustomViewCallback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean WebChromeClient::onShowFileChooser(android::webkit::WebView arg0, __JniBaseClass arg1, android::webkit::WebChromeClient_FileChooserParams arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onShowFileChooser",
			"(Landroid/webkit/WebView;Landroid/webkit/ValueCallback;Landroid/webkit/WebChromeClient$FileChooserParams;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::webkit


#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../os/Message.def.hpp"
#include "../view/View.def.hpp"
#include "./ConsoleMessage.def.hpp"
#include "./JsPromptResult.def.hpp"
#include "./JsResult.def.hpp"
#include "./PermissionRequest.def.hpp"
#include "./WebChromeClient_FileChooserParams.def.hpp"
#include "./WebView.def.hpp"
#include "../../JString.hpp"
#include "./WebChromeClient.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebChromeClient::WebChromeClient()
		: JObject(
			"android.webkit.WebChromeClient",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::Bitmap WebChromeClient::getDefaultVideoPoster() const
	{
		return callObjectMethod(
			"getDefaultVideoPoster",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline android::view::View WebChromeClient::getVideoLoadingProgressView() const
	{
		return callObjectMethod(
			"getVideoLoadingProgressView",
			"()Landroid/view/View;"
		);
	}
	inline void WebChromeClient::getVisitedHistory(JObject arg0) const
	{
		callMethod<void>(
			"getVisitedHistory",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
	inline void WebChromeClient::onCloseWindow(android::webkit::WebView arg0) const
	{
		callMethod<void>(
			"onCloseWindow",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		);
	}
	inline jboolean WebChromeClient::onConsoleMessage(android::webkit::ConsoleMessage arg0) const
	{
		return callMethod<jboolean>(
			"onConsoleMessage",
			"(Landroid/webkit/ConsoleMessage;)Z",
			arg0.object()
		);
	}
	inline void WebChromeClient::onConsoleMessage(JString arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"onConsoleMessage",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jboolean WebChromeClient::onCreateWindow(android::webkit::WebView arg0, jboolean arg1, jboolean arg2, android::os::Message arg3) const
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
	inline void WebChromeClient::onExceededDatabaseQuota(JString arg0, JString arg1, jlong arg2, jlong arg3, jlong arg4, JObject arg5) const
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
	inline void WebChromeClient::onGeolocationPermissionsHidePrompt() const
	{
		callMethod<void>(
			"onGeolocationPermissionsHidePrompt",
			"()V"
		);
	}
	inline void WebChromeClient::onGeolocationPermissionsShowPrompt(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"onGeolocationPermissionsShowPrompt",
			"(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void WebChromeClient::onHideCustomView() const
	{
		callMethod<void>(
			"onHideCustomView",
			"()V"
		);
	}
	inline jboolean WebChromeClient::onJsAlert(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3) const
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
	inline jboolean WebChromeClient::onJsBeforeUnload(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3) const
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
	inline jboolean WebChromeClient::onJsConfirm(android::webkit::WebView arg0, JString arg1, JString arg2, android::webkit::JsResult arg3) const
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
	inline jboolean WebChromeClient::onJsPrompt(android::webkit::WebView arg0, JString arg1, JString arg2, JString arg3, android::webkit::JsPromptResult arg4) const
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
	inline jboolean WebChromeClient::onJsTimeout() const
	{
		return callMethod<jboolean>(
			"onJsTimeout",
			"()Z"
		);
	}
	inline void WebChromeClient::onPermissionRequest(android::webkit::PermissionRequest arg0) const
	{
		callMethod<void>(
			"onPermissionRequest",
			"(Landroid/webkit/PermissionRequest;)V",
			arg0.object()
		);
	}
	inline void WebChromeClient::onPermissionRequestCanceled(android::webkit::PermissionRequest arg0) const
	{
		callMethod<void>(
			"onPermissionRequestCanceled",
			"(Landroid/webkit/PermissionRequest;)V",
			arg0.object()
		);
	}
	inline void WebChromeClient::onProgressChanged(android::webkit::WebView arg0, jint arg1) const
	{
		callMethod<void>(
			"onProgressChanged",
			"(Landroid/webkit/WebView;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void WebChromeClient::onReceivedIcon(android::webkit::WebView arg0, android::graphics::Bitmap arg1) const
	{
		callMethod<void>(
			"onReceivedIcon",
			"(Landroid/webkit/WebView;Landroid/graphics/Bitmap;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WebChromeClient::onReceivedTitle(android::webkit::WebView arg0, JString arg1) const
	{
		callMethod<void>(
			"onReceivedTitle",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void WebChromeClient::onReceivedTouchIconUrl(android::webkit::WebView arg0, JString arg1, jboolean arg2) const
	{
		callMethod<void>(
			"onReceivedTouchIconUrl",
			"(Landroid/webkit/WebView;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void WebChromeClient::onRequestFocus(android::webkit::WebView arg0) const
	{
		callMethod<void>(
			"onRequestFocus",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		);
	}
	inline void WebChromeClient::onShowCustomView(android::view::View arg0, JObject arg1) const
	{
		callMethod<void>(
			"onShowCustomView",
			"(Landroid/view/View;Landroid/webkit/WebChromeClient$CustomViewCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WebChromeClient::onShowCustomView(android::view::View arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"onShowCustomView",
			"(Landroid/view/View;ILandroid/webkit/WebChromeClient$CustomViewCallback;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean WebChromeClient::onShowFileChooser(android::webkit::WebView arg0, JObject arg1, android::webkit::WebChromeClient_FileChooserParams arg2) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif

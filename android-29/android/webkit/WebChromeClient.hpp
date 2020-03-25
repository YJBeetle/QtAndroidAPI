#pragma once

#ifndef ANDROID_WEBKIT_WEBCHROMECLIENT
#define ANDROID_WEBKIT_WEBCHROMECLIENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class WebView;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::os
{
	class Message;
}
namespace __jni_impl::android::webkit
{
	class JsResult;
}
namespace __jni_impl::android::webkit
{
	class JsPromptResult;
}
namespace __jni_impl::android::webkit
{
	class PermissionRequest;
}
namespace __jni_impl::android::webkit
{
	class ConsoleMessage;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::webkit
{
	class WebChromeClient_FileChooserParams;
}

namespace __jni_impl::android::webkit
{
	class WebChromeClient : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onProgressChanged(__jni_impl::android::webkit::WebView arg0, jint arg1);
		void onReceivedTitle(__jni_impl::android::webkit::WebView arg0, jstring arg1);
		void onReceivedTouchIconUrl(__jni_impl::android::webkit::WebView arg0, jstring arg1, jboolean arg2);
		void onShowCustomView(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1);
		void onShowCustomView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		void onHideCustomView();
		jboolean onCreateWindow(__jni_impl::android::webkit::WebView arg0, jboolean arg1, jboolean arg2, __jni_impl::android::os::Message arg3);
		void onRequestFocus(__jni_impl::android::webkit::WebView arg0);
		void onCloseWindow(__jni_impl::android::webkit::WebView arg0);
		jboolean onJsAlert(__jni_impl::android::webkit::WebView arg0, jstring arg1, jstring arg2, __jni_impl::android::webkit::JsResult arg3);
		jboolean onJsConfirm(__jni_impl::android::webkit::WebView arg0, jstring arg1, jstring arg2, __jni_impl::android::webkit::JsResult arg3);
		jboolean onJsPrompt(__jni_impl::android::webkit::WebView arg0, jstring arg1, jstring arg2, jstring arg3, __jni_impl::android::webkit::JsPromptResult arg4);
		jboolean onJsBeforeUnload(__jni_impl::android::webkit::WebView arg0, jstring arg1, jstring arg2, __jni_impl::android::webkit::JsResult arg3);
		void onExceededDatabaseQuota(jstring arg0, jstring arg1, jlong arg2, jlong arg3, jlong arg4, __jni_impl::__JniBaseClass arg5);
		void onReachedMaxAppCacheSize(jlong arg0, jlong arg1, __jni_impl::__JniBaseClass arg2);
		void onGeolocationPermissionsShowPrompt(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void onGeolocationPermissionsHidePrompt();
		void onPermissionRequest(__jni_impl::android::webkit::PermissionRequest arg0);
		void onPermissionRequestCanceled(__jni_impl::android::webkit::PermissionRequest arg0);
		jboolean onJsTimeout();
		jboolean onConsoleMessage(__jni_impl::android::webkit::ConsoleMessage arg0);
		void onConsoleMessage(jstring arg0, jint arg1, jstring arg2);
		QAndroidJniObject getDefaultVideoPoster();
		QAndroidJniObject getVideoLoadingProgressView();
		void getVisitedHistory(__jni_impl::__JniBaseClass arg0);
		jboolean onShowFileChooser(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::webkit::WebChromeClient_FileChooserParams arg2);
		void onReceivedIcon(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::graphics::Bitmap arg1);
	};
} // namespace __jni_impl::android::webkit

#include "WebView.hpp"
#include "../view/View.hpp"
#include "../os/Message.hpp"
#include "JsResult.hpp"
#include "JsPromptResult.hpp"
#include "PermissionRequest.hpp"
#include "ConsoleMessage.hpp"
#include "../graphics/Bitmap.hpp"
#include "WebChromeClient_FileChooserParams.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebChromeClient::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebChromeClient",
			"()V");
	}
	
	// Methods
	void WebChromeClient::onProgressChanged(__jni_impl::android::webkit::WebView arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onProgressChanged",
			"(Landroid/webkit/WebView;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void WebChromeClient::onReceivedTitle(__jni_impl::android::webkit::WebView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onReceivedTitle",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void WebChromeClient::onReceivedTouchIconUrl(__jni_impl::android::webkit::WebView arg0, jstring arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onReceivedTouchIconUrl",
			"(Landroid/webkit/WebView;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void WebChromeClient::onShowCustomView(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onShowCustomView",
			"(Landroid/view/View;Landroid/webkit/WebChromeClient$CustomViewCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void WebChromeClient::onShowCustomView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onShowCustomView",
			"(Landroid/view/View;ILandroid/webkit/WebChromeClient$CustomViewCallback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void WebChromeClient::onHideCustomView()
	{
		__thiz.callMethod<void>(
			"onHideCustomView",
			"()V");
	}
	jboolean WebChromeClient::onCreateWindow(__jni_impl::android::webkit::WebView arg0, jboolean arg1, jboolean arg2, __jni_impl::android::os::Message arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onCreateWindow",
			"(Landroid/webkit/WebView;ZZLandroid/os/Message;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void WebChromeClient::onRequestFocus(__jni_impl::android::webkit::WebView arg0)
	{
		__thiz.callMethod<void>(
			"onRequestFocus",
			"(Landroid/webkit/WebView;)V",
			arg0.__jniObject().object());
	}
	void WebChromeClient::onCloseWindow(__jni_impl::android::webkit::WebView arg0)
	{
		__thiz.callMethod<void>(
			"onCloseWindow",
			"(Landroid/webkit/WebView;)V",
			arg0.__jniObject().object());
	}
	jboolean WebChromeClient::onJsAlert(__jni_impl::android::webkit::WebView arg0, jstring arg1, jstring arg2, __jni_impl::android::webkit::JsResult arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onJsAlert",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	jboolean WebChromeClient::onJsConfirm(__jni_impl::android::webkit::WebView arg0, jstring arg1, jstring arg2, __jni_impl::android::webkit::JsResult arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onJsConfirm",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	jboolean WebChromeClient::onJsPrompt(__jni_impl::android::webkit::WebView arg0, jstring arg1, jstring arg2, jstring arg3, __jni_impl::android::webkit::JsPromptResult arg4)
	{
		return __thiz.callMethod<jboolean>(
			"onJsPrompt",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	jboolean WebChromeClient::onJsBeforeUnload(__jni_impl::android::webkit::WebView arg0, jstring arg1, jstring arg2, __jni_impl::android::webkit::JsResult arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onJsBeforeUnload",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void WebChromeClient::onExceededDatabaseQuota(jstring arg0, jstring arg1, jlong arg2, jlong arg3, jlong arg4, __jni_impl::__JniBaseClass arg5)
	{
		__thiz.callMethod<void>(
			"onExceededDatabaseQuota",
			"(Ljava/lang/String;Ljava/lang/String;JJJLandroid/webkit/WebStorage$QuotaUpdater;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object());
	}
	void WebChromeClient::onReachedMaxAppCacheSize(jlong arg0, jlong arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onReachedMaxAppCacheSize",
			"(JJLandroid/webkit/WebStorage$QuotaUpdater;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void WebChromeClient::onGeolocationPermissionsShowPrompt(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onGeolocationPermissionsShowPrompt",
			"(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void WebChromeClient::onGeolocationPermissionsHidePrompt()
	{
		__thiz.callMethod<void>(
			"onGeolocationPermissionsHidePrompt",
			"()V");
	}
	void WebChromeClient::onPermissionRequest(__jni_impl::android::webkit::PermissionRequest arg0)
	{
		__thiz.callMethod<void>(
			"onPermissionRequest",
			"(Landroid/webkit/PermissionRequest;)V",
			arg0.__jniObject().object());
	}
	void WebChromeClient::onPermissionRequestCanceled(__jni_impl::android::webkit::PermissionRequest arg0)
	{
		__thiz.callMethod<void>(
			"onPermissionRequestCanceled",
			"(Landroid/webkit/PermissionRequest;)V",
			arg0.__jniObject().object());
	}
	jboolean WebChromeClient::onJsTimeout()
	{
		return __thiz.callMethod<jboolean>(
			"onJsTimeout",
			"()Z");
	}
	jboolean WebChromeClient::onConsoleMessage(__jni_impl::android::webkit::ConsoleMessage arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onConsoleMessage",
			"(Landroid/webkit/ConsoleMessage;)Z",
			arg0.__jniObject().object());
	}
	void WebChromeClient::onConsoleMessage(jstring arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onConsoleMessage",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject WebChromeClient::getDefaultVideoPoster()
	{
		return __thiz.callObjectMethod(
			"getDefaultVideoPoster",
			"()Landroid/graphics/Bitmap;");
	}
	QAndroidJniObject WebChromeClient::getVideoLoadingProgressView()
	{
		return __thiz.callObjectMethod(
			"getVideoLoadingProgressView",
			"()Landroid/view/View;");
	}
	void WebChromeClient::getVisitedHistory(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"getVisitedHistory",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.__jniObject().object());
	}
	jboolean WebChromeClient::onShowFileChooser(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::webkit::WebChromeClient_FileChooserParams arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onShowFileChooser",
			"(Landroid/webkit/WebView;Landroid/webkit/ValueCallback;Landroid/webkit/WebChromeClient$FileChooserParams;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void WebChromeClient::onReceivedIcon(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		__thiz.callMethod<void>(
			"onReceivedIcon",
			"(Landroid/webkit/WebView;Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebChromeClient : public __jni_impl::android::webkit::WebChromeClient
	{
	public:
		WebChromeClient(QAndroidJniObject obj) { __thiz = obj; }
		WebChromeClient()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBCHROMECLIENT


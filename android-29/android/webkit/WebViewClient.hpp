#pragma once

#ifndef ANDROID_WEBKIT_WEBVIEWCLIENT
#define ANDROID_WEBKIT_WEBVIEWCLIENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class WebView;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::webkit
{
	class WebResourceResponse;
}
namespace __jni_impl::android::os
{
	class Message;
}
namespace __jni_impl::android::webkit
{
	class WebResourceError;
}
namespace __jni_impl::android::webkit
{
	class SslErrorHandler;
}
namespace __jni_impl::android::net::http
{
	class SslError;
}
namespace __jni_impl::android::webkit
{
	class ClientCertRequest;
}
namespace __jni_impl::android::webkit
{
	class HttpAuthHandler;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::webkit
{
	class RenderProcessGoneDetail;
}
namespace __jni_impl::android::webkit
{
	class SafeBrowsingResponse;
}

namespace __jni_impl::android::webkit
{
	class WebViewClient : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_AUTHENTICATION();
		static jint ERROR_BAD_URL();
		static jint ERROR_CONNECT();
		static jint ERROR_FAILED_SSL_HANDSHAKE();
		static jint ERROR_FILE();
		static jint ERROR_FILE_NOT_FOUND();
		static jint ERROR_HOST_LOOKUP();
		static jint ERROR_IO();
		static jint ERROR_PROXY_AUTHENTICATION();
		static jint ERROR_REDIRECT_LOOP();
		static jint ERROR_TIMEOUT();
		static jint ERROR_TOO_MANY_REQUESTS();
		static jint ERROR_UNKNOWN();
		static jint ERROR_UNSAFE_RESOURCE();
		static jint ERROR_UNSUPPORTED_AUTH_SCHEME();
		static jint ERROR_UNSUPPORTED_SCHEME();
		static jint SAFE_BROWSING_THREAT_BILLING();
		static jint SAFE_BROWSING_THREAT_MALWARE();
		static jint SAFE_BROWSING_THREAT_PHISHING();
		static jint SAFE_BROWSING_THREAT_UNKNOWN();
		static jint SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean shouldOverrideUrlLoading(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1);
		jboolean shouldOverrideUrlLoading(__jni_impl::android::webkit::WebView arg0, jstring arg1);
		void onPageStarted(__jni_impl::android::webkit::WebView arg0, jstring arg1, __jni_impl::android::graphics::Bitmap arg2);
		void onPageFinished(__jni_impl::android::webkit::WebView arg0, jstring arg1);
		void onLoadResource(__jni_impl::android::webkit::WebView arg0, jstring arg1);
		void onPageCommitVisible(__jni_impl::android::webkit::WebView arg0, jstring arg1);
		QAndroidJniObject shouldInterceptRequest(__jni_impl::android::webkit::WebView arg0, jstring arg1);
		QAndroidJniObject shouldInterceptRequest(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1);
		void onTooManyRedirects(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::os::Message arg1, __jni_impl::android::os::Message arg2);
		void onReceivedError(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::webkit::WebResourceError arg2);
		void onReceivedError(__jni_impl::android::webkit::WebView arg0, jint arg1, jstring arg2, jstring arg3);
		void onReceivedHttpError(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::webkit::WebResourceResponse arg2);
		void onFormResubmission(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::os::Message arg1, __jni_impl::android::os::Message arg2);
		void doUpdateVisitedHistory(__jni_impl::android::webkit::WebView arg0, jstring arg1, jboolean arg2);
		void onReceivedSslError(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::SslErrorHandler arg1, __jni_impl::android::net::http::SslError arg2);
		void onReceivedClientCertRequest(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::ClientCertRequest arg1);
		void onReceivedHttpAuthRequest(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::HttpAuthHandler arg1, jstring arg2, jstring arg3);
		jboolean shouldOverrideKeyEvent(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::view::KeyEvent arg1);
		void onUnhandledKeyEvent(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::view::KeyEvent arg1);
		void onScaleChanged(__jni_impl::android::webkit::WebView arg0, jfloat arg1, jfloat arg2);
		void onReceivedLoginRequest(__jni_impl::android::webkit::WebView arg0, jstring arg1, jstring arg2, jstring arg3);
		jboolean onRenderProcessGone(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::RenderProcessGoneDetail arg1);
		void onSafeBrowsingHit(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::webkit::SafeBrowsingResponse arg3);
	};
} // namespace __jni_impl::android::webkit

#include "WebView.hpp"
#include "../graphics/Bitmap.hpp"
#include "WebResourceResponse.hpp"
#include "../os/Message.hpp"
#include "WebResourceError.hpp"
#include "SslErrorHandler.hpp"
#include "../net/http/SslError.hpp"
#include "ClientCertRequest.hpp"
#include "HttpAuthHandler.hpp"
#include "../view/KeyEvent.hpp"
#include "RenderProcessGoneDetail.hpp"
#include "SafeBrowsingResponse.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	jint WebViewClient::ERROR_AUTHENTICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_AUTHENTICATION"
		);
	}
	jint WebViewClient::ERROR_BAD_URL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_BAD_URL"
		);
	}
	jint WebViewClient::ERROR_CONNECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_CONNECT"
		);
	}
	jint WebViewClient::ERROR_FAILED_SSL_HANDSHAKE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_FAILED_SSL_HANDSHAKE"
		);
	}
	jint WebViewClient::ERROR_FILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_FILE"
		);
	}
	jint WebViewClient::ERROR_FILE_NOT_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_FILE_NOT_FOUND"
		);
	}
	jint WebViewClient::ERROR_HOST_LOOKUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_HOST_LOOKUP"
		);
	}
	jint WebViewClient::ERROR_IO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_IO"
		);
	}
	jint WebViewClient::ERROR_PROXY_AUTHENTICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_PROXY_AUTHENTICATION"
		);
	}
	jint WebViewClient::ERROR_REDIRECT_LOOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_REDIRECT_LOOP"
		);
	}
	jint WebViewClient::ERROR_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_TIMEOUT"
		);
	}
	jint WebViewClient::ERROR_TOO_MANY_REQUESTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_TOO_MANY_REQUESTS"
		);
	}
	jint WebViewClient::ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNKNOWN"
		);
	}
	jint WebViewClient::ERROR_UNSAFE_RESOURCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNSAFE_RESOURCE"
		);
	}
	jint WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNSUPPORTED_AUTH_SCHEME"
		);
	}
	jint WebViewClient::ERROR_UNSUPPORTED_SCHEME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"ERROR_UNSUPPORTED_SCHEME"
		);
	}
	jint WebViewClient::SAFE_BROWSING_THREAT_BILLING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_BILLING"
		);
	}
	jint WebViewClient::SAFE_BROWSING_THREAT_MALWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_MALWARE"
		);
	}
	jint WebViewClient::SAFE_BROWSING_THREAT_PHISHING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_PHISHING"
		);
	}
	jint WebViewClient::SAFE_BROWSING_THREAT_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_UNKNOWN"
		);
	}
	jint WebViewClient::SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebViewClient",
			"SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE"
		);
	}
	
	// Constructors
	void WebViewClient::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebViewClient",
			"()V");
	}
	
	// Methods
	jboolean WebViewClient::shouldOverrideUrlLoading(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"shouldOverrideUrlLoading",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean WebViewClient::shouldOverrideUrlLoading(__jni_impl::android::webkit::WebView arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"shouldOverrideUrlLoading",
			"(Landroid/webkit/WebView;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WebViewClient::onPageStarted(__jni_impl::android::webkit::WebView arg0, jstring arg1, __jni_impl::android::graphics::Bitmap arg2)
	{
		__thiz.callMethod<void>(
			"onPageStarted",
			"(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::onPageFinished(__jni_impl::android::webkit::WebView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onPageFinished",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WebViewClient::onLoadResource(__jni_impl::android::webkit::WebView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onLoadResource",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WebViewClient::onPageCommitVisible(__jni_impl::android::webkit::WebView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onPageCommitVisible",
			"(Landroid/webkit/WebView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject WebViewClient::shouldInterceptRequest(__jni_impl::android::webkit::WebView arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject WebViewClient::shouldInterceptRequest(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebViewClient::onTooManyRedirects(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::os::Message arg1, __jni_impl::android::os::Message arg2)
	{
		__thiz.callMethod<void>(
			"onTooManyRedirects",
			"(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::onReceivedError(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::webkit::WebResourceError arg2)
	{
		__thiz.callMethod<void>(
			"onReceivedError",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceError;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::onReceivedError(__jni_impl::android::webkit::WebView arg0, jint arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"onReceivedError",
			"(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void WebViewClient::onReceivedHttpError(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::webkit::WebResourceResponse arg2)
	{
		__thiz.callMethod<void>(
			"onReceivedHttpError",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceResponse;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::onFormResubmission(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::os::Message arg1, __jni_impl::android::os::Message arg2)
	{
		__thiz.callMethod<void>(
			"onFormResubmission",
			"(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::doUpdateVisitedHistory(__jni_impl::android::webkit::WebView arg0, jstring arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"doUpdateVisitedHistory",
			"(Landroid/webkit/WebView;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void WebViewClient::onReceivedSslError(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::SslErrorHandler arg1, __jni_impl::android::net::http::SslError arg2)
	{
		__thiz.callMethod<void>(
			"onReceivedSslError",
			"(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WebViewClient::onReceivedClientCertRequest(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::ClientCertRequest arg1)
	{
		__thiz.callMethod<void>(
			"onReceivedClientCertRequest",
			"(Landroid/webkit/WebView;Landroid/webkit/ClientCertRequest;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebViewClient::onReceivedHttpAuthRequest(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::HttpAuthHandler arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"onReceivedHttpAuthRequest",
			"(Landroid/webkit/WebView;Landroid/webkit/HttpAuthHandler;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jboolean WebViewClient::shouldOverrideKeyEvent(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"shouldOverrideKeyEvent",
			"(Landroid/webkit/WebView;Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebViewClient::onUnhandledKeyEvent(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		__thiz.callMethod<void>(
			"onUnhandledKeyEvent",
			"(Landroid/webkit/WebView;Landroid/view/KeyEvent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebViewClient::onScaleChanged(__jni_impl::android::webkit::WebView arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"onScaleChanged",
			"(Landroid/webkit/WebView;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void WebViewClient::onReceivedLoginRequest(__jni_impl::android::webkit::WebView arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"onReceivedLoginRequest",
			"(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean WebViewClient::onRenderProcessGone(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::RenderProcessGoneDetail arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onRenderProcessGone",
			"(Landroid/webkit/WebView;Landroid/webkit/RenderProcessGoneDetail;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebViewClient::onSafeBrowsingHit(__jni_impl::android::webkit::WebView arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::webkit::SafeBrowsingResponse arg3)
	{
		__thiz.callMethod<void>(
			"onSafeBrowsingHit",
			"(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;ILandroid/webkit/SafeBrowsingResponse;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebViewClient : public __jni_impl::android::webkit::WebViewClient
	{
	public:
		WebViewClient(QAndroidJniObject obj) { __thiz = obj; }
		WebViewClient()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBVIEWCLIENT


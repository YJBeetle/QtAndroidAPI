#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::net::http
{
	class SslError;
}
namespace android::os
{
	class Message;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::webkit
{
	class ClientCertRequest;
}
namespace android::webkit
{
	class HttpAuthHandler;
}
namespace android::webkit
{
	class RenderProcessGoneDetail;
}
namespace android::webkit
{
	class SafeBrowsingResponse;
}
namespace android::webkit
{
	class SslErrorHandler;
}
namespace android::webkit
{
	class WebResourceError;
}
namespace android::webkit
{
	class WebResourceResponse;
}
namespace android::webkit
{
	class WebView;
}
class JString;

namespace android::webkit
{
	class WebViewClient : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit WebViewClient(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebViewClient(QJniObject obj);
		
		// Constructors
		WebViewClient();
		
		// Methods
		void doUpdateVisitedHistory(android::webkit::WebView arg0, JString arg1, jboolean arg2);
		void onFormResubmission(android::webkit::WebView arg0, android::os::Message arg1, android::os::Message arg2);
		void onLoadResource(android::webkit::WebView arg0, JString arg1);
		void onPageCommitVisible(android::webkit::WebView arg0, JString arg1);
		void onPageFinished(android::webkit::WebView arg0, JString arg1);
		void onPageStarted(android::webkit::WebView arg0, JString arg1, android::graphics::Bitmap arg2);
		void onReceivedClientCertRequest(android::webkit::WebView arg0, android::webkit::ClientCertRequest arg1);
		void onReceivedError(android::webkit::WebView arg0, JObject arg1, android::webkit::WebResourceError arg2);
		void onReceivedError(android::webkit::WebView arg0, jint arg1, JString arg2, JString arg3);
		void onReceivedHttpAuthRequest(android::webkit::WebView arg0, android::webkit::HttpAuthHandler arg1, JString arg2, JString arg3);
		void onReceivedHttpError(android::webkit::WebView arg0, JObject arg1, android::webkit::WebResourceResponse arg2);
		void onReceivedLoginRequest(android::webkit::WebView arg0, JString arg1, JString arg2, JString arg3);
		void onReceivedSslError(android::webkit::WebView arg0, android::webkit::SslErrorHandler arg1, android::net::http::SslError arg2);
		jboolean onRenderProcessGone(android::webkit::WebView arg0, android::webkit::RenderProcessGoneDetail arg1);
		void onSafeBrowsingHit(android::webkit::WebView arg0, JObject arg1, jint arg2, android::webkit::SafeBrowsingResponse arg3);
		void onScaleChanged(android::webkit::WebView arg0, jfloat arg1, jfloat arg2);
		void onTooManyRedirects(android::webkit::WebView arg0, android::os::Message arg1, android::os::Message arg2);
		void onUnhandledKeyEvent(android::webkit::WebView arg0, android::view::KeyEvent arg1);
		android::webkit::WebResourceResponse shouldInterceptRequest(android::webkit::WebView arg0, JObject arg1);
		android::webkit::WebResourceResponse shouldInterceptRequest(android::webkit::WebView arg0, JString arg1);
		jboolean shouldOverrideKeyEvent(android::webkit::WebView arg0, android::view::KeyEvent arg1);
		jboolean shouldOverrideUrlLoading(android::webkit::WebView arg0, JObject arg1);
		jboolean shouldOverrideUrlLoading(android::webkit::WebView arg0, JString arg1);
	};
} // namespace android::webkit


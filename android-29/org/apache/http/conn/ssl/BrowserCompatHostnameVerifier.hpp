#pragma once

#ifndef ORG_APACHE_HTTP_CONN_SSL_BROWSERCOMPATHOSTNAMEVERIFIER
#define ORG_APACHE_HTTP_CONN_SSL_BROWSERCOMPATHOSTNAMEVERIFIER

#include "AbstractVerifier.hpp"


namespace __jni_impl::org::apache::http::conn::ssl
{
	class BrowserCompatHostnameVerifier : public __jni_impl::org::apache::http::conn::ssl::AbstractVerifier
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		void verify(jstring arg0, jarray arg1, jarray arg2);
	};
} // namespace __jni_impl::org::apache::http::conn::ssl


namespace __jni_impl::org::apache::http::conn::ssl
{
	// Fields
	
	// Constructors
	void BrowserCompatHostnameVerifier::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.BrowserCompatHostnameVerifier",
			"()V");
	}
	
	// Methods
	QAndroidJniObject BrowserCompatHostnameVerifier::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void BrowserCompatHostnameVerifier::verify(jstring arg0, jarray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
} // namespace __jni_impl::org::apache::http::conn::ssl

namespace org::apache::http::conn::ssl
{
	class BrowserCompatHostnameVerifier : public __jni_impl::org::apache::http::conn::ssl::BrowserCompatHostnameVerifier
	{
	public:
		BrowserCompatHostnameVerifier(QAndroidJniObject obj) { __thiz = obj; }
		BrowserCompatHostnameVerifier()
		{
			__constructor();
		}
	};
} // namespace org::apache::http::conn::ssl

#endif // ORG_APACHE_HTTP_CONN_SSL_BROWSERCOMPATHOSTNAMEVERIFIER

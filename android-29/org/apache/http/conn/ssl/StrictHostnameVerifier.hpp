#pragma once

#ifndef ORG_APACHE_HTTP_CONN_SSL_STRICTHOSTNAMEVERIFIER
#define ORG_APACHE_HTTP_CONN_SSL_STRICTHOSTNAMEVERIFIER

#include "AbstractVerifier.hpp"


namespace __jni_impl::org::apache::http::conn::ssl
{
	class StrictHostnameVerifier : public __jni_impl::org::apache::http::conn::ssl::AbstractVerifier
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
	void StrictHostnameVerifier::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.StrictHostnameVerifier",
			"()V");
	}
	
	// Methods
	QAndroidJniObject StrictHostnameVerifier::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void StrictHostnameVerifier::verify(jstring arg0, jarray arg1, jarray arg2)
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
	class StrictHostnameVerifier : public __jni_impl::org::apache::http::conn::ssl::StrictHostnameVerifier
	{
	public:
		StrictHostnameVerifier(QAndroidJniObject obj) { __thiz = obj; }
		StrictHostnameVerifier()
		{
			__constructor();
		}
	};
} // namespace org::apache::http::conn::ssl

#endif // ORG_APACHE_HTTP_CONN_SSL_STRICTHOSTNAMEVERIFIER


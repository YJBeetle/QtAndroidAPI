#pragma once

#ifndef ORG_APACHE_HTTP_CONN_SSL_ALLOWALLHOSTNAMEVERIFIER
#define ORG_APACHE_HTTP_CONN_SSL_ALLOWALLHOSTNAMEVERIFIER

#include "../../../../../__JniBaseClass.hpp"
#include "AbstractVerifier.hpp"


namespace __jni_impl::org::apache::http::conn::ssl
{
	class AllowAllHostnameVerifier : public __jni_impl::org::apache::http::conn::ssl::AbstractVerifier
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		void verify(jstring arg0, jarray arg1, jarray arg2);
	};
} // namespace __jni_impl::org::apache::http::conn::ssl


namespace __jni_impl::org::apache::http::conn::ssl
{
	// Fields
	
	// Constructors
	void AllowAllHostnameVerifier::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.AllowAllHostnameVerifier",
			"()V");
	}
	
	// Methods
	jstring AllowAllHostnameVerifier::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AllowAllHostnameVerifier::verify(jstring arg0, jarray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::org::apache::http::conn::ssl

namespace org::apache::http::conn::ssl
{
	class AllowAllHostnameVerifier : public __jni_impl::org::apache::http::conn::ssl::AllowAllHostnameVerifier
	{
	public:
		AllowAllHostnameVerifier(QAndroidJniObject obj) { __thiz = obj; }
		AllowAllHostnameVerifier()
		{
			__constructor();
		}
	};
} // namespace org::apache::http::conn::ssl

#endif // ORG_APACHE_HTTP_CONN_SSL_ALLOWALLHOSTNAMEVERIFIER


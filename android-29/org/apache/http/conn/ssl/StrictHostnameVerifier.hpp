#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "./AbstractVerifier.hpp"


namespace __jni_impl::org::apache::http::conn::ssl
{
	class StrictHostnameVerifier : public __jni_impl::org::apache::http::conn::ssl::AbstractVerifier
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		void verify(jstring arg0, jarray arg1, jarray arg2);
		void verify(const QString &arg0, jarray arg1, jarray arg2);
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
			"()V"
		);
	}
	
	// Methods
	jstring StrictHostnameVerifier::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StrictHostnameVerifier::verify(jstring arg0, jarray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void StrictHostnameVerifier::verify(const QString &arg0, jarray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
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


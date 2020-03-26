#pragma once

#ifndef ANDROID_NET_HTTP_X509TRUSTMANAGEREXTENSIONS
#define ANDROID_NET_HTTP_X509TRUSTMANAGEREXTENSIONS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}

namespace __jni_impl::android::net::http
{
	class X509TrustManagerExtensions : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject checkServerTrusted(jarray arg0, jstring arg1, jstring arg2);
		jboolean isUserAddedCertificate(__jni_impl::java::security::cert::X509Certificate arg0);
		jboolean isSameTrustConfiguration(jstring arg0, jstring arg1);
	};
} // namespace __jni_impl::android::net::http

#include "../../../java/security/cert/X509Certificate.hpp"

namespace __jni_impl::android::net::http
{
	// Fields
	
	// Constructors
	void X509TrustManagerExtensions::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.X509TrustManagerExtensions",
			"(Ljavax/net/ssl/X509TrustManager;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject X509TrustManagerExtensions::checkServerTrusted(jarray arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean X509TrustManagerExtensions::isUserAddedCertificate(__jni_impl::java::security::cert::X509Certificate arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isUserAddedCertificate",
			"(Ljava/security/cert/X509Certificate;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean X509TrustManagerExtensions::isSameTrustConfiguration(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isSameTrustConfiguration",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::net::http

namespace android::net::http
{
	class X509TrustManagerExtensions : public __jni_impl::android::net::http::X509TrustManagerExtensions
	{
	public:
		X509TrustManagerExtensions(QAndroidJniObject obj) { __thiz = obj; }
		X509TrustManagerExtensions(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::http

#endif // ANDROID_NET_HTTP_X509TRUSTMANAGEREXTENSIONS


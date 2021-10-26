#pragma once

#ifndef ANDROID_NET_SSL_SSLSOCKETS
#define ANDROID_NET_SSL_SSLSOCKETS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::net::ssl
{
	class SSLSocket;
}

namespace __jni_impl::android::net::ssl
{
	class SSLSockets : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isSupportedSocket(__jni_impl::javax::net::ssl::SSLSocket arg0);
		static void setUseSessionTickets(__jni_impl::javax::net::ssl::SSLSocket arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::net::ssl

#include "../../../javax/net/ssl/SSLSocket.hpp"

namespace __jni_impl::android::net::ssl
{
	// Fields
	
	// Constructors
	void SSLSockets::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.ssl.SSLSockets",
			"(V)V");
	}
	
	// Methods
	jboolean SSLSockets::isSupportedSocket(__jni_impl::javax::net::ssl::SSLSocket arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.ssl.SSLSockets",
			"isSupportedSocket",
			"(Ljavax/net/ssl/SSLSocket;)Z",
			arg0.__jniObject().object()
		);
	}
	void SSLSockets::setUseSessionTickets(__jni_impl::javax::net::ssl::SSLSocket arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.ssl.SSLSockets",
			"setUseSessionTickets",
			"(Ljavax/net/ssl/SSLSocket;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::ssl

namespace android::net::ssl
{
	class SSLSockets : public __jni_impl::android::net::ssl::SSLSockets
	{
	public:
		SSLSockets(QAndroidJniObject obj) { __thiz = obj; }
		SSLSockets()
		{
			__constructor();
		}
	};
} // namespace android::net::ssl

#endif // ANDROID_NET_SSL_SSLSOCKETS


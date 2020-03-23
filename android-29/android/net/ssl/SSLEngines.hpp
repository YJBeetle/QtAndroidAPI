#pragma once

#ifndef ANDROID_NET_SSL_SSLENGINES
#define ANDROID_NET_SSL_SSLENGINES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::net::ssl
{
	class SSLEngine;
}

namespace __jni_impl::android::net::ssl
{
	class SSLEngines : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isSupportedEngine(__jni_impl::javax::net::ssl::SSLEngine arg0);
		static void setUseSessionTickets(__jni_impl::javax::net::ssl::SSLEngine arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::net::ssl

#include "../../../javax/net/ssl/SSLEngine.hpp"

namespace __jni_impl::android::net::ssl
{
	// Fields
	
	// Constructors
	void SSLEngines::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.ssl.SSLEngines",
			"(V)V");
	}
	
	// Methods
	jboolean SSLEngines::isSupportedEngine(__jni_impl::javax::net::ssl::SSLEngine arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.ssl.SSLEngines",
			"isSupportedEngine",
			"(Ljavax/net/ssl/SSLEngine;)Z",
			arg0.__jniObject().object());
	}
	void SSLEngines::setUseSessionTickets(__jni_impl::javax::net::ssl::SSLEngine arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.ssl.SSLEngines",
			"setUseSessionTickets",
			"(Ljavax/net/ssl/SSLEngine;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::net::ssl

namespace android::net::ssl
{
	class SSLEngines : public __jni_impl::android::net::ssl::SSLEngines
	{
	public:
		SSLEngines(QAndroidJniObject obj) { __thiz = obj; }
		SSLEngines()
		{
			__constructor();
		}
	};
} // namespace android::net::ssl

#endif // ANDROID_NET_SSL_SSLENGINES


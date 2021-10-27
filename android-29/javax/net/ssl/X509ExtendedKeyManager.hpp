#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::net::ssl
{
	class SSLEngine;
}

namespace __jni_impl::javax::net::ssl
{
	class X509ExtendedKeyManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring chooseEngineClientAlias(jarray arg0, jarray arg1, __jni_impl::javax::net::ssl::SSLEngine arg2);
		jstring chooseEngineServerAlias(jstring arg0, jarray arg1, __jni_impl::javax::net::ssl::SSLEngine arg2);
		jstring chooseEngineServerAlias(const QString &arg0, jarray arg1, __jni_impl::javax::net::ssl::SSLEngine arg2);
	};
} // namespace __jni_impl::javax::net::ssl

#include "SSLEngine.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void X509ExtendedKeyManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.X509ExtendedKeyManager",
			"(V)V");
	}
	
	// Methods
	jstring X509ExtendedKeyManager::chooseEngineClientAlias(jarray arg0, jarray arg1, __jni_impl::javax::net::ssl::SSLEngine arg2)
	{
		return __thiz.callObjectMethod(
			"chooseEngineClientAlias",
			"([Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring X509ExtendedKeyManager::chooseEngineServerAlias(jstring arg0, jarray arg1, __jni_impl::javax::net::ssl::SSLEngine arg2)
	{
		return __thiz.callObjectMethod(
			"chooseEngineServerAlias",
			"(Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring X509ExtendedKeyManager::chooseEngineServerAlias(const QString &arg0, jarray arg1, __jni_impl::javax::net::ssl::SSLEngine arg2)
	{
		return __thiz.callObjectMethod(
			"chooseEngineServerAlias",
			"(Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class X509ExtendedKeyManager : public __jni_impl::javax::net::ssl::X509ExtendedKeyManager
	{
	public:
		X509ExtendedKeyManager(QAndroidJniObject obj) { __thiz = obj; }
		X509ExtendedKeyManager()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl


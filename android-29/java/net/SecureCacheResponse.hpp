#pragma once

#ifndef JAVA_NET_SECURECACHERESPONSE
#define JAVA_NET_SECURECACHERESPONSE

#include "../../__JniBaseClass.hpp"
#include "CacheResponse.hpp"

namespace __jni_impl::java::util
{
	class Optional;
}

namespace __jni_impl::java::net
{
	class SecureCacheResponse : public __jni_impl::java::net::CacheResponse
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getCipherSuite();
		QAndroidJniObject getLocalCertificateChain();
		QAndroidJniObject getServerCertificateChain();
		QAndroidJniObject getPeerPrincipal();
		QAndroidJniObject getLocalPrincipal();
		QAndroidJniObject getSSLSession();
	};
} // namespace __jni_impl::java::net

#include "../util/Optional.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void SecureCacheResponse::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.SecureCacheResponse",
			"()V"
		);
	}
	
	// Methods
	jstring SecureCacheResponse::getCipherSuite()
	{
		return __thiz.callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SecureCacheResponse::getLocalCertificateChain()
	{
		return __thiz.callObjectMethod(
			"getLocalCertificateChain",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getServerCertificateChain()
	{
		return __thiz.callObjectMethod(
			"getServerCertificateChain",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getPeerPrincipal()
	{
		return __thiz.callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getLocalPrincipal()
	{
		return __thiz.callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getSSLSession()
	{
		return __thiz.callObjectMethod(
			"getSSLSession",
			"()Ljava/util/Optional;"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class SecureCacheResponse : public __jni_impl::java::net::SecureCacheResponse
	{
	public:
		SecureCacheResponse(QAndroidJniObject obj) { __thiz = obj; }
		SecureCacheResponse()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_SECURECACHERESPONSE


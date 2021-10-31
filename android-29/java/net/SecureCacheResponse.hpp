#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CacheResponse.hpp"

namespace java::util
{
	class Optional;
}

namespace java::net
{
	class SecureCacheResponse : public java::net::CacheResponse
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecureCacheResponse(const char *className, const char *sig, Ts...agv) : java::net::CacheResponse(className, sig, std::forward<Ts>(agv)...) {}
		SecureCacheResponse(QAndroidJniObject obj);
		
		// Constructors
		SecureCacheResponse();
		
		// Methods
		jstring getCipherSuite();
		QAndroidJniObject getLocalCertificateChain();
		QAndroidJniObject getLocalPrincipal();
		QAndroidJniObject getPeerPrincipal();
		QAndroidJniObject getSSLSession();
		QAndroidJniObject getServerCertificateChain();
	};
} // namespace java::net


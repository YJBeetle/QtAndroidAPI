#pragma once

#ifndef JAVAX_NET_SSL_TRUSTMANAGERFACTORYSPI
#define JAVAX_NET_SSL_TRUSTMANAGERFACTORYSPI

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class KeyStore;
}

namespace __jni_impl::javax::net::ssl
{
	class TrustManagerFactorySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::net::ssl

#include "../../../java/security/KeyStore.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void TrustManagerFactorySpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.TrustManagerFactorySpi",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class TrustManagerFactorySpi : public __jni_impl::javax::net::ssl::TrustManagerFactorySpi
	{
	public:
		TrustManagerFactorySpi(QAndroidJniObject obj) { __thiz = obj; }
		TrustManagerFactorySpi()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_TRUSTMANAGERFACTORYSPI


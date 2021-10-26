#pragma once

#ifndef JAVAX_NET_SSL_KEYMANAGERFACTORYSPI
#define JAVAX_NET_SSL_KEYMANAGERFACTORYSPI

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class KeyStore;
}

namespace __jni_impl::javax::net::ssl
{
	class KeyManagerFactorySpi : public __JniBaseClass
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
	void KeyManagerFactorySpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.KeyManagerFactorySpi",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class KeyManagerFactorySpi : public __jni_impl::javax::net::ssl::KeyManagerFactorySpi
	{
	public:
		KeyManagerFactorySpi(QAndroidJniObject obj) { __thiz = obj; }
		KeyManagerFactorySpi()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_KEYMANAGERFACTORYSPI


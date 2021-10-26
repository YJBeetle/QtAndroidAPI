#pragma once

#ifndef JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS
#define JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class KeyStore_Builder;
}

namespace __jni_impl::javax::net::ssl
{
	class KeyStoreBuilderParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::KeyStore_Builder arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject getParameters();
	};
} // namespace __jni_impl::javax::net::ssl

#include "../../../java/security/KeyStore_Builder.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void KeyStoreBuilderParameters::__constructor(__jni_impl::java::security::KeyStore_Builder arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.KeyStoreBuilderParameters",
			"(Ljava/security/KeyStore$Builder;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyStoreBuilderParameters::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.KeyStoreBuilderParameters",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject KeyStoreBuilderParameters::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Ljava/util/List;"
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class KeyStoreBuilderParameters : public __jni_impl::javax::net::ssl::KeyStoreBuilderParameters
	{
	public:
		KeyStoreBuilderParameters(QAndroidJniObject obj) { __thiz = obj; }
		KeyStoreBuilderParameters(__jni_impl::java::security::KeyStore_Builder arg0)
		{
			__constructor(
				arg0);
		}
		KeyStoreBuilderParameters(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS


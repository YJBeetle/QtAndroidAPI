#pragma once

#ifndef JAVAX_NET_SSL_STANDARDCONSTANTS
#define JAVAX_NET_SSL_STANDARDCONSTANTS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::net::ssl
{
	class StandardConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint SNI_HOST_NAME();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	jint StandardConstants::SNI_HOST_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.net.ssl.StandardConstants",
			"SNI_HOST_NAME"
		);
	}
	
	// Constructors
	void StandardConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.StandardConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class StandardConstants : public __jni_impl::javax::net::ssl::StandardConstants
	{
	public:
		StandardConstants(QAndroidJniObject obj) { __thiz = obj; }
		StandardConstants()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_STANDARDCONSTANTS


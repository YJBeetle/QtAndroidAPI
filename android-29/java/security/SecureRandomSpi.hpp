#pragma once

#ifndef JAVA_SECURITY_SECURERANDOMSPI
#define JAVA_SECURITY_SECURERANDOMSPI

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::security
{
	class SecureRandomSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void SecureRandomSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.SecureRandomSpi",
			"()V"
		);
	}
	
	// Methods
	jstring SecureRandomSpi::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class SecureRandomSpi : public __jni_impl::java::security::SecureRandomSpi
	{
	public:
		SecureRandomSpi(QAndroidJniObject obj) { __thiz = obj; }
		SecureRandomSpi()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_SECURERANDOMSPI


#pragma once

#ifndef JAVA_SECURITY_DOMAINLOADSTOREPARAMETER
#define JAVA_SECURITY_DOMAINLOADSTOREPARAMETER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class URI;
}

namespace __jni_impl::java::security
{
	class DomainLoadStoreParameter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getProtectionParams();
		QAndroidJniObject getConfiguration();
		QAndroidJniObject getProtectionParameter();
	};
} // namespace __jni_impl::java::security

#include "../net/URI.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void DomainLoadStoreParameter::__constructor(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.DomainLoadStoreParameter",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject DomainLoadStoreParameter::getProtectionParams()
	{
		return __thiz.callObjectMethod(
			"getProtectionParams",
			"()Ljava/util/Map;");
	}
	QAndroidJniObject DomainLoadStoreParameter::getConfiguration()
	{
		return __thiz.callObjectMethod(
			"getConfiguration",
			"()Ljava/net/URI;");
	}
	QAndroidJniObject DomainLoadStoreParameter::getProtectionParameter()
	{
		return __thiz.callObjectMethod(
			"getProtectionParameter",
			"()Ljava/security/KeyStore$ProtectionParameter;");
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class DomainLoadStoreParameter : public __jni_impl::java::security::DomainLoadStoreParameter
	{
	public:
		DomainLoadStoreParameter(QAndroidJniObject obj) { __thiz = obj; }
		DomainLoadStoreParameter(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_DOMAINLOADSTOREPARAMETER


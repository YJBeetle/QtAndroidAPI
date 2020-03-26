#pragma once

#ifndef JAVA_SECURITY_CERT_POLICYQUALIFIERINFO
#define JAVA_SECURITY_CERT_POLICYQUALIFIERINFO

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::cert
{
	class PolicyQualifierInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0);
		
		// Methods
		jstring toString();
		jbyteArray getEncoded();
		jstring getPolicyQualifierId();
		jbyteArray getPolicyQualifier();
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void PolicyQualifierInfo::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PolicyQualifierInfo",
			"([B)V",
			arg0);
	}
	
	// Methods
	jstring PolicyQualifierInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray PolicyQualifierInfo::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring PolicyQualifierInfo::getPolicyQualifierId()
	{
		return __thiz.callObjectMethod(
			"getPolicyQualifierId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray PolicyQualifierInfo::getPolicyQualifier()
	{
		return __thiz.callObjectMethod(
			"getPolicyQualifier",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class PolicyQualifierInfo : public __jni_impl::java::security::cert::PolicyQualifierInfo
	{
	public:
		PolicyQualifierInfo(QAndroidJniObject obj) { __thiz = obj; }
		PolicyQualifierInfo(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_POLICYQUALIFIERINFO


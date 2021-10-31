#include "./PolicyQualifierInfo.hpp"

namespace java::security::cert
{
	// Fields
	
	PolicyQualifierInfo::PolicyQualifierInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PolicyQualifierInfo::PolicyQualifierInfo(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PolicyQualifierInfo",
			"([B)V",
			arg0
		);
	}
	
	// Methods
	jbyteArray PolicyQualifierInfo::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray PolicyQualifierInfo::getPolicyQualifier()
	{
		return __thiz.callObjectMethod(
			"getPolicyQualifier",
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
	jstring PolicyQualifierInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert


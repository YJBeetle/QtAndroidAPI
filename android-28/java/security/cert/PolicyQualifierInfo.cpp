#include "./PolicyQualifierInfo.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	PolicyQualifierInfo::PolicyQualifierInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PolicyQualifierInfo::PolicyQualifierInfo(jbyteArray arg0)
		: __JniBaseClass(
			"java.security.cert.PolicyQualifierInfo",
			"([B)V",
			arg0
		) {}
	
	// Methods
	jbyteArray PolicyQualifierInfo::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray PolicyQualifierInfo::getPolicyQualifier()
	{
		return callObjectMethod(
			"getPolicyQualifier",
			"()[B"
		).object<jbyteArray>();
	}
	jstring PolicyQualifierInfo::getPolicyQualifierId()
	{
		return callObjectMethod(
			"getPolicyQualifierId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PolicyQualifierInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert


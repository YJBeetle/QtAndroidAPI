#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./PolicyQualifierInfo.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	PolicyQualifierInfo::PolicyQualifierInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PolicyQualifierInfo::PolicyQualifierInfo(JByteArray arg0)
		: JObject(
			"java.security.cert.PolicyQualifierInfo",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	JByteArray PolicyQualifierInfo::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JByteArray PolicyQualifierInfo::getPolicyQualifier()
	{
		return callObjectMethod(
			"getPolicyQualifier",
			"()[B"
		);
	}
	JString PolicyQualifierInfo::getPolicyQualifierId()
	{
		return callObjectMethod(
			"getPolicyQualifierId",
			"()Ljava/lang/String;"
		);
	}
	JString PolicyQualifierInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert


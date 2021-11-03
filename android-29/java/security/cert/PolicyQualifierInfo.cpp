#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./PolicyQualifierInfo.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	PolicyQualifierInfo::PolicyQualifierInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PolicyQualifierInfo::PolicyQualifierInfo(JByteArray arg0)
		: JObject(
			"java.security.cert.PolicyQualifierInfo",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	JByteArray PolicyQualifierInfo::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JByteArray PolicyQualifierInfo::getPolicyQualifier() const
	{
		return callObjectMethod(
			"getPolicyQualifier",
			"()[B"
		);
	}
	JString PolicyQualifierInfo::getPolicyQualifierId() const
	{
		return callObjectMethod(
			"getPolicyQualifierId",
			"()Ljava/lang/String;"
		);
	}
	JString PolicyQualifierInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert


#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CertPath.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertPath::CertPath(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CertPath::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject CertPath::getCertificates() const
	{
		return callObjectMethod(
			"getCertificates",
			"()Ljava/util/List;"
		);
	}
	JByteArray CertPath::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JByteArray CertPath::getEncoded(JString arg0) const
	{
		return callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	JObject CertPath::getEncodings() const
	{
		return callObjectMethod(
			"getEncodings",
			"()Ljava/util/Iterator;"
		);
	}
	JString CertPath::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	jint CertPath::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CertPath::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert


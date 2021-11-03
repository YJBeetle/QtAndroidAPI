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
	jboolean CertPath::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject CertPath::getCertificates()
	{
		return callObjectMethod(
			"getCertificates",
			"()Ljava/util/List;"
		);
	}
	JByteArray CertPath::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JByteArray CertPath::getEncoded(JString arg0)
	{
		return callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	JObject CertPath::getEncodings()
	{
		return callObjectMethod(
			"getEncodings",
			"()Ljava/util/Iterator;"
		);
	}
	JString CertPath::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	jint CertPath::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CertPath::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert


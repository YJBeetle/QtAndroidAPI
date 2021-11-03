#include "../../../JByteArray.hpp"
#include "../../../JCharArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SNIServerName.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	SNIServerName::SNIServerName(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean SNIServerName::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray SNIServerName::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	jint SNIServerName::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint SNIServerName::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString SNIServerName::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::net::ssl


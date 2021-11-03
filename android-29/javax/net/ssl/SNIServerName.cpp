#include "../../../JByteArray.hpp"
#include "../../../JCharArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SNIServerName.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SNIServerName::SNIServerName(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean SNIServerName::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray SNIServerName::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	jint SNIServerName::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint SNIServerName::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString SNIServerName::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::net::ssl


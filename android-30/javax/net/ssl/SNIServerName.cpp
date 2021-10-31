#include "./SNIServerName.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SNIServerName::SNIServerName(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean SNIServerName::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray SNIServerName::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
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
	jstring SNIServerName::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::net::ssl


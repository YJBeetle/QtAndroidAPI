#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./IpSecTransform.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	IpSecTransform::IpSecTransform(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void IpSecTransform::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean IpSecTransform::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString IpSecTransform::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net


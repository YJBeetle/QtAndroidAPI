#include "../../JString.hpp"
#include "./IpSecTransform.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	IpSecTransform::IpSecTransform(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void IpSecTransform::close()
	{
		callMethod<void>(
			"close",
			"()V"
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


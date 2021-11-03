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
	jstring IpSecTransform::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net


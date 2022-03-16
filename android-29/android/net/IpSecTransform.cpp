#include "../../JString.hpp"
#include "./IpSecTransform.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	
	// Methods
	void IpSecTransform::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JString IpSecTransform::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net


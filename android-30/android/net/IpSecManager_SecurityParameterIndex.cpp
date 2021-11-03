#include "../../JString.hpp"
#include "./IpSecManager_SecurityParameterIndex.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	IpSecManager_SecurityParameterIndex::IpSecManager_SecurityParameterIndex(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void IpSecManager_SecurityParameterIndex::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint IpSecManager_SecurityParameterIndex::getSpi() const
	{
		return callMethod<jint>(
			"getSpi",
			"()I"
		);
	}
	JString IpSecManager_SecurityParameterIndex::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net


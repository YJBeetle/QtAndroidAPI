#include "../../JString.hpp"
#include "./IpSecManager_SecurityParameterIndex.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	IpSecManager_SecurityParameterIndex::IpSecManager_SecurityParameterIndex(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void IpSecManager_SecurityParameterIndex::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint IpSecManager_SecurityParameterIndex::getSpi()
	{
		return callMethod<jint>(
			"getSpi",
			"()I"
		);
	}
	JString IpSecManager_SecurityParameterIndex::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net


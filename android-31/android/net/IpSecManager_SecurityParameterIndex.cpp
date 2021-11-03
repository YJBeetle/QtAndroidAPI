#include "./IpSecManager_SecurityParameterIndex.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	IpSecManager_SecurityParameterIndex::IpSecManager_SecurityParameterIndex(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jstring IpSecManager_SecurityParameterIndex::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net


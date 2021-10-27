#include "./IpSecManager_SecurityParameterIndex.hpp"

namespace android::net
{
	// Fields
	
	IpSecManager_SecurityParameterIndex::IpSecManager_SecurityParameterIndex(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void IpSecManager_SecurityParameterIndex::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint IpSecManager_SecurityParameterIndex::getSpi()
	{
		return __thiz.callMethod<jint>(
			"getSpi",
			"()I"
		);
	}
	jstring IpSecManager_SecurityParameterIndex::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net


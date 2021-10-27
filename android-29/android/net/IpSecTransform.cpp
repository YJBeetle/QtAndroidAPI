#include "./IpSecTransform.hpp"

namespace android::net
{
	// Fields
	
	IpSecTransform::IpSecTransform(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void IpSecTransform::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jstring IpSecTransform::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net


#include "./PeerHandle.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	PeerHandle::PeerHandle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean PeerHandle::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PeerHandle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::wifi::aware


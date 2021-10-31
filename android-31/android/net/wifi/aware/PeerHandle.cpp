#include "./PeerHandle.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QJniObject forward
	PeerHandle::PeerHandle(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean PeerHandle::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PeerHandle::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::wifi::aware


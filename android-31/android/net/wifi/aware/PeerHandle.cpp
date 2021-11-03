#include "../../../../JObject.hpp"
#include "./PeerHandle.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QAndroidJniObject forward
	PeerHandle::PeerHandle(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean PeerHandle::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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


#include "../../../../JObject.hpp"
#include "./PeerHandle.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QJniObject forward
	PeerHandle::PeerHandle(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean PeerHandle::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PeerHandle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::wifi::aware


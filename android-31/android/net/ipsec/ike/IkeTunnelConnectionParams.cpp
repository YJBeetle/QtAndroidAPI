#include "./IkeSessionParams.hpp"
#include "./TunnelModeChildSessionParams.hpp"
#include "../../../../JObject.hpp"
#include "./IkeTunnelConnectionParams.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	IkeTunnelConnectionParams::IkeTunnelConnectionParams(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IkeTunnelConnectionParams::IkeTunnelConnectionParams(android::net::ipsec::ike::IkeSessionParams arg0, android::net::ipsec::ike::TunnelModeChildSessionParams arg1)
		: JObject(
			"android.net.ipsec.ike.IkeTunnelConnectionParams",
			"(Landroid/net/ipsec/ike/IkeSessionParams;Landroid/net/ipsec/ike/TunnelModeChildSessionParams;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jboolean IkeTunnelConnectionParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::ipsec::ike::IkeSessionParams IkeTunnelConnectionParams::getIkeSessionParams() const
	{
		return callObjectMethod(
			"getIkeSessionParams",
			"()Landroid/net/ipsec/ike/IkeSessionParams;"
		);
	}
	android::net::ipsec::ike::TunnelModeChildSessionParams IkeTunnelConnectionParams::getTunnelModeChildSessionParams() const
	{
		return callObjectMethod(
			"getTunnelModeChildSessionParams",
			"()Landroid/net/ipsec/ike/TunnelModeChildSessionParams;"
		);
	}
	jint IkeTunnelConnectionParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


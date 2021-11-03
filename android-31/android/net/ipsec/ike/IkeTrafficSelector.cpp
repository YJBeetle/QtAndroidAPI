#include "../../../../JObject.hpp"
#include "../../../../java/net/InetAddress.hpp"
#include "./IkeTrafficSelector.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	jint IkeTrafficSelector::endPort()
	{
		return getField<jint>(
			"endPort"
		);
	}
	java::net::InetAddress IkeTrafficSelector::endingAddress()
	{
		return getObjectField(
			"endingAddress",
			"Ljava/net/InetAddress;"
		);
	}
	jint IkeTrafficSelector::startPort()
	{
		return getField<jint>(
			"startPort"
		);
	}
	java::net::InetAddress IkeTrafficSelector::startingAddress()
	{
		return getObjectField(
			"startingAddress",
			"Ljava/net/InetAddress;"
		);
	}
	
	// QAndroidJniObject forward
	IkeTrafficSelector::IkeTrafficSelector(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IkeTrafficSelector::IkeTrafficSelector(jint arg0, jint arg1, java::net::InetAddress arg2, java::net::InetAddress arg3)
		: JObject(
			"android.net.ipsec.ike.IkeTrafficSelector",
			"(IILjava/net/InetAddress;Ljava/net/InetAddress;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	jboolean IkeTrafficSelector::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint IkeTrafficSelector::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/net/InetAddress.def.hpp"
#include "./IkeTrafficSelector.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	inline jint IkeTrafficSelector::endPort()
	{
		return getField<jint>(
			"endPort"
		);
	}
	inline java::net::InetAddress IkeTrafficSelector::endingAddress()
	{
		return getObjectField(
			"endingAddress",
			"Ljava/net/InetAddress;"
		);
	}
	inline jint IkeTrafficSelector::startPort()
	{
		return getField<jint>(
			"startPort"
		);
	}
	inline java::net::InetAddress IkeTrafficSelector::startingAddress()
	{
		return getObjectField(
			"startingAddress",
			"Ljava/net/InetAddress;"
		);
	}
	
	// Constructors
	inline IkeTrafficSelector::IkeTrafficSelector(jint arg0, jint arg1, java::net::InetAddress arg2, java::net::InetAddress arg3)
		: JObject(
			"android.net.ipsec.ike.IkeTrafficSelector",
			"(IILjava/net/InetAddress;Ljava/net/InetAddress;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline jboolean IkeTrafficSelector::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint IkeTrafficSelector::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif

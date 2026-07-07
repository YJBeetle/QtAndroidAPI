#pragma once

#include "./NetworkSpecifier.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./EthernetNetworkSpecifier.def.hpp"

namespace android::net
{
	// Fields
	inline JObject EthernetNetworkSpecifier::CREATOR()
	{
		return getStaticObjectField(
			"android.net.EthernetNetworkSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline EthernetNetworkSpecifier::EthernetNetworkSpecifier(JString arg0)
		: android::net::NetworkSpecifier(
			"android.net.EthernetNetworkSpecifier",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jboolean EthernetNetworkSpecifier::canBeSatisfiedBy(android::net::NetworkSpecifier arg0) const
	{
		return callMethod<jboolean>(
			"canBeSatisfiedBy",
			"(Landroid/net/NetworkSpecifier;)Z",
			arg0.object()
		);
	}
	inline jint EthernetNetworkSpecifier::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean EthernetNetworkSpecifier::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString EthernetNetworkSpecifier::getInterfaceName() const
	{
		return callObjectMethod(
			"getInterfaceName",
			"()Ljava/lang/String;"
		);
	}
	inline jint EthernetNetworkSpecifier::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString EthernetNetworkSpecifier::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void EthernetNetworkSpecifier::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers
#include "./NetworkSpecifier.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif

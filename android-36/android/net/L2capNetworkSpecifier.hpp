#pragma once

#include "./MacAddress.def.hpp"
#include "./NetworkSpecifier.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./L2capNetworkSpecifier.def.hpp"

namespace android::net
{
	// Fields
	inline JObject L2capNetworkSpecifier::CREATOR()
	{
		return getStaticObjectField(
			"android.net.L2capNetworkSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint L2capNetworkSpecifier::HEADER_COMPRESSION_6LOWPAN()
	{
		return getStaticField<jint>(
			"android.net.L2capNetworkSpecifier",
			"HEADER_COMPRESSION_6LOWPAN"
		);
	}
	inline jint L2capNetworkSpecifier::HEADER_COMPRESSION_ANY()
	{
		return getStaticField<jint>(
			"android.net.L2capNetworkSpecifier",
			"HEADER_COMPRESSION_ANY"
		);
	}
	inline jint L2capNetworkSpecifier::HEADER_COMPRESSION_NONE()
	{
		return getStaticField<jint>(
			"android.net.L2capNetworkSpecifier",
			"HEADER_COMPRESSION_NONE"
		);
	}
	inline jint L2capNetworkSpecifier::PSM_ANY()
	{
		return getStaticField<jint>(
			"android.net.L2capNetworkSpecifier",
			"PSM_ANY"
		);
	}
	inline jint L2capNetworkSpecifier::ROLE_ANY()
	{
		return getStaticField<jint>(
			"android.net.L2capNetworkSpecifier",
			"ROLE_ANY"
		);
	}
	inline jint L2capNetworkSpecifier::ROLE_CLIENT()
	{
		return getStaticField<jint>(
			"android.net.L2capNetworkSpecifier",
			"ROLE_CLIENT"
		);
	}
	inline jint L2capNetworkSpecifier::ROLE_SERVER()
	{
		return getStaticField<jint>(
			"android.net.L2capNetworkSpecifier",
			"ROLE_SERVER"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean L2capNetworkSpecifier::canBeSatisfiedBy(android::net::NetworkSpecifier arg0) const
	{
		return callMethod<jboolean>(
			"canBeSatisfiedBy",
			"(Landroid/net/NetworkSpecifier;)Z",
			arg0.object()
		);
	}
	inline jint L2capNetworkSpecifier::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean L2capNetworkSpecifier::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint L2capNetworkSpecifier::getHeaderCompression() const
	{
		return callMethod<jint>(
			"getHeaderCompression",
			"()I"
		);
	}
	inline jint L2capNetworkSpecifier::getPsm() const
	{
		return callMethod<jint>(
			"getPsm",
			"()I"
		);
	}
	inline android::net::MacAddress L2capNetworkSpecifier::getRemoteAddress() const
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	inline jint L2capNetworkSpecifier::getRole() const
	{
		return callMethod<jint>(
			"getRole",
			"()I"
		);
	}
	inline jint L2capNetworkSpecifier::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::net::NetworkSpecifier L2capNetworkSpecifier::redact() const
	{
		return callObjectMethod(
			"redact",
			"()Landroid/net/NetworkSpecifier;"
		);
	}
	inline JString L2capNetworkSpecifier::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void L2capNetworkSpecifier::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

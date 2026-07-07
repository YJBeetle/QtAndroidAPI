#pragma once

#include "./wifi/SoftApConfiguration.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./TetheringInterface.def.hpp"

namespace android::net
{
	// Fields
	inline JObject TetheringInterface::CREATOR()
	{
		return getStaticObjectField(
			"android.net.TetheringInterface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TetheringInterface::TetheringInterface(jint arg0, JString arg1)
		: JObject(
			"android.net.TetheringInterface",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	inline TetheringInterface::TetheringInterface(jint arg0, JString arg1, android::net::wifi::SoftApConfiguration arg2)
		: JObject(
			"android.net.TetheringInterface",
			"(ILjava/lang/String;Landroid/net/wifi/SoftApConfiguration;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline jint TetheringInterface::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TetheringInterface::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString TetheringInterface::getInterface() const
	{
		return callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::wifi::SoftApConfiguration TetheringInterface::getSoftApConfiguration() const
	{
		return callObjectMethod(
			"getSoftApConfiguration",
			"()Landroid/net/wifi/SoftApConfiguration;"
		);
	}
	inline jint TetheringInterface::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint TetheringInterface::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString TetheringInterface::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TetheringInterface::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif

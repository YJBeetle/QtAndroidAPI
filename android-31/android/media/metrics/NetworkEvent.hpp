#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./NetworkEvent.def.hpp"

namespace android::media::metrics
{
	// Fields
	inline JObject NetworkEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.NetworkEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint NetworkEvent::NETWORK_TYPE_2G()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_2G"
		);
	}
	inline jint NetworkEvent::NETWORK_TYPE_3G()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_3G"
		);
	}
	inline jint NetworkEvent::NETWORK_TYPE_4G()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_4G"
		);
	}
	inline jint NetworkEvent::NETWORK_TYPE_5G_NSA()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_5G_NSA"
		);
	}
	inline jint NetworkEvent::NETWORK_TYPE_5G_SA()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_5G_SA"
		);
	}
	inline jint NetworkEvent::NETWORK_TYPE_ETHERNET()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_ETHERNET"
		);
	}
	inline jint NetworkEvent::NETWORK_TYPE_OFFLINE()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_OFFLINE"
		);
	}
	inline jint NetworkEvent::NETWORK_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_OTHER"
		);
	}
	inline jint NetworkEvent::NETWORK_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_UNKNOWN"
		);
	}
	inline jint NetworkEvent::NETWORK_TYPE_WIFI()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_WIFI"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint NetworkEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean NetworkEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::os::Bundle NetworkEvent::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint NetworkEvent::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	inline jlong NetworkEvent::getTimeSinceCreatedMillis() const
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
	inline jint NetworkEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString NetworkEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NetworkEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::metrics

// Base class headers
#include "./Event.hpp"


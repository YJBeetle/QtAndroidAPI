#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./NetworkEvent.hpp"

namespace android::media::metrics
{
	// Fields
	JObject NetworkEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.NetworkEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint NetworkEvent::NETWORK_TYPE_2G()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_2G"
		);
	}
	jint NetworkEvent::NETWORK_TYPE_3G()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_3G"
		);
	}
	jint NetworkEvent::NETWORK_TYPE_4G()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_4G"
		);
	}
	jint NetworkEvent::NETWORK_TYPE_5G_NSA()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_5G_NSA"
		);
	}
	jint NetworkEvent::NETWORK_TYPE_5G_SA()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_5G_SA"
		);
	}
	jint NetworkEvent::NETWORK_TYPE_ETHERNET()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_ETHERNET"
		);
	}
	jint NetworkEvent::NETWORK_TYPE_OFFLINE()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_OFFLINE"
		);
	}
	jint NetworkEvent::NETWORK_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_OTHER"
		);
	}
	jint NetworkEvent::NETWORK_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_UNKNOWN"
		);
	}
	jint NetworkEvent::NETWORK_TYPE_WIFI()
	{
		return getStaticField<jint>(
			"android.media.metrics.NetworkEvent",
			"NETWORK_TYPE_WIFI"
		);
	}
	
	// Constructors
	
	// Methods
	jint NetworkEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::os::Bundle NetworkEvent::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	jint NetworkEvent::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jlong NetworkEvent::getTimeSinceCreatedMillis() const
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
	jint NetworkEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString NetworkEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NetworkEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::metrics


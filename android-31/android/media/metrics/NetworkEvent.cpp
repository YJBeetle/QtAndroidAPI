#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./NetworkEvent.hpp"

namespace android::media::metrics
{
	// Fields
	__JniBaseClass NetworkEvent::CREATOR()
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
	
	// QAndroidJniObject forward
	NetworkEvent::NetworkEvent(QAndroidJniObject obj) : android::media::metrics::Event(obj) {}
	
	// Constructors
	
	// Methods
	jint NetworkEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkEvent::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::os::Bundle NetworkEvent::getMetricsBundle()
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	jint NetworkEvent::getNetworkType()
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jlong NetworkEvent::getTimeSinceCreatedMillis()
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
	jint NetworkEvent::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring NetworkEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NetworkEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::metrics


#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./WifiDeviceFilter.hpp"

namespace android::companion
{
	// Fields
	JObject WifiDeviceFilter::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.WifiDeviceFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint WifiDeviceFilter::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiDeviceFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint WifiDeviceFilter::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void WifiDeviceFilter::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion


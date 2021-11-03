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
	
	// QJniObject forward
	WifiDeviceFilter::WifiDeviceFilter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint WifiDeviceFilter::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiDeviceFilter::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint WifiDeviceFilter::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void WifiDeviceFilter::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion


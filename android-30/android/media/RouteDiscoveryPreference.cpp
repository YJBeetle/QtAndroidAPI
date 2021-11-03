#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RouteDiscoveryPreference.hpp"

namespace android::media
{
	// Fields
	JObject RouteDiscoveryPreference::CREATOR()
	{
		return getStaticObjectField(
			"android.media.RouteDiscoveryPreference",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	RouteDiscoveryPreference::RouteDiscoveryPreference(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint RouteDiscoveryPreference::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RouteDiscoveryPreference::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject RouteDiscoveryPreference::getPreferredFeatures()
	{
		return callObjectMethod(
			"getPreferredFeatures",
			"()Ljava/util/List;"
		);
	}
	jint RouteDiscoveryPreference::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean RouteDiscoveryPreference::shouldPerformActiveScan()
	{
		return callMethod<jboolean>(
			"shouldPerformActiveScan",
			"()Z"
		);
	}
	JString RouteDiscoveryPreference::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RouteDiscoveryPreference::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media


#include "../os/Parcel.hpp"
#include "./RouteDiscoveryPreference.hpp"

namespace android::media
{
	// Fields
	__JniBaseClass RouteDiscoveryPreference::CREATOR()
	{
		return getStaticObjectField(
			"android.media.RouteDiscoveryPreference",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	RouteDiscoveryPreference::RouteDiscoveryPreference(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint RouteDiscoveryPreference::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RouteDiscoveryPreference::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass RouteDiscoveryPreference::getPreferredFeatures()
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
	jstring RouteDiscoveryPreference::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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


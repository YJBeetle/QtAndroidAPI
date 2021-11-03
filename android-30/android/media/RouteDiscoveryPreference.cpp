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
	
	// QJniObject forward
	RouteDiscoveryPreference::RouteDiscoveryPreference(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint RouteDiscoveryPreference::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RouteDiscoveryPreference::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject RouteDiscoveryPreference::getPreferredFeatures() const
	{
		return callObjectMethod(
			"getPreferredFeatures",
			"()Ljava/util/List;"
		);
	}
	jint RouteDiscoveryPreference::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean RouteDiscoveryPreference::shouldPerformActiveScan() const
	{
		return callMethod<jboolean>(
			"shouldPerformActiveScan",
			"()Z"
		);
	}
	JString RouteDiscoveryPreference::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RouteDiscoveryPreference::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media


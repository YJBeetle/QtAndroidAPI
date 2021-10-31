#include "../../../os/Parcel.hpp"
#include "./AwareResources.hpp"

namespace android::net::wifi::aware
{
	// Fields
	__JniBaseClass AwareResources::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.AwareResources",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AwareResources::AwareResources(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AwareResources::AwareResources(jint arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.net.wifi.aware.AwareResources",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint AwareResources::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint AwareResources::getAvailableDataPathsCount()
	{
		return callMethod<jint>(
			"getAvailableDataPathsCount",
			"()I"
		);
	}
	jint AwareResources::getAvailablePublishSessionsCount()
	{
		return callMethod<jint>(
			"getAvailablePublishSessionsCount",
			"()I"
		);
	}
	jint AwareResources::getAvailableSubscribeSessionsCount()
	{
		return callMethod<jint>(
			"getAvailableSubscribeSessionsCount",
			"()I"
		);
	}
	void AwareResources::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware


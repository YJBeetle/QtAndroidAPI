#include "../../os/Parcel.hpp"
#include "./NetworkEvent.hpp"

namespace android::app::admin
{
	// Fields
	JObject NetworkEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.NetworkEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	NetworkEvent::NetworkEvent(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint NetworkEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong NetworkEvent::getId()
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	jstring NetworkEvent::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong NetworkEvent::getTimestamp()
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
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
} // namespace android::app::admin


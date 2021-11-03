#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
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
	jint NetworkEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong NetworkEvent::getId() const
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	JString NetworkEvent::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jlong NetworkEvent::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
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
} // namespace android::app::admin


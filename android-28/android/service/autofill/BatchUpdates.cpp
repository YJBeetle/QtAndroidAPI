#include "../../os/Parcel.hpp"
#include "./BatchUpdates_Builder.hpp"
#include "../../../JString.hpp"
#include "./BatchUpdates.hpp"

namespace android::service::autofill
{
	// Fields
	JObject BatchUpdates::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.BatchUpdates",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	BatchUpdates::BatchUpdates(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint BatchUpdates::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString BatchUpdates::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void BatchUpdates::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill


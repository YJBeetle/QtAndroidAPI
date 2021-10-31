#include "../../os/Parcel.hpp"
#include "./FillResponse.hpp"

namespace android::service::autofill
{
	// Fields
	__JniBaseClass FillResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.FillResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint FillResponse::FLAG_DISABLE_ACTIVITY_ONLY()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillResponse",
			"FLAG_DISABLE_ACTIVITY_ONLY"
		);
	}
	jint FillResponse::FLAG_TRACK_CONTEXT_COMMITED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillResponse",
			"FLAG_TRACK_CONTEXT_COMMITED"
		);
	}
	
	// QJniObject forward
	FillResponse::FillResponse(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint FillResponse::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring FillResponse::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void FillResponse::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill


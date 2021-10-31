#include "../../os/Parcel.hpp"
#include "./FillResponse_Builder.hpp"
#include "./FillResponse.hpp"

namespace android::service::autofill
{
	// Fields
	QAndroidJniObject FillResponse::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.FillResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint FillResponse::FLAG_DISABLE_ACTIVITY_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillResponse",
			"FLAG_DISABLE_ACTIVITY_ONLY"
		);
	}
	jint FillResponse::FLAG_TRACK_CONTEXT_COMMITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillResponse",
			"FLAG_TRACK_CONTEXT_COMMITED"
		);
	}
	
	// QAndroidJniObject forward
	FillResponse::FillResponse(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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


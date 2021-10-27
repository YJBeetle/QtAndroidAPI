#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./SaveRequest.hpp"

namespace android::service::autofill
{
	// Fields
	QAndroidJniObject SaveRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.SaveRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	SaveRequest::SaveRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint SaveRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject SaveRequest::getClientState()
	{
		return __thiz.callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject SaveRequest::getDatasetIds()
	{
		return __thiz.callObjectMethod(
			"getDatasetIds",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SaveRequest::getFillContexts()
	{
		return __thiz.callObjectMethod(
			"getFillContexts",
			"()Ljava/util/List;"
		);
	}
	void SaveRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill


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
	
	// QAndroidJniObject forward
	SaveRequest::SaveRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SaveRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject SaveRequest::getClientState()
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject SaveRequest::getDatasetIds()
	{
		return callObjectMethod(
			"getDatasetIds",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SaveRequest::getFillContexts()
	{
		return callObjectMethod(
			"getFillContexts",
			"()Ljava/util/List;"
		);
	}
	void SaveRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill


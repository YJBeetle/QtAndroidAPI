#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./FillEventHistory.hpp"

namespace android::service::autofill
{
	// Fields
	QAndroidJniObject FillEventHistory::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.FillEventHistory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	FillEventHistory::FillEventHistory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint FillEventHistory::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject FillEventHistory::getClientState()
	{
		return __thiz.callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject FillEventHistory::getEvents()
	{
		return __thiz.callObjectMethod(
			"getEvents",
			"()Ljava/util/List;"
		);
	}
	jstring FillEventHistory::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void FillEventHistory::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill


#include "../../app/assist/AssistStructure.hpp"
#include "../../os/Parcel.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "./FillContext.hpp"

namespace android::service::autofill
{
	// Fields
	QAndroidJniObject FillContext::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.FillContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	FillContext::FillContext(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint FillContext::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject FillContext::getFocusedId()
	{
		return __thiz.callObjectMethod(
			"getFocusedId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	jint FillContext::getRequestId()
	{
		return __thiz.callMethod<jint>(
			"getRequestId",
			"()I"
		);
	}
	QAndroidJniObject FillContext::getStructure()
	{
		return __thiz.callObjectMethod(
			"getStructure",
			"()Landroid/app/assist/AssistStructure;"
		);
	}
	jstring FillContext::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void FillContext::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill


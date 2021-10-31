#include "../../app/assist/AssistStructure.hpp"
#include "../../os/Parcel.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "./FillContext.hpp"

namespace android::service::autofill
{
	// Fields
	__JniBaseClass FillContext::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.FillContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	FillContext::FillContext(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint FillContext::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::view::autofill::AutofillId FillContext::getFocusedId()
	{
		return callObjectMethod(
			"getFocusedId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	jint FillContext::getRequestId()
	{
		return callMethod<jint>(
			"getRequestId",
			"()I"
		);
	}
	android::app::assist::AssistStructure FillContext::getStructure()
	{
		return callObjectMethod(
			"getStructure",
			"()Landroid/app/assist/AssistStructure;"
		);
	}
	jstring FillContext::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void FillContext::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill


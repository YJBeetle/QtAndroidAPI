#include "../../app/assist/AssistStructure.hpp"
#include "../../os/Parcel.hpp"
#include "./FillContext.hpp"

namespace android::service::autofill
{
	// Fields
	JObject FillContext::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.FillContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	FillContext::FillContext(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint FillContext::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
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


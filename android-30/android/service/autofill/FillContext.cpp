#include "../../app/assist/AssistStructure.hpp"
#include "../../os/Parcel.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../../JString.hpp"
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
	jint FillContext::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::view::autofill::AutofillId FillContext::getFocusedId() const
	{
		return callObjectMethod(
			"getFocusedId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	jint FillContext::getRequestId() const
	{
		return callMethod<jint>(
			"getRequestId",
			"()I"
		);
	}
	android::app::assist::AssistStructure FillContext::getStructure() const
	{
		return callObjectMethod(
			"getStructure",
			"()Landroid/app/assist/AssistStructure;"
		);
	}
	JString FillContext::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void FillContext::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill


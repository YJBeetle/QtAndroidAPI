#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../view/inputmethod/InlineSuggestionsRequest.hpp"
#include "../../../JString.hpp"
#include "./FillRequest.hpp"

namespace android::service::autofill
{
	// Fields
	JObject FillRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.FillRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint FillRequest::FLAG_COMPATIBILITY_MODE_REQUEST()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillRequest",
			"FLAG_COMPATIBILITY_MODE_REQUEST"
		);
	}
	jint FillRequest::FLAG_MANUAL_REQUEST()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillRequest",
			"FLAG_MANUAL_REQUEST"
		);
	}
	
	// QAndroidJniObject forward
	FillRequest::FillRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint FillRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::Bundle FillRequest::getClientState()
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	JObject FillRequest::getFillContexts()
	{
		return callObjectMethod(
			"getFillContexts",
			"()Ljava/util/List;"
		);
	}
	jint FillRequest::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jint FillRequest::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest FillRequest::getInlineSuggestionsRequest()
	{
		return callObjectMethod(
			"getInlineSuggestionsRequest",
			"()Landroid/view/inputmethod/InlineSuggestionsRequest;"
		);
	}
	JString FillRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void FillRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill


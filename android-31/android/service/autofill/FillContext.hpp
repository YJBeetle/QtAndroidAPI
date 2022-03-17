#pragma once

#include "../../app/assist/AssistStructure.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../view/autofill/AutofillId.def.hpp"
#include "../../../JString.hpp"
#include "./FillContext.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject FillContext::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.FillContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint FillContext::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::view::autofill::AutofillId FillContext::getFocusedId() const
	{
		return callObjectMethod(
			"getFocusedId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	inline jint FillContext::getRequestId() const
	{
		return callMethod<jint>(
			"getRequestId",
			"()I"
		);
	}
	inline android::app::assist::AssistStructure FillContext::getStructure() const
	{
		return callObjectMethod(
			"getStructure",
			"()Landroid/app/assist/AssistStructure;"
		);
	}
	inline JString FillContext::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void FillContext::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif

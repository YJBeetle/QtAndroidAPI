#pragma once

#include "../../icu/text/DateFormat.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../view/autofill/AutofillId.def.hpp"
#include "../../../JString.hpp"
#include "./DateTransformation.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject DateTransformation::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.DateTransformation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline DateTransformation::DateTransformation(android::view::autofill::AutofillId arg0, android::icu::text::DateFormat arg1)
		: JObject(
			"android.service.autofill.DateTransformation",
			"(Landroid/view/autofill/AutofillId;Landroid/icu/text/DateFormat;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint DateTransformation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString DateTransformation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DateTransformation::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../view/autofill/AutofillId.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/regex/Pattern.def.hpp"
#include "./RegexValidator.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject RegexValidator::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.RegexValidator",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline RegexValidator::RegexValidator(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1)
		: JObject(
			"android.service.autofill.RegexValidator",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint RegexValidator::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString RegexValidator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RegexValidator::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

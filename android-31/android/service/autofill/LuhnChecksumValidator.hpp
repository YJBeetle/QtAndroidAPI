#pragma once

#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./LuhnChecksumValidator.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject LuhnChecksumValidator::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.LuhnChecksumValidator",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline LuhnChecksumValidator::LuhnChecksumValidator(JArray arg0)
		: JObject(
			"android.service.autofill.LuhnChecksumValidator",
			"([Landroid/view/autofill/AutofillId;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	inline jint LuhnChecksumValidator::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString LuhnChecksumValidator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void LuhnChecksumValidator::writeToParcel(android::os::Parcel arg0, jint arg1) const
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


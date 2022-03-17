#pragma once

#include "../../icu/text/DateFormat.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./DateValueSanitizer.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject DateValueSanitizer::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.DateValueSanitizer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline DateValueSanitizer::DateValueSanitizer(android::icu::text::DateFormat arg0)
		: JObject(
			"android.service.autofill.DateValueSanitizer",
			"(Landroid/icu/text/DateFormat;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint DateValueSanitizer::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString DateValueSanitizer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DateValueSanitizer::writeToParcel(android::os::Parcel arg0, jint arg1) const
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


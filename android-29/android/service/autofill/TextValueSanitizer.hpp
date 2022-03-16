#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/regex/Pattern.def.hpp"
#include "./TextValueSanitizer.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject TextValueSanitizer::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.TextValueSanitizer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TextValueSanitizer::TextValueSanitizer(java::util::regex::Pattern arg0, JString arg1)
		: JObject(
			"android.service.autofill.TextValueSanitizer",
			"(Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint TextValueSanitizer::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString TextValueSanitizer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TextValueSanitizer::writeToParcel(android::os::Parcel arg0, jint arg1) const
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


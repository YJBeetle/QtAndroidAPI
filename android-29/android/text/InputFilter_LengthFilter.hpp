#pragma once

#include "../../JString.hpp"
#include "./InputFilter_LengthFilter.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline InputFilter_LengthFilter::InputFilter_LengthFilter(jint arg0)
		: JObject(
			"android.text.InputFilter$LengthFilter",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline JString InputFilter_LengthFilter::filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5) const
	{
		return callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		);
	}
	inline jint InputFilter_LengthFilter::getMax() const
	{
		return callMethod<jint>(
			"getMax",
			"()I"
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif

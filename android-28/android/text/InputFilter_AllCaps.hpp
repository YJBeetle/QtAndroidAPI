#pragma once

#include "../../JString.hpp"
#include "../../java/util/Locale.def.hpp"
#include "./InputFilter_AllCaps.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline InputFilter_AllCaps::InputFilter_AllCaps()
		: JObject(
			"android.text.InputFilter$AllCaps",
			"()V"
		) {}
	inline InputFilter_AllCaps::InputFilter_AllCaps(java::util::Locale arg0)
		: JObject(
			"android.text.InputFilter$AllCaps",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JString InputFilter_AllCaps::filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5) const
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
} // namespace android::text

// Base class headers


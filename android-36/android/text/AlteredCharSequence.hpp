#pragma once

#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./AlteredCharSequence.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::text::AlteredCharSequence AlteredCharSequence::make(JString arg0, JCharArray arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.text.AlteredCharSequence",
			"make",
			"(Ljava/lang/CharSequence;[CII)Landroid/text/AlteredCharSequence;",
			arg0.object<jstring>(),
			arg1.object<jcharArray>(),
			arg2,
			arg3
		);
	}
	inline jchar AlteredCharSequence::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	inline void AlteredCharSequence::getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const
	{
		callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2.object<jcharArray>(),
			arg3
		);
	}
	inline jint AlteredCharSequence::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline JString AlteredCharSequence::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JString AlteredCharSequence::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif

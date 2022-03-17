#pragma once

#include "../../JString.hpp"
#include "./MultiAutoCompleteTextView_CommaTokenizer.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline MultiAutoCompleteTextView_CommaTokenizer::MultiAutoCompleteTextView_CommaTokenizer()
		: JObject(
			"android.widget.MultiAutoCompleteTextView$CommaTokenizer",
			"()V"
		) {}
	
	// Methods
	inline jint MultiAutoCompleteTextView_CommaTokenizer::findTokenEnd(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint MultiAutoCompleteTextView_CommaTokenizer::findTokenStart(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString MultiAutoCompleteTextView_CommaTokenizer::terminateToken(JString arg0) const
	{
		return callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif

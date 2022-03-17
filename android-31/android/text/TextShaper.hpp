#pragma once

#include "./TextPaint.def.hpp"
#include "../../JString.hpp"
#include "./TextShaper.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void TextShaper::shapeText(JString arg0, jint arg1, jint arg2, JObject arg3, android::text::TextPaint arg4, JObject arg5)
	{
		callStaticMethod<void>(
			"android.text.TextShaper",
			"shapeText",
			"(Ljava/lang/CharSequence;IILandroid/text/TextDirectionHeuristic;Landroid/text/TextPaint;Landroid/text/TextShaper$GlyphsConsumer;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif

#pragma once

#include "../../JIntArray.hpp"
#include "../graphics/Paint.def.hpp"
#include "./Highlights.def.hpp"
#include "./Highlights_Builder.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline Highlights_Builder::Highlights_Builder()
		: JObject(
			"android.text.Highlights$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::text::Highlights_Builder Highlights_Builder::addRange(android::graphics::Paint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"addRange",
			"(Landroid/graphics/Paint;II)Landroid/text/Highlights$Builder;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::text::Highlights_Builder Highlights_Builder::addRanges(android::graphics::Paint arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"addRanges",
			"(Landroid/graphics/Paint;[I)Landroid/text/Highlights$Builder;",
			arg0.object(),
			arg1.object<jintArray>()
		);
	}
	inline android::text::Highlights Highlights_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/Highlights;"
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif

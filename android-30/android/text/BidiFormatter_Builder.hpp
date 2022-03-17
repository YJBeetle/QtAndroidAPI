#pragma once

#include "./BidiFormatter.def.hpp"
#include "../../java/util/Locale.def.hpp"
#include "./BidiFormatter_Builder.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline BidiFormatter_Builder::BidiFormatter_Builder()
		: JObject(
			"android.text.BidiFormatter$Builder",
			"()V"
		) {}
	inline BidiFormatter_Builder::BidiFormatter_Builder(jboolean arg0)
		: JObject(
			"android.text.BidiFormatter$Builder",
			"(Z)V",
			arg0
		) {}
	inline BidiFormatter_Builder::BidiFormatter_Builder(java::util::Locale arg0)
		: JObject(
			"android.text.BidiFormatter$Builder",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::text::BidiFormatter BidiFormatter_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/BidiFormatter;"
		);
	}
	inline android::text::BidiFormatter_Builder BidiFormatter_Builder::setTextDirectionHeuristic(JObject arg0) const
	{
		return callObjectMethod(
			"setTextDirectionHeuristic",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/BidiFormatter$Builder;",
			arg0.object()
		);
	}
	inline android::text::BidiFormatter_Builder BidiFormatter_Builder::stereoReset(jboolean arg0) const
	{
		return callObjectMethod(
			"stereoReset",
			"(Z)Landroid/text/BidiFormatter$Builder;",
			arg0
		);
	}
} // namespace android::text

// Base class headers


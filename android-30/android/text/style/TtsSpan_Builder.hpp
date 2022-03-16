#pragma once

#include "./TtsSpan.def.hpp"
#include "../../../JString.hpp"
#include "./TtsSpan_Builder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_Builder::TtsSpan_Builder(JString arg0)
		: JObject(
			"android.text.style.TtsSpan$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::text::style::TtsSpan TtsSpan_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/style/TtsSpan;"
		);
	}
	inline android::text::style::TtsSpan_Builder TtsSpan_Builder::setIntArgument(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"setIntArgument",
			"(Ljava/lang/String;I)Landroid/text/style/TtsSpan$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::text::style::TtsSpan_Builder TtsSpan_Builder::setLongArgument(JString arg0, jlong arg1) const
	{
		return callObjectMethod(
			"setLongArgument",
			"(Ljava/lang/String;J)Landroid/text/style/TtsSpan$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::text::style::TtsSpan_Builder TtsSpan_Builder::setStringArgument(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"setStringArgument",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/text/style/TtsSpan$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::text::style

// Base class headers


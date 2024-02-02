#pragma once

#include "../../../JObject.hpp"
#include "./LineBreakConfig.def.hpp"

namespace android::graphics::text
{
	// Fields
	inline jint LineBreakConfig::LINE_BREAK_STYLE_LOOSE()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_STYLE_LOOSE"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_STYLE_NONE()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_STYLE_NONE"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_STYLE_NORMAL()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_STYLE_NORMAL"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_STYLE_STRICT()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_STYLE_STRICT"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_WORD_STYLE_NONE()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_WORD_STYLE_NONE"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_WORD_STYLE_PHRASE()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_WORD_STYLE_PHRASE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean LineBreakConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint LineBreakConfig::getLineBreakStyle() const
	{
		return callMethod<jint>(
			"getLineBreakStyle",
			"()I"
		);
	}
	inline jint LineBreakConfig::getLineBreakWordStyle() const
	{
		return callMethod<jint>(
			"getLineBreakWordStyle",
			"()I"
		);
	}
	inline jint LineBreakConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::text;
#endif

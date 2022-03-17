#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./FontStyle.def.hpp"

namespace android::graphics::fonts
{
	// Fields
	inline jint FontStyle::FONT_SLANT_ITALIC()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_SLANT_ITALIC"
		);
	}
	inline jint FontStyle::FONT_SLANT_UPRIGHT()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_SLANT_UPRIGHT"
		);
	}
	inline jint FontStyle::FONT_WEIGHT_BLACK()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_BLACK"
		);
	}
	inline jint FontStyle::FONT_WEIGHT_BOLD()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_BOLD"
		);
	}
	inline jint FontStyle::FONT_WEIGHT_EXTRA_BOLD()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_EXTRA_BOLD"
		);
	}
	inline jint FontStyle::FONT_WEIGHT_EXTRA_LIGHT()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_EXTRA_LIGHT"
		);
	}
	inline jint FontStyle::FONT_WEIGHT_LIGHT()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_LIGHT"
		);
	}
	inline jint FontStyle::FONT_WEIGHT_MAX()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MAX"
		);
	}
	inline jint FontStyle::FONT_WEIGHT_MEDIUM()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MEDIUM"
		);
	}
	inline jint FontStyle::FONT_WEIGHT_MIN()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MIN"
		);
	}
	inline jint FontStyle::FONT_WEIGHT_NORMAL()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_NORMAL"
		);
	}
	inline jint FontStyle::FONT_WEIGHT_SEMI_BOLD()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_SEMI_BOLD"
		);
	}
	inline jint FontStyle::FONT_WEIGHT_THIN()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_THIN"
		);
	}
	
	// Constructors
	inline FontStyle::FontStyle()
		: JObject(
			"android.graphics.fonts.FontStyle",
			"()V"
		) {}
	inline FontStyle::FontStyle(jint arg0, jint arg1)
		: JObject(
			"android.graphics.fonts.FontStyle",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean FontStyle::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint FontStyle::getSlant() const
	{
		return callMethod<jint>(
			"getSlant",
			"()I"
		);
	}
	inline jint FontStyle::getWeight() const
	{
		return callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	inline jint FontStyle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString FontStyle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics::fonts

// Base class headers


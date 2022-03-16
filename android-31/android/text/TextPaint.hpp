#pragma once

#include "../../JIntArray.hpp"
#include "../graphics/Paint.def.hpp"
#include "./TextPaint.def.hpp"

namespace android::text
{
	// Fields
	inline jint TextPaint::baselineShift()
	{
		return getField<jint>(
			"baselineShift"
		);
	}
	inline jint TextPaint::bgColor()
	{
		return getField<jint>(
			"bgColor"
		);
	}
	inline jfloat TextPaint::density()
	{
		return getField<jfloat>(
			"density"
		);
	}
	inline JIntArray TextPaint::drawableState()
	{
		return getObjectField(
			"drawableState",
			"[I"
		);
	}
	inline jint TextPaint::linkColor()
	{
		return getField<jint>(
			"linkColor"
		);
	}
	inline jint TextPaint::underlineColor()
	{
		return getField<jint>(
			"underlineColor"
		);
	}
	inline jfloat TextPaint::underlineThickness()
	{
		return getField<jfloat>(
			"underlineThickness"
		);
	}
	
	// Constructors
	inline TextPaint::TextPaint()
		: android::graphics::Paint(
			"android.text.TextPaint",
			"()V"
		) {}
	inline TextPaint::TextPaint(android::graphics::Paint arg0)
		: android::graphics::Paint(
			"android.text.TextPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		) {}
	inline TextPaint::TextPaint(jint arg0)
		: android::graphics::Paint(
			"android.text.TextPaint",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jfloat TextPaint::getUnderlineThickness() const
	{
		return callMethod<jfloat>(
			"getUnderlineThickness",
			"()F"
		);
	}
	inline void TextPaint::set(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text

// Base class headers
#include "../graphics/Paint.hpp"


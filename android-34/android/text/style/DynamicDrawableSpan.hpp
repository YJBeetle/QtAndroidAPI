#pragma once

#include "../../graphics/Canvas.def.hpp"
#include "../../graphics/Paint.def.hpp"
#include "../../graphics/Paint_FontMetricsInt.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./DynamicDrawableSpan.def.hpp"

namespace android::text::style
{
	// Fields
	inline jint DynamicDrawableSpan::ALIGN_BASELINE()
	{
		return getStaticField<jint>(
			"android.text.style.DynamicDrawableSpan",
			"ALIGN_BASELINE"
		);
	}
	inline jint DynamicDrawableSpan::ALIGN_BOTTOM()
	{
		return getStaticField<jint>(
			"android.text.style.DynamicDrawableSpan",
			"ALIGN_BOTTOM"
		);
	}
	inline jint DynamicDrawableSpan::ALIGN_CENTER()
	{
		return getStaticField<jint>(
			"android.text.style.DynamicDrawableSpan",
			"ALIGN_CENTER"
		);
	}
	
	// Constructors
	inline DynamicDrawableSpan::DynamicDrawableSpan()
		: android::text::style::ReplacementSpan(
			"android.text.style.DynamicDrawableSpan",
			"()V"
		) {}
	
	// Methods
	inline void DynamicDrawableSpan::draw(android::graphics::Canvas arg0, JString arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, android::graphics::Paint arg8) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Ljava/lang/CharSequence;IIFIIILandroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object()
		);
	}
	inline android::graphics::drawable::Drawable DynamicDrawableSpan::getDrawable() const
	{
		return callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint DynamicDrawableSpan::getSize(android::graphics::Paint arg0, JString arg1, jint arg2, jint arg3, android::graphics::Paint_FontMetricsInt arg4) const
	{
		return callMethod<jint>(
			"getSize",
			"(Landroid/graphics/Paint;Ljava/lang/CharSequence;IILandroid/graphics/Paint$FontMetricsInt;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline jint DynamicDrawableSpan::getVerticalAlignment() const
	{
		return callMethod<jint>(
			"getVerticalAlignment",
			"()I"
		);
	}
	inline JString DynamicDrawableSpan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text::style

// Base class headers
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"
#include "./ReplacementSpan.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif

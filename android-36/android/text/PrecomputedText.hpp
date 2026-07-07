#pragma once

#include "../../JObjectArray.hpp"
#include "../graphics/Paint_FontMetricsInt.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "./PrecomputedText_Params.def.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrecomputedText.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::text::PrecomputedText PrecomputedText::create(JString arg0, android::text::PrecomputedText_Params arg1)
	{
		return callStaticObjectMethod(
			"android.text.PrecomputedText",
			"create",
			"(Ljava/lang/CharSequence;Landroid/text/PrecomputedText$Params;)Landroid/text/PrecomputedText;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jchar PrecomputedText::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	inline void PrecomputedText::getBounds(jint arg0, jint arg1, android::graphics::Rect arg2) const
	{
		callMethod<void>(
			"getBounds",
			"(IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void PrecomputedText::getFontMetricsInt(jint arg0, jint arg1, android::graphics::Paint_FontMetricsInt arg2) const
	{
		callMethod<void>(
			"getFontMetricsInt",
			"(IILandroid/graphics/Paint$FontMetricsInt;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jint PrecomputedText::getParagraphCount() const
	{
		return callMethod<jint>(
			"getParagraphCount",
			"()I"
		);
	}
	inline jint PrecomputedText::getParagraphEnd(jint arg0) const
	{
		return callMethod<jint>(
			"getParagraphEnd",
			"(I)I",
			arg0
		);
	}
	inline jint PrecomputedText::getParagraphStart(jint arg0) const
	{
		return callMethod<jint>(
			"getParagraphStart",
			"(I)I",
			arg0
		);
	}
	inline android::text::PrecomputedText_Params PrecomputedText::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	inline jint PrecomputedText::getSpanEnd(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint PrecomputedText::getSpanFlags(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint PrecomputedText::getSpanStart(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline JObjectArray PrecomputedText::getSpans(jint arg0, jint arg1, JClass arg2) const
	{
		return callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	inline jfloat PrecomputedText::getWidth(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getWidth",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jint PrecomputedText::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline jint PrecomputedText::nextSpanTransition(jint arg0, jint arg1, JClass arg2) const
	{
		return callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	inline void PrecomputedText::removeSpan(JObject arg0) const
	{
		callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void PrecomputedText::setSpan(JObject arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setSpan",
			"(Ljava/lang/Object;III)V",
			arg0.object<jobject>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline JString PrecomputedText::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JString PrecomputedText::toString() const
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

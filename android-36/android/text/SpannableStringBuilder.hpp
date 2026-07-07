#pragma once

#include "../../JCharArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../graphics/Paint.def.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SpannableStringBuilder.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline SpannableStringBuilder::SpannableStringBuilder()
		: JObject(
			"android.text.SpannableStringBuilder",
			"()V"
		) {}
	inline SpannableStringBuilder::SpannableStringBuilder(JString arg0)
		: JObject(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	inline SpannableStringBuilder::SpannableStringBuilder(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::text::SpannableStringBuilder SpannableStringBuilder::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.SpannableStringBuilder",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::SpannableStringBuilder SpannableStringBuilder::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Landroid/text/SpannableStringBuilder;",
			arg0
		);
	}
	inline android::text::SpannableStringBuilder SpannableStringBuilder::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::text::SpannableStringBuilder SpannableStringBuilder::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline android::text::SpannableStringBuilder SpannableStringBuilder::append(JString arg0, JObject arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;I)Landroid/text/SpannableStringBuilder;",
			arg0.object<jstring>(),
			arg1.object<jobject>(),
			arg2
		);
	}
	inline jchar SpannableStringBuilder::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	inline void SpannableStringBuilder::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void SpannableStringBuilder::clearSpans() const
	{
		callMethod<void>(
			"clearSpans",
			"()V"
		);
	}
	inline android::text::SpannableStringBuilder SpannableStringBuilder::delete_(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"delete",
			"(II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1
		);
	}
	inline jboolean SpannableStringBuilder::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void SpannableStringBuilder::getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const
	{
		callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2.object<jcharArray>(),
			arg3
		);
	}
	inline JArray SpannableStringBuilder::getFilters() const
	{
		return callObjectMethod(
			"getFilters",
			"()[Landroid/text/InputFilter;"
		);
	}
	inline jint SpannableStringBuilder::getSpanEnd(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint SpannableStringBuilder::getSpanFlags(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint SpannableStringBuilder::getSpanStart(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline JObjectArray SpannableStringBuilder::getSpans(jint arg0, jint arg1, JClass arg2) const
	{
		return callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	inline jint SpannableStringBuilder::getTextRunCursor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint arg5) const
	{
		return callMethod<jint>(
			"getTextRunCursor",
			"(IIIIILandroid/graphics/Paint;)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline jint SpannableStringBuilder::getTextWatcherDepth() const
	{
		return callMethod<jint>(
			"getTextWatcherDepth",
			"()I"
		);
	}
	inline jint SpannableStringBuilder::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::text::SpannableStringBuilder SpannableStringBuilder::insert(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline android::text::SpannableStringBuilder SpannableStringBuilder::insert(jint arg0, JString arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	inline jint SpannableStringBuilder::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline jint SpannableStringBuilder::nextSpanTransition(jint arg0, jint arg1, JClass arg2) const
	{
		return callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	inline void SpannableStringBuilder::removeSpan(JObject arg0) const
	{
		callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline android::text::SpannableStringBuilder SpannableStringBuilder::replace(jint arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	inline android::text::SpannableStringBuilder SpannableStringBuilder::replace(jint arg0, jint arg1, JString arg2, jint arg3, jint arg4) const
	{
		return callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3,
			arg4
		);
	}
	inline void SpannableStringBuilder::setFilters(JArray arg0) const
	{
		callMethod<void>(
			"setFilters",
			"([Landroid/text/InputFilter;)V",
			arg0.object<jarray>()
		);
	}
	inline void SpannableStringBuilder::setSpan(JObject arg0, jint arg1, jint arg2, jint arg3) const
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
	inline JString SpannableStringBuilder::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JString SpannableStringBuilder::toString() const
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

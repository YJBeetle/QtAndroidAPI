#pragma once

#include "../../JCharArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SpannableString.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline SpannableString::SpannableString(JString arg0)
		: JObject(
			"android.text.SpannableString",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::text::SpannableString SpannableString::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.SpannableString",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableString;",
			arg0.object<jstring>()
		);
	}
	inline jchar SpannableString::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	inline jboolean SpannableString::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void SpannableString::getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const
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
	inline jint SpannableString::getSpanEnd(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint SpannableString::getSpanFlags(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint SpannableString::getSpanStart(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline JObjectArray SpannableString::getSpans(jint arg0, jint arg1, JClass arg2) const
	{
		return callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	inline jint SpannableString::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint SpannableString::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline jint SpannableString::nextSpanTransition(jint arg0, jint arg1, JClass arg2) const
	{
		return callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	inline void SpannableString::removeSpan(JObject arg0) const
	{
		callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void SpannableString::setSpan(JObject arg0, jint arg1, jint arg2, jint arg3) const
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
	inline JString SpannableString::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JString SpannableString::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

// Base class headers


#pragma once

#include "../../JCharArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SpannedString.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline SpannedString::SpannedString(JString arg0)
		: JObject(
			"android.text.SpannedString",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::text::SpannedString SpannedString::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.SpannedString",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannedString;",
			arg0.object<jstring>()
		);
	}
	inline jchar SpannedString::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	inline jboolean SpannedString::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void SpannedString::getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const
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
	inline jint SpannedString::getSpanEnd(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint SpannedString::getSpanFlags(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint SpannedString::getSpanStart(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline JObjectArray SpannedString::getSpans(jint arg0, jint arg1, JClass arg2) const
	{
		return callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	inline jint SpannedString::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint SpannedString::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline jint SpannedString::nextSpanTransition(jint arg0, jint arg1, JClass arg2) const
	{
		return callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	inline JString SpannedString::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JString SpannedString::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

// Base class headers


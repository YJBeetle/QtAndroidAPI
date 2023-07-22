#pragma once

#include "./UnicodeSet.def.hpp"
#include "./UnicodeSet_SpanCondition.def.hpp"
#include "./UnicodeSetSpanner_CountMethod.def.hpp"
#include "./UnicodeSetSpanner_TrimOption.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UnicodeSetSpanner.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline UnicodeSetSpanner::UnicodeSetSpanner(android::icu::text::UnicodeSet arg0)
		: JObject(
			"android.icu.text.UnicodeSetSpanner",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint UnicodeSetSpanner::countIn(JString arg0) const
	{
		return callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	inline jint UnicodeSetSpanner::countIn(JString arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1) const
	{
		return callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint UnicodeSetSpanner::countIn(JString arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1, android::icu::text::UnicodeSet_SpanCondition arg2) const
	{
		return callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JString UnicodeSetSpanner::deleteFrom(JString arg0) const
	{
		return callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString UnicodeSetSpanner::deleteFrom(JString arg0, android::icu::text::UnicodeSet_SpanCondition arg1) const
	{
		return callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean UnicodeSetSpanner::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::icu::text::UnicodeSet UnicodeSetSpanner::getUnicodeSet() const
	{
		return callObjectMethod(
			"getUnicodeSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	inline jint UnicodeSetSpanner::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString UnicodeSetSpanner::replaceFrom(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString UnicodeSetSpanner::replaceFrom(JString arg0, JString arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2) const
	{
		return callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline JString UnicodeSetSpanner::replaceFrom(JString arg0, JString arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2, android::icu::text::UnicodeSet_SpanCondition arg3) const
	{
		return callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JString UnicodeSetSpanner::trim(JString arg0) const
	{
		return callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	inline JString UnicodeSetSpanner::trim(JString arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1) const
	{
		return callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString UnicodeSetSpanner::trim(JString arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1, android::icu::text::UnicodeSet_SpanCondition arg2) const
	{
		return callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif

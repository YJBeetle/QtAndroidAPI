#include "./UnicodeSet.hpp"
#include "./UnicodeSet_SpanCondition.hpp"
#include "./UnicodeSetSpanner_CountMethod.hpp"
#include "./UnicodeSetSpanner_TrimOption.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UnicodeSetSpanner.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	UnicodeSetSpanner::UnicodeSetSpanner(android::icu::text::UnicodeSet arg0)
		: JObject(
			"android.icu.text.UnicodeSetSpanner",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		) {}
	
	// Methods
	jint UnicodeSetSpanner::countIn(JString arg0) const
	{
		return callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	jint UnicodeSetSpanner::countIn(JString arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1) const
	{
		return callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jint UnicodeSetSpanner::countIn(JString arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1, android::icu::text::UnicodeSet_SpanCondition arg2) const
	{
		return callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	JString UnicodeSetSpanner::deleteFrom(JString arg0) const
	{
		return callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString UnicodeSetSpanner::deleteFrom(JString arg0, android::icu::text::UnicodeSet_SpanCondition arg1) const
	{
		return callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean UnicodeSetSpanner::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::icu::text::UnicodeSet UnicodeSetSpanner::getUnicodeSet() const
	{
		return callObjectMethod(
			"getUnicodeSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSetSpanner::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString UnicodeSetSpanner::replaceFrom(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString UnicodeSetSpanner::replaceFrom(JString arg0, JString arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2) const
	{
		return callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	JString UnicodeSetSpanner::replaceFrom(JString arg0, JString arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2, android::icu::text::UnicodeSet_SpanCondition arg3) const
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
	JString UnicodeSetSpanner::trim(JString arg0) const
	{
		return callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	JString UnicodeSetSpanner::trim(JString arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1) const
	{
		return callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString UnicodeSetSpanner::trim(JString arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1, android::icu::text::UnicodeSet_SpanCondition arg2) const
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


#include "./UnicodeSet.hpp"
#include "./UnicodeSet_SpanCondition.hpp"
#include "./UnicodeSetSpanner_CountMethod.hpp"
#include "./UnicodeSetSpanner_TrimOption.hpp"
#include "./UnicodeSetSpanner.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	UnicodeSetSpanner::UnicodeSetSpanner(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	UnicodeSetSpanner::UnicodeSetSpanner(android::icu::text::UnicodeSet arg0)
		: JObject(
			"android.icu.text.UnicodeSetSpanner",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		) {}
	
	// Methods
	jint UnicodeSetSpanner::countIn(jstring arg0)
	{
		return callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	jint UnicodeSetSpanner::countIn(jstring arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1)
	{
		return callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)I",
			arg0,
			arg1.object()
		);
	}
	jint UnicodeSetSpanner::countIn(jstring arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1, android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jstring UnicodeSetSpanner::deleteFrom(jstring arg0)
	{
		return callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::deleteFrom(jstring arg0, android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jboolean UnicodeSetSpanner::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::icu::text::UnicodeSet UnicodeSetSpanner::getUnicodeSet()
	{
		return callObjectMethod(
			"getUnicodeSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSetSpanner::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring UnicodeSetSpanner::replaceFrom(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::replaceFrom(jstring arg0, jstring arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2)
	{
		return callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::replaceFrom(jstring arg0, jstring arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2, android::icu::text::UnicodeSet_SpanCondition arg3)
	{
		return callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(jstring arg0)
	{
		return callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(jstring arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1)
	{
		return callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(jstring arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1, android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object(),
			arg2.object()
		).object<jstring>();
	}
} // namespace android::icu::text


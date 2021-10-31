#include "./UnicodeSet.hpp"
#include "./UnicodeSet_SpanCondition.hpp"
#include "./UnicodeSetSpanner_CountMethod.hpp"
#include "./UnicodeSetSpanner_TrimOption.hpp"
#include "./UnicodeSetSpanner.hpp"

namespace android::icu::text
{
	// Fields
	
	UnicodeSetSpanner::UnicodeSetSpanner(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnicodeSetSpanner::UnicodeSetSpanner(android::icu::text::UnicodeSet arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSetSpanner",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint UnicodeSetSpanner::countIn(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	jint UnicodeSetSpanner::countIn(jstring arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1)
	{
		return __thiz.callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint UnicodeSetSpanner::countIn(jstring arg0, android::icu::text::UnicodeSetSpanner_CountMethod arg1, android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return __thiz.callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jstring UnicodeSetSpanner::deleteFrom(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::deleteFrom(jstring arg0, android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return __thiz.callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jboolean UnicodeSetSpanner::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject UnicodeSetSpanner::getUnicodeSet()
	{
		return __thiz.callObjectMethod(
			"getUnicodeSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSetSpanner::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring UnicodeSetSpanner::replaceFrom(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::replaceFrom(jstring arg0, jstring arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2)
	{
		return __thiz.callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::replaceFrom(jstring arg0, jstring arg1, android::icu::text::UnicodeSetSpanner_CountMethod arg2, android::icu::text::UnicodeSet_SpanCondition arg3)
	{
		return __thiz.callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(jstring arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1)
	{
		return __thiz.callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(jstring arg0, android::icu::text::UnicodeSetSpanner_TrimOption arg1, android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return __thiz.callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jstring>();
	}
} // namespace android::icu::text


#include "./UnicodeSet_SpanCondition.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::UnicodeSet_SpanCondition UnicodeSet_SpanCondition::CONDITION_COUNT()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"CONDITION_COUNT",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	android::icu::text::UnicodeSet_SpanCondition UnicodeSet_SpanCondition::CONTAINED()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"CONTAINED",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	android::icu::text::UnicodeSet_SpanCondition UnicodeSet_SpanCondition::NOT_CONTAINED()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"NOT_CONTAINED",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	android::icu::text::UnicodeSet_SpanCondition UnicodeSet_SpanCondition::SIMPLE()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"SIMPLE",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	
	// QJniObject forward
	UnicodeSet_SpanCondition::UnicodeSet_SpanCondition(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::UnicodeSet_SpanCondition UnicodeSet_SpanCondition::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSet$SpanCondition",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$SpanCondition;",
			arg0
		);
	}
	jarray UnicodeSet_SpanCondition::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSet$SpanCondition",
			"values",
			"()[Landroid/icu/text/UnicodeSet$SpanCondition;"
		).object<jarray>();
	}
} // namespace android::icu::text


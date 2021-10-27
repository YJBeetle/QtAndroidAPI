#include "./UnicodeSet_SpanCondition.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject UnicodeSet_SpanCondition::CONDITION_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"CONDITION_COUNT",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	QAndroidJniObject UnicodeSet_SpanCondition::CONTAINED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"CONTAINED",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	QAndroidJniObject UnicodeSet_SpanCondition::NOT_CONTAINED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"NOT_CONTAINED",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	QAndroidJniObject UnicodeSet_SpanCondition::SIMPLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"SIMPLE",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	
	UnicodeSet_SpanCondition::UnicodeSet_SpanCondition(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject UnicodeSet_SpanCondition::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet$SpanCondition",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$SpanCondition;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet_SpanCondition::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet$SpanCondition",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$SpanCondition;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray UnicodeSet_SpanCondition::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet$SpanCondition",
			"values",
			"()[Landroid/icu/text/UnicodeSet$SpanCondition;"
		).object<jarray>();
	}
} // namespace android::icu::text


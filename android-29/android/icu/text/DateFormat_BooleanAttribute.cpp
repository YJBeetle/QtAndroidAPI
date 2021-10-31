#include "./DateFormat_BooleanAttribute.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject DateFormat_BooleanAttribute::PARSE_ALLOW_NUMERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_ALLOW_NUMERIC",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	QAndroidJniObject DateFormat_BooleanAttribute::PARSE_ALLOW_WHITESPACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_ALLOW_WHITESPACE",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	QAndroidJniObject DateFormat_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_MULTIPLE_PATTERNS_FOR_MATCH",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	QAndroidJniObject DateFormat_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_PARTIAL_LITERAL_MATCH",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	
	DateFormat_BooleanAttribute::DateFormat_BooleanAttribute(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject DateFormat_BooleanAttribute::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat$BooleanAttribute",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat$BooleanAttribute;",
			arg0
		);
	}
	jarray DateFormat_BooleanAttribute::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat$BooleanAttribute",
			"values",
			"()[Landroid/icu/text/DateFormat$BooleanAttribute;"
		).object<jarray>();
	}
} // namespace android::icu::text


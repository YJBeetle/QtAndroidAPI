#include "./UnicodeSetSpanner_CountMethod.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject UnicodeSetSpanner_CountMethod::MIN_ELEMENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"MIN_ELEMENTS",
			"Landroid/icu/text/UnicodeSetSpanner$CountMethod;"
		);
	}
	QAndroidJniObject UnicodeSetSpanner_CountMethod::WHOLE_SPAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"WHOLE_SPAN",
			"Landroid/icu/text/UnicodeSetSpanner$CountMethod;"
		);
	}
	
	UnicodeSetSpanner_CountMethod::UnicodeSetSpanner_CountMethod(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject UnicodeSetSpanner_CountMethod::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSetSpanner$CountMethod;",
			arg0
		);
	}
	jarray UnicodeSetSpanner_CountMethod::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$CountMethod",
			"values",
			"()[Landroid/icu/text/UnicodeSetSpanner$CountMethod;"
		).object<jarray>();
	}
} // namespace android::icu::text


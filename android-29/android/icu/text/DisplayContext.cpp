#include "./DisplayContext_Type.hpp"
#include "./DisplayContext.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::CAPITALIZATION_FOR_STANDALONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_STANDALONE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_UI_LIST_OR_MENU",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::CAPITALIZATION_NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_NONE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::DIALECT_NAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"DIALECT_NAMES",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::LENGTH_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"LENGTH_FULL",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::LENGTH_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"LENGTH_SHORT",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::NO_SUBSTITUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"NO_SUBSTITUTE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::STANDARD_NAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"STANDARD_NAMES",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::SUBSTITUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"SUBSTITUTE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	
	DisplayContext::DisplayContext(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject DisplayContext::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DisplayContext",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayContext;",
			arg0
		);
	}
	QAndroidJniObject DisplayContext::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DisplayContext",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayContext;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray DisplayContext::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DisplayContext",
			"values",
			"()[Landroid/icu/text/DisplayContext;"
		).object<jarray>();
	}
	QAndroidJniObject DisplayContext::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Landroid/icu/text/DisplayContext$Type;"
		);
	}
	jint DisplayContext::value()
	{
		return __thiz.callMethod<jint>(
			"value",
			"()I"
		);
	}
} // namespace android::icu::text


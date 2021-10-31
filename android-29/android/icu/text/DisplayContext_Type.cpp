#include "./DisplayContext_Type.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject DisplayContext_Type::CAPITALIZATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"CAPITALIZATION",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	QAndroidJniObject DisplayContext_Type::DIALECT_HANDLING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"DIALECT_HANDLING",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	QAndroidJniObject DisplayContext_Type::DISPLAY_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"DISPLAY_LENGTH",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	QAndroidJniObject DisplayContext_Type::SUBSTITUTE_HANDLING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"SUBSTITUTE_HANDLING",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	
	// QAndroidJniObject forward
	DisplayContext_Type::DisplayContext_Type(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject DisplayContext_Type::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DisplayContext$Type",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayContext$Type;",
			arg0
		);
	}
	jarray DisplayContext_Type::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DisplayContext$Type",
			"values",
			"()[Landroid/icu/text/DisplayContext$Type;"
		).object<jarray>();
	}
} // namespace android::icu::text


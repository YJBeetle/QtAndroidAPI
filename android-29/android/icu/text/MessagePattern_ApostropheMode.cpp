#include "./MessagePattern_ApostropheMode.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject MessagePattern_ApostropheMode::DOUBLE_OPTIONAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ApostropheMode",
			"DOUBLE_OPTIONAL",
			"Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	QAndroidJniObject MessagePattern_ApostropheMode::DOUBLE_REQUIRED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ApostropheMode",
			"DOUBLE_REQUIRED",
			"Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	
	MessagePattern_ApostropheMode::MessagePattern_ApostropheMode(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MessagePattern_ApostropheMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$ApostropheMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ApostropheMode;",
			arg0
		);
	}
	QAndroidJniObject MessagePattern_ApostropheMode::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$ApostropheMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ApostropheMode;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray MessagePattern_ApostropheMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$ApostropheMode",
			"values",
			"()[Landroid/icu/text/MessagePattern$ApostropheMode;"
		).object<jarray>();
	}
} // namespace android::icu::text


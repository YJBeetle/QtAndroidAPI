#include "./MessagePattern_ArgType.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject MessagePattern_ArgType::CHOICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"CHOICE",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	QAndroidJniObject MessagePattern_ArgType::NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"NONE",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	QAndroidJniObject MessagePattern_ArgType::PLURAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"PLURAL",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	QAndroidJniObject MessagePattern_ArgType::SELECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SELECT",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	QAndroidJniObject MessagePattern_ArgType::SELECTORDINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SELECTORDINAL",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	QAndroidJniObject MessagePattern_ArgType::SIMPLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SIMPLE",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	
	// QAndroidJniObject forward
	MessagePattern_ArgType::MessagePattern_ArgType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject MessagePattern_ArgType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$ArgType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ArgType;",
			arg0
		);
	}
	jarray MessagePattern_ArgType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$ArgType",
			"values",
			"()[Landroid/icu/text/MessagePattern$ArgType;"
		).object<jarray>();
	}
	jboolean MessagePattern_ArgType::hasPluralStyle()
	{
		return callMethod<jboolean>(
			"hasPluralStyle",
			"()Z"
		);
	}
} // namespace android::icu::text


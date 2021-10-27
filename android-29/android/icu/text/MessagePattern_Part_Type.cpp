#include "./MessagePattern_Part_Type.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject MessagePattern_Part_Type::ARG_DOUBLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_DOUBLE",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_INT",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_LIMIT",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_NAME",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_NUMBER",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_SELECTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_SELECTOR",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_START",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_STYLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_STYLE",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_TYPE",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::INSERT_CHAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"INSERT_CHAR",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::MSG_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"MSG_LIMIT",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::MSG_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"MSG_START",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::REPLACE_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"REPLACE_NUMBER",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::SKIP_SYNTAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"SKIP_SYNTAX",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	
	MessagePattern_Part_Type::MessagePattern_Part_Type(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MessagePattern_Part_Type::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$Part$Type",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$Part$Type;",
			arg0
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$Part$Type",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$Part$Type;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray MessagePattern_Part_Type::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$Part$Type",
			"values",
			"()[Landroid/icu/text/MessagePattern$Part$Type;"
		).object<jarray>();
	}
	jboolean MessagePattern_Part_Type::hasNumericValue()
	{
		return __thiz.callMethod<jboolean>(
			"hasNumericValue",
			"()Z"
		);
	}
} // namespace android::icu::text


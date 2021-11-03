#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./MessagePattern_Part_Type.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::ARG_DOUBLE()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_DOUBLE",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::ARG_INT()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_INT",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::ARG_LIMIT()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_LIMIT",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::ARG_NAME()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_NAME",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::ARG_NUMBER()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_NUMBER",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::ARG_SELECTOR()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_SELECTOR",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::ARG_START()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_START",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::ARG_STYLE()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_STYLE",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::ARG_TYPE()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_TYPE",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::INSERT_CHAR()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"INSERT_CHAR",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::MSG_LIMIT()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"MSG_LIMIT",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::MSG_START()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"MSG_START",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::REPLACE_NUMBER()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"REPLACE_NUMBER",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::SKIP_SYNTAX()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"SKIP_SYNTAX",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	
	// QAndroidJniObject forward
	MessagePattern_Part_Type::MessagePattern_Part_Type(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part_Type::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MessagePattern$Part$Type",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$Part$Type;",
			arg0.object<jstring>()
		);
	}
	JArray MessagePattern_Part_Type::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.MessagePattern$Part$Type",
			"values",
			"()[Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	jboolean MessagePattern_Part_Type::hasNumericValue() const
	{
		return callMethod<jboolean>(
			"hasNumericValue",
			"()Z"
		);
	}
} // namespace android::icu::text


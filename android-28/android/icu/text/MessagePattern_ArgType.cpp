#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./MessagePattern_ArgType.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::CHOICE()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"CHOICE",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::NONE()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"NONE",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::PLURAL()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"PLURAL",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::SELECT()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SELECT",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::SELECTORDINAL()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SELECTORDINAL",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::SIMPLE()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SIMPLE",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	
	// QAndroidJniObject forward
	MessagePattern_ArgType::MessagePattern_ArgType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MessagePattern$ArgType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ArgType;",
			arg0.object<jstring>()
		);
	}
	JArray MessagePattern_ArgType::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.MessagePattern$ArgType",
			"values",
			"()[Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	jboolean MessagePattern_ArgType::hasPluralStyle()
	{
		return callMethod<jboolean>(
			"hasPluralStyle",
			"()Z"
		);
	}
} // namespace android::icu::text


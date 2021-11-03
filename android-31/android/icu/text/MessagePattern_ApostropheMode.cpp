#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./MessagePattern_ApostropheMode.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::MessagePattern_ApostropheMode MessagePattern_ApostropheMode::DOUBLE_OPTIONAL()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ApostropheMode",
			"DOUBLE_OPTIONAL",
			"Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	android::icu::text::MessagePattern_ApostropheMode MessagePattern_ApostropheMode::DOUBLE_REQUIRED()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ApostropheMode",
			"DOUBLE_REQUIRED",
			"Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	
	// QAndroidJniObject forward
	MessagePattern_ApostropheMode::MessagePattern_ApostropheMode(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::MessagePattern_ApostropheMode MessagePattern_ApostropheMode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MessagePattern$ApostropheMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ApostropheMode;",
			arg0.object<jstring>()
		);
	}
	JArray MessagePattern_ApostropheMode::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.MessagePattern$ApostropheMode",
			"values",
			"()[Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
} // namespace android::icu::text


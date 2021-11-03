#include "../../../JArray.hpp"
#include "./DisplayContext_Type.hpp"
#include "../../../JString.hpp"
#include "./DisplayContext.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::DisplayContext DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::DisplayContext DisplayContext::CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::DisplayContext DisplayContext::CAPITALIZATION_FOR_STANDALONE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_STANDALONE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::DisplayContext DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_UI_LIST_OR_MENU",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::DisplayContext DisplayContext::CAPITALIZATION_NONE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_NONE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::DisplayContext DisplayContext::DIALECT_NAMES()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext",
			"DIALECT_NAMES",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::DisplayContext DisplayContext::LENGTH_FULL()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext",
			"LENGTH_FULL",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::DisplayContext DisplayContext::LENGTH_SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext",
			"LENGTH_SHORT",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::DisplayContext DisplayContext::NO_SUBSTITUTE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext",
			"NO_SUBSTITUTE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::DisplayContext DisplayContext::STANDARD_NAMES()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext",
			"STANDARD_NAMES",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::DisplayContext DisplayContext::SUBSTITUTE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext",
			"SUBSTITUTE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	
	// QJniObject forward
	DisplayContext::DisplayContext(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::DisplayContext DisplayContext::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayContext",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayContext;",
			arg0.object<jstring>()
		);
	}
	JArray DisplayContext::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayContext",
			"values",
			"()[Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::DisplayContext_Type DisplayContext::type() const
	{
		return callObjectMethod(
			"type",
			"()Landroid/icu/text/DisplayContext$Type;"
		);
	}
	jint DisplayContext::value() const
	{
		return callMethod<jint>(
			"value",
			"()I"
		);
	}
} // namespace android::icu::text


#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./TextKeyListener_Capitalize.hpp"

namespace android::text::method
{
	// Fields
	android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::CHARACTERS()
	{
		return getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"CHARACTERS",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::NONE()
	{
		return getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"NONE",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::SENTENCES()
	{
		return getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"SENTENCES",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::WORDS()
	{
		return getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"WORDS",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	
	// Constructors
	
	// Methods
	android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.method.TextKeyListener$Capitalize",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/method/TextKeyListener$Capitalize;",
			arg0.object<jstring>()
		);
	}
	JArray TextKeyListener_Capitalize::values()
	{
		return callStaticObjectMethod(
			"android.text.method.TextKeyListener$Capitalize",
			"values",
			"()[Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
} // namespace android::text::method


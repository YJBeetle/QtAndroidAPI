#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./TextKeyListener_Capitalize.def.hpp"

namespace android::text::method
{
	// Fields
	inline android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::CHARACTERS()
	{
		return getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"CHARACTERS",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	inline android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::NONE()
	{
		return getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"NONE",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	inline android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::SENTENCES()
	{
		return getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"SENTENCES",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	inline android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::WORDS()
	{
		return getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"WORDS",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::text::method::TextKeyListener_Capitalize TextKeyListener_Capitalize::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.method.TextKeyListener$Capitalize",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/method/TextKeyListener$Capitalize;",
			arg0.object<jstring>()
		);
	}
	inline JArray TextKeyListener_Capitalize::values()
	{
		return callStaticObjectMethod(
			"android.text.method.TextKeyListener$Capitalize",
			"values",
			"()[Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
} // namespace android::text::method

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::method;
#endif

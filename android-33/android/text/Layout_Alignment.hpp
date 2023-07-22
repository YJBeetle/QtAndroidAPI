#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Layout_Alignment.def.hpp"

namespace android::text
{
	// Fields
	inline android::text::Layout_Alignment Layout_Alignment::ALIGN_CENTER()
	{
		return getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_CENTER",
			"Landroid/text/Layout$Alignment;"
		);
	}
	inline android::text::Layout_Alignment Layout_Alignment::ALIGN_NORMAL()
	{
		return getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_NORMAL",
			"Landroid/text/Layout$Alignment;"
		);
	}
	inline android::text::Layout_Alignment Layout_Alignment::ALIGN_OPPOSITE()
	{
		return getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_OPPOSITE",
			"Landroid/text/Layout$Alignment;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::text::Layout_Alignment Layout_Alignment::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.Layout$Alignment",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/Layout$Alignment;",
			arg0.object<jstring>()
		);
	}
	inline JArray Layout_Alignment::values()
	{
		return callStaticObjectMethod(
			"android.text.Layout$Alignment",
			"values",
			"()[Landroid/text/Layout$Alignment;"
		);
	}
} // namespace android::text

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif

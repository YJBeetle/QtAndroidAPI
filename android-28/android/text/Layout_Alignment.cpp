#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Layout_Alignment.hpp"

namespace android::text
{
	// Fields
	android::text::Layout_Alignment Layout_Alignment::ALIGN_CENTER()
	{
		return getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_CENTER",
			"Landroid/text/Layout$Alignment;"
		);
	}
	android::text::Layout_Alignment Layout_Alignment::ALIGN_LEFT()
	{
		return getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_LEFT",
			"Landroid/text/Layout$Alignment;"
		);
	}
	android::text::Layout_Alignment Layout_Alignment::ALIGN_NORMAL()
	{
		return getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_NORMAL",
			"Landroid/text/Layout$Alignment;"
		);
	}
	android::text::Layout_Alignment Layout_Alignment::ALIGN_OPPOSITE()
	{
		return getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_OPPOSITE",
			"Landroid/text/Layout$Alignment;"
		);
	}
	android::text::Layout_Alignment Layout_Alignment::ALIGN_RIGHT()
	{
		return getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_RIGHT",
			"Landroid/text/Layout$Alignment;"
		);
	}
	
	// Constructors
	
	// Methods
	android::text::Layout_Alignment Layout_Alignment::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.Layout$Alignment",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/Layout$Alignment;",
			arg0.object<jstring>()
		);
	}
	JArray Layout_Alignment::values()
	{
		return callStaticObjectMethod(
			"android.text.Layout$Alignment",
			"values",
			"()[Landroid/text/Layout$Alignment;"
		);
	}
} // namespace android::text


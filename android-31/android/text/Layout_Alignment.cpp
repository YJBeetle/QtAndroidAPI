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
	
	// QJniObject forward
	Layout_Alignment::Layout_Alignment(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::text::Layout_Alignment Layout_Alignment::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.text.Layout$Alignment",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/Layout$Alignment;",
			arg0
		);
	}
	jarray Layout_Alignment::values()
	{
		return callStaticObjectMethod(
			"android.text.Layout$Alignment",
			"values",
			"()[Landroid/text/Layout$Alignment;"
		).object<jarray>();
	}
} // namespace android::text


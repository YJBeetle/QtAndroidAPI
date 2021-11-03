#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./TextUtils_TruncateAt.hpp"

namespace android::text
{
	// Fields
	android::text::TextUtils_TruncateAt TextUtils_TruncateAt::END()
	{
		return getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"END",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	android::text::TextUtils_TruncateAt TextUtils_TruncateAt::END_SMALL()
	{
		return getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"END_SMALL",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	android::text::TextUtils_TruncateAt TextUtils_TruncateAt::MARQUEE()
	{
		return getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"MARQUEE",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	android::text::TextUtils_TruncateAt TextUtils_TruncateAt::MIDDLE()
	{
		return getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"MIDDLE",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	android::text::TextUtils_TruncateAt TextUtils_TruncateAt::START()
	{
		return getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"START",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	
	// QJniObject forward
	TextUtils_TruncateAt::TextUtils_TruncateAt(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::text::TextUtils_TruncateAt TextUtils_TruncateAt::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils$TruncateAt",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/TextUtils$TruncateAt;",
			arg0.object<jstring>()
		);
	}
	JArray TextUtils_TruncateAt::values()
	{
		return callStaticObjectMethod(
			"android.text.TextUtils$TruncateAt",
			"values",
			"()[Landroid/text/TextUtils$TruncateAt;"
		);
	}
} // namespace android::text


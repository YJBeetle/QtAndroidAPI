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
	android::text::TextUtils_TruncateAt TextUtils_TruncateAt::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.text.TextUtils$TruncateAt",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/TextUtils$TruncateAt;",
			arg0
		);
	}
	jarray TextUtils_TruncateAt::values()
	{
		return callStaticObjectMethod(
			"android.text.TextUtils$TruncateAt",
			"values",
			"()[Landroid/text/TextUtils$TruncateAt;"
		).object<jarray>();
	}
} // namespace android::text


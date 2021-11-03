#include "../../content/Context.hpp"
#include "../../../JString.hpp"
#include "./Formatter.hpp"

namespace android::text::format
{
	// Fields
	
	// QAndroidJniObject forward
	Formatter::Formatter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Formatter::Formatter()
		: JObject(
			"android.text.format.Formatter",
			"()V"
		) {}
	
	// Methods
	JString Formatter::formatFileSize(android::content::Context arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.Formatter",
			"formatFileSize",
			"(Landroid/content/Context;J)Ljava/lang/String;",
			arg0.object(),
			arg1
		);
	}
	JString Formatter::formatIpAddress(jint arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.Formatter",
			"formatIpAddress",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Formatter::formatShortFileSize(android::content::Context arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.Formatter",
			"formatShortFileSize",
			"(Landroid/content/Context;J)Ljava/lang/String;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::format


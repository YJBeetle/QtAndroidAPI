#pragma once

#include "../../content/Context.def.hpp"
#include "../../../JString.hpp"
#include "./Formatter.def.hpp"

namespace android::text::format
{
	// Fields
	
	// Constructors
	inline Formatter::Formatter()
		: JObject(
			"android.text.format.Formatter",
			"()V"
		) {}
	
	// Methods
	inline JString Formatter::formatFileSize(android::content::Context arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.Formatter",
			"formatFileSize",
			"(Landroid/content/Context;J)Ljava/lang/String;",
			arg0.object(),
			arg1
		);
	}
	inline JString Formatter::formatIpAddress(jint arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.Formatter",
			"formatIpAddress",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Formatter::formatShortFileSize(android::content::Context arg0, jlong arg1)
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::format;
#endif

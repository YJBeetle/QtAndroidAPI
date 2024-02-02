#pragma once

#include "./Context_BindServiceFlags.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::Context_BindServiceFlags Context_BindServiceFlags::of(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.content.Context$BindServiceFlags",
			"of",
			"(J)Landroid/content/Context$BindServiceFlags;",
			arg0
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif

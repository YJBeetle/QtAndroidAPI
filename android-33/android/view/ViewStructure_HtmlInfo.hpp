#pragma once

#include "../../JString.hpp"
#include "./ViewStructure_HtmlInfo.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline ViewStructure_HtmlInfo::ViewStructure_HtmlInfo()
		: JObject(
			"android.view.ViewStructure$HtmlInfo",
			"()V"
		) {}
	
	// Methods
	inline JObject ViewStructure_HtmlInfo::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/List;"
		);
	}
	inline JString ViewStructure_HtmlInfo::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif

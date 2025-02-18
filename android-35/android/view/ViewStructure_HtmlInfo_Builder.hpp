#pragma once

#include "./ViewStructure_HtmlInfo.def.hpp"
#include "../../JString.hpp"
#include "./ViewStructure_HtmlInfo_Builder.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline ViewStructure_HtmlInfo_Builder::ViewStructure_HtmlInfo_Builder()
		: JObject(
			"android.view.ViewStructure$HtmlInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::ViewStructure_HtmlInfo_Builder ViewStructure_HtmlInfo_Builder::addAttribute(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/view/ViewStructure$HtmlInfo$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::view::ViewStructure_HtmlInfo ViewStructure_HtmlInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/ViewStructure$HtmlInfo;"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif

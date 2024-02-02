#pragma once

#include "../../../JArray.hpp"
#include "./VirtualViewFillInfo.def.hpp"
#include "./VirtualViewFillInfo_Builder.def.hpp"

namespace android::view::autofill
{
	// Fields
	
	// Constructors
	inline VirtualViewFillInfo_Builder::VirtualViewFillInfo_Builder()
		: JObject(
			"android.view.autofill.VirtualViewFillInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::autofill::VirtualViewFillInfo VirtualViewFillInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/autofill/VirtualViewFillInfo;"
		);
	}
	inline android::view::autofill::VirtualViewFillInfo_Builder VirtualViewFillInfo_Builder::setAutofillHints(JArray arg0) const
	{
		return callObjectMethod(
			"setAutofillHints",
			"([Ljava/lang/String;)Landroid/view/autofill/VirtualViewFillInfo$Builder;",
			arg0.object<jarray>()
		);
	}
} // namespace android::view::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::autofill;
#endif

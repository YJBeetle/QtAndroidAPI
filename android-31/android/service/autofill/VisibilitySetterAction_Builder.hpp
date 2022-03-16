#pragma once

#include "./VisibilitySetterAction.def.hpp"
#include "./VisibilitySetterAction_Builder.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	inline VisibilitySetterAction_Builder::VisibilitySetterAction_Builder(jint arg0, jint arg1)
		: JObject(
			"android.service.autofill.VisibilitySetterAction$Builder",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::service::autofill::VisibilitySetterAction VisibilitySetterAction_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/VisibilitySetterAction;"
		);
	}
	inline android::service::autofill::VisibilitySetterAction_Builder VisibilitySetterAction_Builder::setVisibility(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setVisibility",
			"(II)Landroid/service/autofill/VisibilitySetterAction$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::service::autofill

// Base class headers


#pragma once

#include "./FactoryResetProtectionPolicy.def.hpp"
#include "./FactoryResetProtectionPolicy_Builder.def.hpp"

namespace android::app::admin
{
	// Fields
	
	// Constructors
	inline FactoryResetProtectionPolicy_Builder::FactoryResetProtectionPolicy_Builder()
		: JObject(
			"android.app.admin.FactoryResetProtectionPolicy$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::admin::FactoryResetProtectionPolicy FactoryResetProtectionPolicy_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/admin/FactoryResetProtectionPolicy;"
		);
	}
	inline android::app::admin::FactoryResetProtectionPolicy_Builder FactoryResetProtectionPolicy_Builder::setFactoryResetProtectionAccounts(JObject arg0) const
	{
		return callObjectMethod(
			"setFactoryResetProtectionAccounts",
			"(Ljava/util/List;)Landroid/app/admin/FactoryResetProtectionPolicy$Builder;",
			arg0.object()
		);
	}
	inline android::app::admin::FactoryResetProtectionPolicy_Builder FactoryResetProtectionPolicy_Builder::setFactoryResetProtectionEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setFactoryResetProtectionEnabled",
			"(Z)Landroid/app/admin/FactoryResetProtectionPolicy$Builder;",
			arg0
		);
	}
} // namespace android::app::admin

// Base class headers


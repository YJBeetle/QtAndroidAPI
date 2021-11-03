#include "./FactoryResetProtectionPolicy.hpp"
#include "./FactoryResetProtectionPolicy_Builder.hpp"

namespace android::app::admin
{
	// Fields
	
	// QJniObject forward
	FactoryResetProtectionPolicy_Builder::FactoryResetProtectionPolicy_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FactoryResetProtectionPolicy_Builder::FactoryResetProtectionPolicy_Builder()
		: JObject(
			"android.app.admin.FactoryResetProtectionPolicy$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::admin::FactoryResetProtectionPolicy FactoryResetProtectionPolicy_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/admin/FactoryResetProtectionPolicy;"
		);
	}
	android::app::admin::FactoryResetProtectionPolicy_Builder FactoryResetProtectionPolicy_Builder::setFactoryResetProtectionAccounts(JObject arg0) const
	{
		return callObjectMethod(
			"setFactoryResetProtectionAccounts",
			"(Ljava/util/List;)Landroid/app/admin/FactoryResetProtectionPolicy$Builder;",
			arg0.object()
		);
	}
	android::app::admin::FactoryResetProtectionPolicy_Builder FactoryResetProtectionPolicy_Builder::setFactoryResetProtectionEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setFactoryResetProtectionEnabled",
			"(Z)Landroid/app/admin/FactoryResetProtectionPolicy$Builder;",
			arg0
		);
	}
} // namespace android::app::admin


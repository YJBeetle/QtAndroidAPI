#include "./FactoryResetProtectionPolicy.hpp"
#include "./FactoryResetProtectionPolicy_Builder.hpp"

namespace android::app::admin
{
	// Fields
	
	// QAndroidJniObject forward
	FactoryResetProtectionPolicy_Builder::FactoryResetProtectionPolicy_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FactoryResetProtectionPolicy_Builder::FactoryResetProtectionPolicy_Builder()
		: __JniBaseClass(
			"android.app.admin.FactoryResetProtectionPolicy$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::admin::FactoryResetProtectionPolicy FactoryResetProtectionPolicy_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/admin/FactoryResetProtectionPolicy;"
		);
	}
	android::app::admin::FactoryResetProtectionPolicy_Builder FactoryResetProtectionPolicy_Builder::setFactoryResetProtectionAccounts(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setFactoryResetProtectionAccounts",
			"(Ljava/util/List;)Landroid/app/admin/FactoryResetProtectionPolicy$Builder;",
			arg0.object()
		);
	}
	android::app::admin::FactoryResetProtectionPolicy_Builder FactoryResetProtectionPolicy_Builder::setFactoryResetProtectionEnabled(jboolean arg0)
	{
		return callObjectMethod(
			"setFactoryResetProtectionEnabled",
			"(Z)Landroid/app/admin/FactoryResetProtectionPolicy$Builder;",
			arg0
		);
	}
} // namespace android::app::admin


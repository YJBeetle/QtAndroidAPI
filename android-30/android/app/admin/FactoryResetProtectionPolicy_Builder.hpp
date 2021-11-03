#pragma once

#include "../../../JObject.hpp"

namespace android::app::admin
{
	class FactoryResetProtectionPolicy;
}

namespace android::app::admin
{
	class FactoryResetProtectionPolicy_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FactoryResetProtectionPolicy_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FactoryResetProtectionPolicy_Builder(QJniObject obj);
		
		// Constructors
		FactoryResetProtectionPolicy_Builder();
		
		// Methods
		android::app::admin::FactoryResetProtectionPolicy build();
		android::app::admin::FactoryResetProtectionPolicy_Builder setFactoryResetProtectionAccounts(JObject arg0);
		android::app::admin::FactoryResetProtectionPolicy_Builder setFactoryResetProtectionEnabled(jboolean arg0);
	};
} // namespace android::app::admin


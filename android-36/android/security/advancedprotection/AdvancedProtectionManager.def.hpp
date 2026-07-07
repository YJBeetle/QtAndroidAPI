#pragma once

#include "../../../JObject.hpp"

namespace android::security::advancedprotection
{
	class AdvancedProtectionManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdvancedProtectionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvancedProtectionManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean isAdvancedProtectionEnabled() const;
		void registerAdvancedProtectionCallback(JObject arg0, JObject arg1) const;
		void unregisterAdvancedProtectionCallback(JObject arg0) const;
	};
} // namespace android::security::advancedprotection


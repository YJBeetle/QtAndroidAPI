#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
class JString;

namespace android::os
{
	class SecurityStateManager : public JObject
	{
	public:
		// Fields
		static JString KEY_KERNEL_VERSION();
		static JString KEY_SYSTEM_SPL();
		static JString KEY_VENDOR_SPL();
		
		// QJniObject forward
		template<typename ...Ts> explicit SecurityStateManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecurityStateManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::os::Bundle getGlobalSecurityState() const;
	};
} // namespace android::os


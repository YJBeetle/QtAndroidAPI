#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
class JString;

namespace android::app::sdksandbox::sdkprovider
{
	class SdkSandboxController : public JObject
	{
	public:
		// Fields
		static JString SDK_SANDBOX_CONTROLLER_SERVICE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SdkSandboxController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SdkSandboxController(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getAppOwnedSdkSandboxInterfaces() const;
		JString getClientPackageName() const;
		JObject getClientSharedPreferences() const;
		JObject getSandboxedSdks() const;
		void loadSdk(JString arg0, android::os::Bundle arg1, JObject arg2, JObject arg3) const;
		JObject registerSdkSandboxActivityHandler(JObject arg0) const;
		void unregisterSdkSandboxActivityHandler(JObject arg0) const;
	};
} // namespace android::app::sdksandbox::sdkprovider


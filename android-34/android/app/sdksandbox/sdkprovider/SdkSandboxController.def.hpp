#pragma once

#include "../../../../JObject.hpp"

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
		JObject getClientSharedPreferences() const;
		JObject getSandboxedSdks() const;
		JObject registerSdkSandboxActivityHandler(JObject arg0) const;
		void unregisterSdkSandboxActivityHandler(JObject arg0) const;
	};
} // namespace android::app::sdksandbox::sdkprovider


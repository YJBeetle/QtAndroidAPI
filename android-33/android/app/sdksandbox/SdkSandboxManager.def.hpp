#pragma once

#include "../../../JObject.hpp"

namespace android::app::sdksandbox
{
	class SdkSandboxManager : public JObject
	{
	public:
		// Fields
		static jint SDK_SANDBOX_STATE_DISABLED();
		static jint SDK_SANDBOX_STATE_ENABLED_PROCESS_ISOLATION();
		
		// QJniObject forward
		template<typename ...Ts> explicit SdkSandboxManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SdkSandboxManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint getSdkSandboxState();
	};
} // namespace android::app::sdksandbox


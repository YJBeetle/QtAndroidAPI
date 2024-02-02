#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class Activity;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::app::sdksandbox
{
	class SdkSandboxManager : public JObject
	{
	public:
		// Fields
		static JString EXTRA_DISPLAY_ID();
		static JString EXTRA_HEIGHT_IN_PIXELS();
		static JString EXTRA_HOST_TOKEN();
		static JString EXTRA_SURFACE_PACKAGE();
		static JString EXTRA_WIDTH_IN_PIXELS();
		static jint LOAD_SDK_ALREADY_LOADED();
		static jint LOAD_SDK_INTERNAL_ERROR();
		static jint LOAD_SDK_NOT_FOUND();
		static jint LOAD_SDK_SDK_DEFINED_ERROR();
		static jint LOAD_SDK_SDK_SANDBOX_DISABLED();
		static jint REQUEST_SURFACE_PACKAGE_INTERNAL_ERROR();
		static jint REQUEST_SURFACE_PACKAGE_SDK_NOT_LOADED();
		static jint SDK_SANDBOX_PROCESS_NOT_AVAILABLE();
		static JString SDK_SANDBOX_SERVICE();
		static jint SDK_SANDBOX_STATE_DISABLED();
		static jint SDK_SANDBOX_STATE_ENABLED_PROCESS_ISOLATION();
		
		// QJniObject forward
		template<typename ...Ts> explicit SdkSandboxManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SdkSandboxManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint getSdkSandboxState();
		void addSdkSandboxProcessDeathCallback(JObject arg0, JObject arg1) const;
		void addSyncedSharedPreferencesKeys(JObject arg0) const;
		JObject getSandboxedSdks() const;
		JObject getSyncedSharedPreferencesKeys() const;
		void loadSdk(JString arg0, android::os::Bundle arg1, JObject arg2, JObject arg3) const;
		void removeSdkSandboxProcessDeathCallback(JObject arg0) const;
		void removeSyncedSharedPreferencesKeys(JObject arg0) const;
		void requestSurfacePackage(JString arg0, android::os::Bundle arg1, JObject arg2, JObject arg3) const;
		void startSdkSandboxActivity(android::app::Activity arg0, JObject arg1) const;
		void unloadSdk(JString arg0) const;
	};
} // namespace android::app::sdksandbox


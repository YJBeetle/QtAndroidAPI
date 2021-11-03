#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::admin
{
	class DevicePolicyManager_InstallSystemUpdateCallback : public JObject
	{
	public:
		// Fields
		static jint UPDATE_ERROR_BATTERY_LOW();
		static jint UPDATE_ERROR_FILE_NOT_FOUND();
		static jint UPDATE_ERROR_INCORRECT_OS_VERSION();
		static jint UPDATE_ERROR_UNKNOWN();
		static jint UPDATE_ERROR_UPDATE_FILE_INVALID();
		
		// QJniObject forward
		template<typename ...Ts> explicit DevicePolicyManager_InstallSystemUpdateCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DevicePolicyManager_InstallSystemUpdateCallback(QJniObject obj);
		
		// Constructors
		DevicePolicyManager_InstallSystemUpdateCallback();
		
		// Methods
		void onInstallUpdateError(jint arg0, JString arg1) const;
	};
} // namespace android::app::admin


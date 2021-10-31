#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::admin
{
	class DevicePolicyManager_InstallSystemUpdateCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint UPDATE_ERROR_BATTERY_LOW();
		static jint UPDATE_ERROR_FILE_NOT_FOUND();
		static jint UPDATE_ERROR_INCORRECT_OS_VERSION();
		static jint UPDATE_ERROR_UNKNOWN();
		static jint UPDATE_ERROR_UPDATE_FILE_INVALID();
		
		// QJniObject forward
		template<typename ...Ts> explicit DevicePolicyManager_InstallSystemUpdateCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DevicePolicyManager_InstallSystemUpdateCallback(QJniObject obj);
		
		// Constructors
		DevicePolicyManager_InstallSystemUpdateCallback();
		
		// Methods
		void onInstallUpdateError(jint arg0, jstring arg1);
	};
} // namespace android::app::admin


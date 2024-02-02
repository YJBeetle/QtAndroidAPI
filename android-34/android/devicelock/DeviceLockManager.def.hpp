#pragma once

#include "../../JObject.hpp"

namespace android::devicelock
{
	class DeviceLockManager : public JObject
	{
	public:
		// Fields
		static jint DEVICE_LOCK_ROLE_FINANCING();
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceLockManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceLockManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void getDeviceId(JObject arg0, JObject arg1) const;
		void getKioskApps(JObject arg0, JObject arg1) const;
		void isDeviceLocked(JObject arg0, JObject arg1) const;
		void lockDevice(JObject arg0, JObject arg1) const;
		void unlockDevice(JObject arg0, JObject arg1) const;
	};
} // namespace android::devicelock


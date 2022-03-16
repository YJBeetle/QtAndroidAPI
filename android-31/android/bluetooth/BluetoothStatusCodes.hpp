#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothStatusCodes : public JObject
	{
	public:
		// Fields
		static jint ERROR_BLUETOOTH_NOT_ALLOWED();
		static jint ERROR_BLUETOOTH_NOT_ENABLED();
		static jint ERROR_DEVICE_NOT_BONDED();
		static jint ERROR_MISSING_BLUETOOTH_CONNECT_PERMISSION();
		static jint ERROR_UNKNOWN();
		static jint SUCCESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothStatusCodes(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothStatusCodes(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::bluetooth


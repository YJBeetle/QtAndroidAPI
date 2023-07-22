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
		static jint ERROR_GATT_WRITE_NOT_ALLOWED();
		static jint ERROR_GATT_WRITE_REQUEST_BUSY();
		static jint ERROR_MISSING_BLUETOOTH_CONNECT_PERMISSION();
		static jint ERROR_PROFILE_SERVICE_NOT_BOUND();
		static jint ERROR_UNKNOWN();
		static jint FEATURE_NOT_SUPPORTED();
		static jint FEATURE_SUPPORTED();
		static jint SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothStatusCodes(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothStatusCodes(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::bluetooth


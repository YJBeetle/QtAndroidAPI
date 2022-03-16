#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothClass_Service : public JObject
	{
	public:
		// Fields
		static jint AUDIO();
		static jint CAPTURE();
		static jint INFORMATION();
		static jint LIMITED_DISCOVERABILITY();
		static jint NETWORKING();
		static jint OBJECT_TRANSFER();
		static jint POSITIONING();
		static jint RENDER();
		static jint TELEPHONY();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothClass_Service(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothClass_Service(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BluetoothClass_Service();
		
		// Methods
	};
} // namespace android::bluetooth


#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothClass_Device_Major : public JObject
	{
	public:
		// Fields
		static jint AUDIO_VIDEO();
		static jint COMPUTER();
		static jint HEALTH();
		static jint IMAGING();
		static jint MISC();
		static jint NETWORKING();
		static jint PERIPHERAL();
		static jint PHONE();
		static jint TOY();
		static jint UNCATEGORIZED();
		static jint WEARABLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothClass_Device_Major(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothClass_Device_Major(QJniObject obj);
		
		// Constructors
		BluetoothClass_Device_Major();
		
		// Methods
	};
} // namespace android::bluetooth


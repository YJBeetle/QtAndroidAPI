#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::bluetooth
{
	class BluetoothClass_Service : public __JniBaseClass
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
		
		BluetoothClass_Service(QAndroidJniObject obj);
		// Constructors
		BluetoothClass_Service();
		
		// Methods
	};
} // namespace android::bluetooth


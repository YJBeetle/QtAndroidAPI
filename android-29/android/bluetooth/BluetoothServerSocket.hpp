#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothSocket;
}

namespace android::bluetooth
{
	class BluetoothServerSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		BluetoothServerSocket(QAndroidJniObject obj);
		// Constructors
		BluetoothServerSocket() = default;
		
		// Methods
		QAndroidJniObject accept();
		QAndroidJniObject accept(jint arg0);
		void close();
		jint getPsm();
		jstring toString();
	};
} // namespace android::bluetooth


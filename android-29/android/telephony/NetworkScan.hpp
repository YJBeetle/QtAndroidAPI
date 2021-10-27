#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class NetworkScan : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_INTERRUPTED();
		static jint ERROR_INVALID_SCAN();
		static jint ERROR_INVALID_SCANID();
		static jint ERROR_MODEM_ERROR();
		static jint ERROR_MODEM_UNAVAILABLE();
		static jint ERROR_RADIO_INTERFACE_ERROR();
		static jint ERROR_UNSUPPORTED();
		static jint SUCCESS();
		
		NetworkScan(QAndroidJniObject obj);
		// Constructors
		NetworkScan() = default;
		
		// Methods
		void stopScan();
	};
} // namespace android::telephony


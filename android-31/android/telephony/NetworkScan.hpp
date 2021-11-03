#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class NetworkScan : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkScan(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkScan(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void stopScan();
	};
} // namespace android::telephony


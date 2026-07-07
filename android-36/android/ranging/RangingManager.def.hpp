#pragma once

#include "../../JObject.hpp"

namespace android::ranging
{
	class RangingSession;
}

namespace android::ranging
{
	class RangingManager : public JObject
	{
	public:
		// Fields
		static jint BLE_CS();
		static jint BLE_RSSI();
		static jint UWB();
		static jint WIFI_NAN_RTT();
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::ranging::RangingSession createRangingSession(JObject arg0, JObject arg1) const;
		void registerCapabilitiesCallback(JObject arg0, JObject arg1) const;
		void unregisterCapabilitiesCallback(JObject arg0) const;
	};
} // namespace android::ranging


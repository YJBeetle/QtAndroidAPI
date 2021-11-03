#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::bluetooth::le
{
	class ScanCallback;
}
namespace android::bluetooth::le
{
	class ScanSettings;
}
class JString;

namespace android::bluetooth::le
{
	class BluetoothLeScanner : public JObject
	{
	public:
		// Fields
		static JString EXTRA_CALLBACK_TYPE();
		static JString EXTRA_ERROR_CODE();
		static JString EXTRA_LIST_SCAN_RESULT();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothLeScanner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeScanner(QJniObject obj);
		
		// Constructors
		
		// Methods
		void flushPendingScanResults(android::bluetooth::le::ScanCallback arg0) const;
		jint startScan(JObject arg0, android::bluetooth::le::ScanSettings arg1, android::app::PendingIntent arg2) const;
		void startScan(android::bluetooth::le::ScanCallback arg0) const;
		void startScan(JObject arg0, android::bluetooth::le::ScanSettings arg1, android::bluetooth::le::ScanCallback arg2) const;
		void stopScan(android::app::PendingIntent arg0) const;
		void stopScan(android::bluetooth::le::ScanCallback arg0) const;
	};
} // namespace android::bluetooth::le


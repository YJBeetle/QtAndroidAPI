#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class CancellationSignal;
}
namespace android::print
{
	class PrinterId;
}
namespace android::printservice
{
	class CustomPrinterIconCallback;
}

namespace android::printservice
{
	class PrinterDiscoverySession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrinterDiscoverySession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrinterDiscoverySession(QJniObject obj);
		
		// Constructors
		PrinterDiscoverySession();
		
		// Methods
		void addPrinters(JObject arg0);
		JObject getPrinters();
		JObject getTrackedPrinters();
		jboolean isDestroyed();
		jboolean isPrinterDiscoveryStarted();
		void onDestroy();
		void onRequestCustomPrinterIcon(android::print::PrinterId arg0, android::os::CancellationSignal arg1, android::printservice::CustomPrinterIconCallback arg2);
		void onStartPrinterDiscovery(JObject arg0);
		void onStartPrinterStateTracking(android::print::PrinterId arg0);
		void onStopPrinterDiscovery();
		void onStopPrinterStateTracking(android::print::PrinterId arg0);
		void onValidatePrinters(JObject arg0);
		void removePrinters(JObject arg0);
	};
} // namespace android::printservice


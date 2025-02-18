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
		PrinterDiscoverySession(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PrinterDiscoverySession();
		
		// Methods
		void addPrinters(JObject arg0) const;
		JObject getPrinters() const;
		JObject getTrackedPrinters() const;
		jboolean isDestroyed() const;
		jboolean isPrinterDiscoveryStarted() const;
		void onDestroy() const;
		void onRequestCustomPrinterIcon(android::print::PrinterId arg0, android::os::CancellationSignal arg1, android::printservice::CustomPrinterIconCallback arg2) const;
		void onStartPrinterDiscovery(JObject arg0) const;
		void onStartPrinterStateTracking(android::print::PrinterId arg0) const;
		void onStopPrinterDiscovery() const;
		void onStopPrinterStateTracking(android::print::PrinterId arg0) const;
		void onValidatePrinters(JObject arg0) const;
		void removePrinters(JObject arg0) const;
	};
} // namespace android::printservice


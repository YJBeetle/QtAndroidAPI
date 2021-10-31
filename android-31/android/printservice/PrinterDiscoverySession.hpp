#pragma once

#include "../../__JniBaseClass.hpp"

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
	class PrinterDiscoverySession : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrinterDiscoverySession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrinterDiscoverySession(QJniObject obj);
		
		// Constructors
		PrinterDiscoverySession();
		
		// Methods
		void addPrinters(__JniBaseClass arg0);
		__JniBaseClass getPrinters();
		__JniBaseClass getTrackedPrinters();
		jboolean isDestroyed();
		jboolean isPrinterDiscoveryStarted();
		void onDestroy();
		void onRequestCustomPrinterIcon(android::print::PrinterId arg0, android::os::CancellationSignal arg1, android::printservice::CustomPrinterIconCallback arg2);
		void onStartPrinterDiscovery(__JniBaseClass arg0);
		void onStartPrinterStateTracking(android::print::PrinterId arg0);
		void onStopPrinterDiscovery();
		void onStopPrinterStateTracking(android::print::PrinterId arg0);
		void onValidatePrinters(__JniBaseClass arg0);
		void removePrinters(__JniBaseClass arg0);
	};
} // namespace android::printservice


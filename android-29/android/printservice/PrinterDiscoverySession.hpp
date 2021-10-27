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
		
		PrinterDiscoverySession(QAndroidJniObject obj);
		// Constructors
		PrinterDiscoverySession();
		
		// Methods
		void addPrinters(__JniBaseClass arg0);
		QAndroidJniObject getPrinters();
		QAndroidJniObject getTrackedPrinters();
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


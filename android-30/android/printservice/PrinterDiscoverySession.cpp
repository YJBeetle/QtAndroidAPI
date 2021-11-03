#include "../os/CancellationSignal.hpp"
#include "../print/PrinterId.hpp"
#include "./CustomPrinterIconCallback.hpp"
#include "./PrinterDiscoverySession.hpp"

namespace android::printservice
{
	// Fields
	
	// QAndroidJniObject forward
	PrinterDiscoverySession::PrinterDiscoverySession(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PrinterDiscoverySession::PrinterDiscoverySession()
		: JObject(
			"android.printservice.PrinterDiscoverySession",
			"()V"
		) {}
	
	// Methods
	void PrinterDiscoverySession::addPrinters(JObject arg0)
	{
		callMethod<void>(
			"addPrinters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	JObject PrinterDiscoverySession::getPrinters()
	{
		return callObjectMethod(
			"getPrinters",
			"()Ljava/util/List;"
		);
	}
	JObject PrinterDiscoverySession::getTrackedPrinters()
	{
		return callObjectMethod(
			"getTrackedPrinters",
			"()Ljava/util/List;"
		);
	}
	jboolean PrinterDiscoverySession::isDestroyed()
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	jboolean PrinterDiscoverySession::isPrinterDiscoveryStarted()
	{
		return callMethod<jboolean>(
			"isPrinterDiscoveryStarted",
			"()Z"
		);
	}
	void PrinterDiscoverySession::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void PrinterDiscoverySession::onRequestCustomPrinterIcon(android::print::PrinterId arg0, android::os::CancellationSignal arg1, android::printservice::CustomPrinterIconCallback arg2)
	{
		callMethod<void>(
			"onRequestCustomPrinterIcon",
			"(Landroid/print/PrinterId;Landroid/os/CancellationSignal;Landroid/printservice/CustomPrinterIconCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void PrinterDiscoverySession::onStartPrinterDiscovery(JObject arg0)
	{
		callMethod<void>(
			"onStartPrinterDiscovery",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PrinterDiscoverySession::onStartPrinterStateTracking(android::print::PrinterId arg0)
	{
		callMethod<void>(
			"onStartPrinterStateTracking",
			"(Landroid/print/PrinterId;)V",
			arg0.object()
		);
	}
	void PrinterDiscoverySession::onStopPrinterDiscovery()
	{
		callMethod<void>(
			"onStopPrinterDiscovery",
			"()V"
		);
	}
	void PrinterDiscoverySession::onStopPrinterStateTracking(android::print::PrinterId arg0)
	{
		callMethod<void>(
			"onStopPrinterStateTracking",
			"(Landroid/print/PrinterId;)V",
			arg0.object()
		);
	}
	void PrinterDiscoverySession::onValidatePrinters(JObject arg0)
	{
		callMethod<void>(
			"onValidatePrinters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PrinterDiscoverySession::removePrinters(JObject arg0)
	{
		callMethod<void>(
			"removePrinters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::printservice


#include "../os/CancellationSignal.hpp"
#include "../print/PrinterId.hpp"
#include "./CustomPrinterIconCallback.hpp"
#include "./PrinterDiscoverySession.hpp"

namespace android::printservice
{
	// Fields
	
	// Constructors
	PrinterDiscoverySession::PrinterDiscoverySession()
		: JObject(
			"android.printservice.PrinterDiscoverySession",
			"()V"
		) {}
	
	// Methods
	void PrinterDiscoverySession::addPrinters(JObject arg0) const
	{
		callMethod<void>(
			"addPrinters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	JObject PrinterDiscoverySession::getPrinters() const
	{
		return callObjectMethod(
			"getPrinters",
			"()Ljava/util/List;"
		);
	}
	JObject PrinterDiscoverySession::getTrackedPrinters() const
	{
		return callObjectMethod(
			"getTrackedPrinters",
			"()Ljava/util/List;"
		);
	}
	jboolean PrinterDiscoverySession::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	jboolean PrinterDiscoverySession::isPrinterDiscoveryStarted() const
	{
		return callMethod<jboolean>(
			"isPrinterDiscoveryStarted",
			"()Z"
		);
	}
	void PrinterDiscoverySession::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void PrinterDiscoverySession::onRequestCustomPrinterIcon(android::print::PrinterId arg0, android::os::CancellationSignal arg1, android::printservice::CustomPrinterIconCallback arg2) const
	{
		callMethod<void>(
			"onRequestCustomPrinterIcon",
			"(Landroid/print/PrinterId;Landroid/os/CancellationSignal;Landroid/printservice/CustomPrinterIconCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void PrinterDiscoverySession::onStartPrinterDiscovery(JObject arg0) const
	{
		callMethod<void>(
			"onStartPrinterDiscovery",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PrinterDiscoverySession::onStartPrinterStateTracking(android::print::PrinterId arg0) const
	{
		callMethod<void>(
			"onStartPrinterStateTracking",
			"(Landroid/print/PrinterId;)V",
			arg0.object()
		);
	}
	void PrinterDiscoverySession::onStopPrinterDiscovery() const
	{
		callMethod<void>(
			"onStopPrinterDiscovery",
			"()V"
		);
	}
	void PrinterDiscoverySession::onStopPrinterStateTracking(android::print::PrinterId arg0) const
	{
		callMethod<void>(
			"onStopPrinterStateTracking",
			"(Landroid/print/PrinterId;)V",
			arg0.object()
		);
	}
	void PrinterDiscoverySession::onValidatePrinters(JObject arg0) const
	{
		callMethod<void>(
			"onValidatePrinters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PrinterDiscoverySession::removePrinters(JObject arg0) const
	{
		callMethod<void>(
			"removePrinters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::printservice


#pragma once

#include "../os/CancellationSignal.def.hpp"
#include "../print/PrinterId.def.hpp"
#include "./CustomPrinterIconCallback.def.hpp"
#include "./PrinterDiscoverySession.def.hpp"

namespace android::printservice
{
	// Fields
	
	// Constructors
	inline PrinterDiscoverySession::PrinterDiscoverySession()
		: JObject(
			"android.printservice.PrinterDiscoverySession",
			"()V"
		) {}
	
	// Methods
	inline void PrinterDiscoverySession::addPrinters(JObject arg0) const
	{
		callMethod<void>(
			"addPrinters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline JObject PrinterDiscoverySession::getPrinters() const
	{
		return callObjectMethod(
			"getPrinters",
			"()Ljava/util/List;"
		);
	}
	inline JObject PrinterDiscoverySession::getTrackedPrinters() const
	{
		return callObjectMethod(
			"getTrackedPrinters",
			"()Ljava/util/List;"
		);
	}
	inline jboolean PrinterDiscoverySession::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	inline jboolean PrinterDiscoverySession::isPrinterDiscoveryStarted() const
	{
		return callMethod<jboolean>(
			"isPrinterDiscoveryStarted",
			"()Z"
		);
	}
	inline void PrinterDiscoverySession::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void PrinterDiscoverySession::onRequestCustomPrinterIcon(android::print::PrinterId arg0, android::os::CancellationSignal arg1, android::printservice::CustomPrinterIconCallback arg2) const
	{
		callMethod<void>(
			"onRequestCustomPrinterIcon",
			"(Landroid/print/PrinterId;Landroid/os/CancellationSignal;Landroid/printservice/CustomPrinterIconCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void PrinterDiscoverySession::onStartPrinterDiscovery(JObject arg0) const
	{
		callMethod<void>(
			"onStartPrinterDiscovery",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void PrinterDiscoverySession::onStartPrinterStateTracking(android::print::PrinterId arg0) const
	{
		callMethod<void>(
			"onStartPrinterStateTracking",
			"(Landroid/print/PrinterId;)V",
			arg0.object()
		);
	}
	inline void PrinterDiscoverySession::onStopPrinterDiscovery() const
	{
		callMethod<void>(
			"onStopPrinterDiscovery",
			"()V"
		);
	}
	inline void PrinterDiscoverySession::onStopPrinterStateTracking(android::print::PrinterId arg0) const
	{
		callMethod<void>(
			"onStopPrinterStateTracking",
			"(Landroid/print/PrinterId;)V",
			arg0.object()
		);
	}
	inline void PrinterDiscoverySession::onValidatePrinters(JObject arg0) const
	{
		callMethod<void>(
			"onValidatePrinters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void PrinterDiscoverySession::removePrinters(JObject arg0) const
	{
		callMethod<void>(
			"removePrinters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::printservice

// Base class headers


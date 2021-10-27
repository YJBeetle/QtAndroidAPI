#include "../os/CancellationSignal.hpp"
#include "../print/PrinterId.hpp"
#include "./CustomPrinterIconCallback.hpp"
#include "./PrinterDiscoverySession.hpp"

namespace android::printservice
{
	// Fields
	
	PrinterDiscoverySession::PrinterDiscoverySession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrinterDiscoverySession::PrinterDiscoverySession()
	{
		__thiz = QAndroidJniObject(
			"android.printservice.PrinterDiscoverySession",
			"()V"
		);
	}
	
	// Methods
	void PrinterDiscoverySession::addPrinters(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addPrinters",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PrinterDiscoverySession::getPrinters()
	{
		return __thiz.callObjectMethod(
			"getPrinters",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PrinterDiscoverySession::getTrackedPrinters()
	{
		return __thiz.callObjectMethod(
			"getTrackedPrinters",
			"()Ljava/util/List;"
		);
	}
	jboolean PrinterDiscoverySession::isDestroyed()
	{
		return __thiz.callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	jboolean PrinterDiscoverySession::isPrinterDiscoveryStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isPrinterDiscoveryStarted",
			"()Z"
		);
	}
	void PrinterDiscoverySession::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void PrinterDiscoverySession::onRequestCustomPrinterIcon(android::print::PrinterId arg0, android::os::CancellationSignal arg1, android::printservice::CustomPrinterIconCallback arg2)
	{
		__thiz.callMethod<void>(
			"onRequestCustomPrinterIcon",
			"(Landroid/print/PrinterId;Landroid/os/CancellationSignal;Landroid/printservice/CustomPrinterIconCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void PrinterDiscoverySession::onStartPrinterDiscovery(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onStartPrinterDiscovery",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void PrinterDiscoverySession::onStartPrinterStateTracking(android::print::PrinterId arg0)
	{
		__thiz.callMethod<void>(
			"onStartPrinterStateTracking",
			"(Landroid/print/PrinterId;)V",
			arg0.__jniObject().object()
		);
	}
	void PrinterDiscoverySession::onStopPrinterDiscovery()
	{
		__thiz.callMethod<void>(
			"onStopPrinterDiscovery",
			"()V"
		);
	}
	void PrinterDiscoverySession::onStopPrinterStateTracking(android::print::PrinterId arg0)
	{
		__thiz.callMethod<void>(
			"onStopPrinterStateTracking",
			"(Landroid/print/PrinterId;)V",
			arg0.__jniObject().object()
		);
	}
	void PrinterDiscoverySession::onValidatePrinters(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onValidatePrinters",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void PrinterDiscoverySession::removePrinters(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removePrinters",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::printservice


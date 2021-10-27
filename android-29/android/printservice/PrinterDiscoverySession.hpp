#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::print
{
	class PrinterId;
}
namespace __jni_impl::android::printservice
{
	class CustomPrinterIconCallback;
}

namespace __jni_impl::android::printservice
{
	class PrinterDiscoverySession : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void addPrinters(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getPrinters();
		QAndroidJniObject getTrackedPrinters();
		jboolean isDestroyed();
		jboolean isPrinterDiscoveryStarted();
		void onDestroy();
		void onRequestCustomPrinterIcon(__jni_impl::android::print::PrinterId arg0, __jni_impl::android::os::CancellationSignal arg1, __jni_impl::android::printservice::CustomPrinterIconCallback arg2);
		void onStartPrinterDiscovery(__jni_impl::__JniBaseClass arg0);
		void onStartPrinterStateTracking(__jni_impl::android::print::PrinterId arg0);
		void onStopPrinterDiscovery();
		void onStopPrinterStateTracking(__jni_impl::android::print::PrinterId arg0);
		void onValidatePrinters(__jni_impl::__JniBaseClass arg0);
		void removePrinters(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::printservice

#include "../os/CancellationSignal.hpp"
#include "../print/PrinterId.hpp"
#include "CustomPrinterIconCallback.hpp"

namespace __jni_impl::android::printservice
{
	// Fields
	
	// Constructors
	void PrinterDiscoverySession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.printservice.PrinterDiscoverySession",
			"()V"
		);
	}
	
	// Methods
	void PrinterDiscoverySession::addPrinters(__jni_impl::__JniBaseClass arg0)
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
	void PrinterDiscoverySession::onRequestCustomPrinterIcon(__jni_impl::android::print::PrinterId arg0, __jni_impl::android::os::CancellationSignal arg1, __jni_impl::android::printservice::CustomPrinterIconCallback arg2)
	{
		__thiz.callMethod<void>(
			"onRequestCustomPrinterIcon",
			"(Landroid/print/PrinterId;Landroid/os/CancellationSignal;Landroid/printservice/CustomPrinterIconCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void PrinterDiscoverySession::onStartPrinterDiscovery(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onStartPrinterDiscovery",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void PrinterDiscoverySession::onStartPrinterStateTracking(__jni_impl::android::print::PrinterId arg0)
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
	void PrinterDiscoverySession::onStopPrinterStateTracking(__jni_impl::android::print::PrinterId arg0)
	{
		__thiz.callMethod<void>(
			"onStopPrinterStateTracking",
			"(Landroid/print/PrinterId;)V",
			arg0.__jniObject().object()
		);
	}
	void PrinterDiscoverySession::onValidatePrinters(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onValidatePrinters",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void PrinterDiscoverySession::removePrinters(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removePrinters",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::printservice

namespace android::printservice
{
	class PrinterDiscoverySession : public __jni_impl::android::printservice::PrinterDiscoverySession
	{
	public:
		PrinterDiscoverySession(QAndroidJniObject obj) { __thiz = obj; }
		PrinterDiscoverySession()
		{
			__constructor();
		}
	};
} // namespace android::printservice


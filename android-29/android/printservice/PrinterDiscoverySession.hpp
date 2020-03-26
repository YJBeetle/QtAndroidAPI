#pragma once

#ifndef ANDROID_PRINTSERVICE_PRINTERDISCOVERYSESSION
#define ANDROID_PRINTSERVICE_PRINTERDISCOVERYSESSION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrinterId;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
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
		jboolean isDestroyed();
		void onDestroy();
		QAndroidJniObject getPrinters();
		void addPrinters(__jni_impl::__JniBaseClass arg0);
		void removePrinters(__jni_impl::__JniBaseClass arg0);
		void onStartPrinterDiscovery(__jni_impl::__JniBaseClass arg0);
		void onStopPrinterDiscovery();
		void onValidatePrinters(__jni_impl::__JniBaseClass arg0);
		void onStartPrinterStateTracking(__jni_impl::android::print::PrinterId arg0);
		void onRequestCustomPrinterIcon(__jni_impl::android::print::PrinterId arg0, __jni_impl::android::os::CancellationSignal arg1, __jni_impl::android::printservice::CustomPrinterIconCallback arg2);
		void onStopPrinterStateTracking(__jni_impl::android::print::PrinterId arg0);
		QAndroidJniObject getTrackedPrinters();
		jboolean isPrinterDiscoveryStarted();
	};
} // namespace __jni_impl::android::printservice

#include "../print/PrinterId.hpp"
#include "../os/CancellationSignal.hpp"
#include "CustomPrinterIconCallback.hpp"

namespace __jni_impl::android::printservice
{
	// Fields
	
	// Constructors
	void PrinterDiscoverySession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.printservice.PrinterDiscoverySession",
			"()V");
	}
	
	// Methods
	jboolean PrinterDiscoverySession::isDestroyed()
	{
		return __thiz.callMethod<jboolean>(
			"isDestroyed",
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
	QAndroidJniObject PrinterDiscoverySession::getPrinters()
	{
		return __thiz.callObjectMethod(
			"getPrinters",
			"()Ljava/util/List;"
		);
	}
	void PrinterDiscoverySession::addPrinters(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addPrinters",
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
	void PrinterDiscoverySession::onStartPrinterDiscovery(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onStartPrinterDiscovery",
			"(Ljava/util/List;)V",
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
	void PrinterDiscoverySession::onValidatePrinters(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onValidatePrinters",
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
	void PrinterDiscoverySession::onStopPrinterStateTracking(__jni_impl::android::print::PrinterId arg0)
	{
		__thiz.callMethod<void>(
			"onStopPrinterStateTracking",
			"(Landroid/print/PrinterId;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PrinterDiscoverySession::getTrackedPrinters()
	{
		return __thiz.callObjectMethod(
			"getTrackedPrinters",
			"()Ljava/util/List;"
		);
	}
	jboolean PrinterDiscoverySession::isPrinterDiscoveryStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isPrinterDiscoveryStarted",
			"()Z"
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

#endif // ANDROID_PRINTSERVICE_PRINTERDISCOVERYSESSION


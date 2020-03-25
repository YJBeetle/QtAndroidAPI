#pragma once

#ifndef ANDROID_PRINTSERVICE_PRINTSERVICE
#define ANDROID_PRINTSERVICE_PRINTSERVICE

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::printservice
{
	class PrinterDiscoverySession;
}
namespace __jni_impl::android::printservice
{
	class PrintJob;
}
namespace __jni_impl::android::print
{
	class PrinterId;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::printservice
{
	class PrintService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject EXTRA_CAN_SELECT_PRINTER();
		static QAndroidJniObject EXTRA_PRINTER_INFO();
		static QAndroidJniObject EXTRA_PRINT_DOCUMENT_INFO();
		static QAndroidJniObject EXTRA_PRINT_JOB_INFO();
		static QAndroidJniObject EXTRA_SELECT_PRINTER();
		static QAndroidJniObject SERVICE_INTERFACE();
		static QAndroidJniObject SERVICE_META_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject getActivePrintJobs();
		QAndroidJniObject generatePrinterId(jstring arg0);
	};
} // namespace __jni_impl::android::printservice

#include "../content/Intent.hpp"
#include "PrinterDiscoverySession.hpp"
#include "PrintJob.hpp"
#include "../print/PrinterId.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::printservice
{
	// Fields
	QAndroidJniObject PrintService::EXTRA_CAN_SELECT_PRINTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_CAN_SELECT_PRINTER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PrintService::EXTRA_PRINTER_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_PRINTER_INFO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PrintService::EXTRA_PRINT_DOCUMENT_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_PRINT_DOCUMENT_INFO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PrintService::EXTRA_PRINT_JOB_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_PRINT_JOB_INFO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PrintService::EXTRA_SELECT_PRINTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_SELECT_PRINTER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PrintService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PrintService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void PrintService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.printservice.PrintService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject PrintService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PrintService::getActivePrintJobs()
	{
		return __thiz.callObjectMethod(
			"getActivePrintJobs",
			"()Ljava/util/List;");
	}
	QAndroidJniObject PrintService::generatePrinterId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"generatePrinterId",
			"(Ljava/lang/String;)Landroid/print/PrinterId;",
			arg0);
	}
} // namespace __jni_impl::android::printservice

namespace android::printservice
{
	class PrintService : public __jni_impl::android::printservice::PrintService
	{
	public:
		PrintService(QAndroidJniObject obj) { __thiz = obj; }
		PrintService()
		{
			__constructor();
		}
	};
} // namespace android::printservice

#endif // ANDROID_PRINTSERVICE_PRINTSERVICE


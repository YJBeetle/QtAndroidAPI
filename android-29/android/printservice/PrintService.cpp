#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../print/PrinterId.hpp"
#include "./PrintJob.hpp"
#include "./PrinterDiscoverySession.hpp"
#include "./PrintService.hpp"

namespace android::printservice
{
	// Fields
	jstring PrintService::EXTRA_CAN_SELECT_PRINTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_CAN_SELECT_PRINTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PrintService::EXTRA_PRINTER_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_PRINTER_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PrintService::EXTRA_PRINT_DOCUMENT_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_PRINT_DOCUMENT_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PrintService::EXTRA_PRINT_JOB_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_PRINT_JOB_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PrintService::EXTRA_SELECT_PRINTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_SELECT_PRINTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PrintService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PrintService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.printservice.PrintService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	PrintService::PrintService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrintService::PrintService()
	{
		__thiz = QAndroidJniObject(
			"android.printservice.PrintService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject PrintService::generatePrinterId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"generatePrinterId",
			"(Ljava/lang/String;)Landroid/print/PrinterId;",
			arg0
		);
	}
	QAndroidJniObject PrintService::generatePrinterId(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"generatePrinterId",
			"(Ljava/lang/String;)Landroid/print/PrinterId;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PrintService::getActivePrintJobs()
	{
		return __thiz.callObjectMethod(
			"getActivePrintJobs",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PrintService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::printservice


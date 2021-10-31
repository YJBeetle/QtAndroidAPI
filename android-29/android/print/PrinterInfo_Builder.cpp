#include "../app/PendingIntent.hpp"
#include "./PrinterCapabilitiesInfo.hpp"
#include "./PrinterId.hpp"
#include "./PrinterInfo.hpp"
#include "./PrinterInfo_Builder.hpp"

namespace android::print
{
	// Fields
	
	PrinterInfo_Builder::PrinterInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrinterInfo_Builder::PrinterInfo_Builder(android::print::PrinterInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterInfo$Builder",
			"(Landroid/print/PrinterInfo;)V",
			arg0.__jniObject().object()
		);
	}
	PrinterInfo_Builder::PrinterInfo_Builder(android::print::PrinterId arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterInfo$Builder",
			"(Landroid/print/PrinterId;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject PrinterInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/print/PrinterInfo;"
		);
	}
	QAndroidJniObject PrinterInfo_Builder::setCapabilities(android::print::PrinterCapabilitiesInfo arg0)
	{
		return __thiz.callObjectMethod(
			"setCapabilities",
			"(Landroid/print/PrinterCapabilitiesInfo;)Landroid/print/PrinterInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PrinterInfo_Builder::setDescription(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/String;)Landroid/print/PrinterInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrinterInfo_Builder::setHasCustomPrinterIcon(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHasCustomPrinterIcon",
			"(Z)Landroid/print/PrinterInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrinterInfo_Builder::setIconResourceId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setIconResourceId",
			"(I)Landroid/print/PrinterInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrinterInfo_Builder::setInfoIntent(android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setInfoIntent",
			"(Landroid/app/PendingIntent;)Landroid/print/PrinterInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PrinterInfo_Builder::setName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/print/PrinterInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrinterInfo_Builder::setStatus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setStatus",
			"(I)Landroid/print/PrinterInfo$Builder;",
			arg0
		);
	}
} // namespace android::print


#pragma once

#ifndef ANDROID_PRINT_PRINTERINFO_BUILDER
#define ANDROID_PRINT_PRINTERINFO_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrinterId;
}
namespace __jni_impl::android::print
{
	class PrinterInfo;
}
namespace __jni_impl::android::print
{
	class PrinterCapabilitiesInfo;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}

namespace __jni_impl::android::print
{
	class PrinterInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::print::PrinterId arg0, jstring arg1, jint arg2);
		void __constructor(__jni_impl::android::print::PrinterInfo arg0);
		
		// Methods
		QAndroidJniObject setName(jstring arg0);
		QAndroidJniObject build();
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setCapabilities(__jni_impl::android::print::PrinterCapabilitiesInfo arg0);
		QAndroidJniObject setStatus(jint arg0);
		QAndroidJniObject setIconResourceId(jint arg0);
		QAndroidJniObject setHasCustomPrinterIcon(jboolean arg0);
		QAndroidJniObject setInfoIntent(__jni_impl::android::app::PendingIntent arg0);
	};
} // namespace __jni_impl::android::print

#include "PrinterId.hpp"
#include "PrinterInfo.hpp"
#include "PrinterCapabilitiesInfo.hpp"
#include "../app/PendingIntent.hpp"

namespace __jni_impl::android::print
{
	// Fields
	
	// Constructors
	void PrinterInfo_Builder::__constructor(__jni_impl::android::print::PrinterId arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterInfo$Builder",
			"(Landroid/print/PrinterId;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void PrinterInfo_Builder::__constructor(__jni_impl::android::print::PrinterInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterInfo$Builder",
			"(Landroid/print/PrinterInfo;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject PrinterInfo_Builder::setName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/print/PrinterInfo$Builder;",
			arg0);
	}
	QAndroidJniObject PrinterInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/print/PrinterInfo;");
	}
	QAndroidJniObject PrinterInfo_Builder::setDescription(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/String;)Landroid/print/PrinterInfo$Builder;",
			arg0);
	}
	QAndroidJniObject PrinterInfo_Builder::setCapabilities(__jni_impl::android::print::PrinterCapabilitiesInfo arg0)
	{
		return __thiz.callObjectMethod(
			"setCapabilities",
			"(Landroid/print/PrinterCapabilitiesInfo;)Landroid/print/PrinterInfo$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PrinterInfo_Builder::setStatus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setStatus",
			"(I)Landroid/print/PrinterInfo$Builder;",
			arg0);
	}
	QAndroidJniObject PrinterInfo_Builder::setIconResourceId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setIconResourceId",
			"(I)Landroid/print/PrinterInfo$Builder;",
			arg0);
	}
	QAndroidJniObject PrinterInfo_Builder::setHasCustomPrinterIcon(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHasCustomPrinterIcon",
			"(Z)Landroid/print/PrinterInfo$Builder;",
			arg0);
	}
	QAndroidJniObject PrinterInfo_Builder::setInfoIntent(__jni_impl::android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setInfoIntent",
			"(Landroid/app/PendingIntent;)Landroid/print/PrinterInfo$Builder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrinterInfo_Builder : public __jni_impl::android::print::PrinterInfo_Builder
	{
	public:
		PrinterInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PrinterInfo_Builder(__jni_impl::android::print::PrinterId arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		PrinterInfo_Builder(__jni_impl::android::print::PrinterInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTERINFO_BUILDER


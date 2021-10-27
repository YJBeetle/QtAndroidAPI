#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::print
{
	class PrinterCapabilitiesInfo;
}
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
	class PrinterInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::print::PrinterInfo arg0);
		void __constructor(__jni_impl::android::print::PrinterId arg0, jstring arg1, jint arg2);
		void __constructor(__jni_impl::android::print::PrinterId arg0, const QString &arg1, jint arg2);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setCapabilities(__jni_impl::android::print::PrinterCapabilitiesInfo arg0);
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setDescription(const QString &arg0);
		QAndroidJniObject setHasCustomPrinterIcon(jboolean arg0);
		QAndroidJniObject setIconResourceId(jint arg0);
		QAndroidJniObject setInfoIntent(__jni_impl::android::app::PendingIntent arg0);
		QAndroidJniObject setName(jstring arg0);
		QAndroidJniObject setName(const QString &arg0);
		QAndroidJniObject setStatus(jint arg0);
	};
} // namespace __jni_impl::android::print

#include "../app/PendingIntent.hpp"
#include "./PrinterCapabilitiesInfo.hpp"
#include "./PrinterId.hpp"
#include "./PrinterInfo.hpp"

namespace __jni_impl::android::print
{
	// Fields
	
	// Constructors
	void PrinterInfo_Builder::__constructor(__jni_impl::android::print::PrinterInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterInfo$Builder",
			"(Landroid/print/PrinterInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void PrinterInfo_Builder::__constructor(__jni_impl::android::print::PrinterId arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterInfo$Builder",
			"(Landroid/print/PrinterId;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void PrinterInfo_Builder::__constructor(__jni_impl::android::print::PrinterId arg0, const QString &arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterInfo$Builder",
			"(Landroid/print/PrinterId;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
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
	QAndroidJniObject PrinterInfo_Builder::setCapabilities(__jni_impl::android::print::PrinterCapabilitiesInfo arg0)
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
	QAndroidJniObject PrinterInfo_Builder::setDescription(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/String;)Landroid/print/PrinterInfo$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject PrinterInfo_Builder::setInfoIntent(__jni_impl::android::app::PendingIntent arg0)
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
	QAndroidJniObject PrinterInfo_Builder::setName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/print/PrinterInfo$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrinterInfo_Builder : public __jni_impl::android::print::PrinterInfo_Builder
	{
	public:
		PrinterInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PrinterInfo_Builder(__jni_impl::android::print::PrinterInfo arg0)
		{
			__constructor(
				arg0);
		}
		PrinterInfo_Builder(__jni_impl::android::print::PrinterId arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::print


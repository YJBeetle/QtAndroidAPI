#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintAttributes_Margins;
}
namespace __jni_impl::android::print
{
	class PrintAttributes_MediaSize;
}
namespace __jni_impl::android::print
{
	class PrintAttributes_Resolution;
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
	class PrinterCapabilitiesInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::print::PrinterId arg0);
		
		// Methods
		QAndroidJniObject addMediaSize(__jni_impl::android::print::PrintAttributes_MediaSize arg0, jboolean arg1);
		QAndroidJniObject addResolution(__jni_impl::android::print::PrintAttributes_Resolution arg0, jboolean arg1);
		QAndroidJniObject build();
		QAndroidJniObject setColorModes(jint arg0, jint arg1);
		QAndroidJniObject setDuplexModes(jint arg0, jint arg1);
		QAndroidJniObject setMinMargins(__jni_impl::android::print::PrintAttributes_Margins arg0);
	};
} // namespace __jni_impl::android::print

#include "./PrintAttributes_Margins.hpp"
#include "./PrintAttributes_MediaSize.hpp"
#include "./PrintAttributes_Resolution.hpp"
#include "./PrinterCapabilitiesInfo.hpp"
#include "./PrinterId.hpp"

namespace __jni_impl::android::print
{
	// Fields
	
	// Constructors
	void PrinterCapabilitiesInfo_Builder::__constructor(__jni_impl::android::print::PrinterId arg0)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterCapabilitiesInfo$Builder",
			"(Landroid/print/PrinterId;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PrinterCapabilitiesInfo_Builder::addMediaSize(__jni_impl::android::print::PrintAttributes_MediaSize arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"addMediaSize",
			"(Landroid/print/PrintAttributes$MediaSize;Z)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo_Builder::addResolution(__jni_impl::android::print::PrintAttributes_Resolution arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"addResolution",
			"(Landroid/print/PrintAttributes$Resolution;Z)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/print/PrinterCapabilitiesInfo;"
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo_Builder::setColorModes(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setColorModes",
			"(II)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo_Builder::setDuplexModes(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setDuplexModes",
			"(II)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo_Builder::setMinMargins(__jni_impl::android::print::PrintAttributes_Margins arg0)
	{
		return __thiz.callObjectMethod(
			"setMinMargins",
			"(Landroid/print/PrintAttributes$Margins;)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrinterCapabilitiesInfo_Builder : public __jni_impl::android::print::PrinterCapabilitiesInfo_Builder
	{
	public:
		PrinterCapabilitiesInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PrinterCapabilitiesInfo_Builder(__jni_impl::android::print::PrinterId arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::print


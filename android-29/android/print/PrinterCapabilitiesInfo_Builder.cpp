#include "./PrintAttributes_Margins.hpp"
#include "./PrintAttributes_MediaSize.hpp"
#include "./PrintAttributes_Resolution.hpp"
#include "./PrinterCapabilitiesInfo.hpp"
#include "./PrinterId.hpp"
#include "./PrinterCapabilitiesInfo_Builder.hpp"

namespace android::print
{
	// Fields
	
	PrinterCapabilitiesInfo_Builder::PrinterCapabilitiesInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrinterCapabilitiesInfo_Builder::PrinterCapabilitiesInfo_Builder(android::print::PrinterId &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterCapabilitiesInfo$Builder",
			"(Landroid/print/PrinterId;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PrinterCapabilitiesInfo_Builder::addMediaSize(android::print::PrintAttributes_MediaSize arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"addMediaSize",
			"(Landroid/print/PrintAttributes$MediaSize;Z)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo_Builder::addResolution(android::print::PrintAttributes_Resolution arg0, jboolean arg1)
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
	QAndroidJniObject PrinterCapabilitiesInfo_Builder::setMinMargins(android::print::PrintAttributes_Margins arg0)
	{
		return __thiz.callObjectMethod(
			"setMinMargins",
			"(Landroid/print/PrintAttributes$Margins;)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::print


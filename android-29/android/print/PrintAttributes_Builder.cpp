#include "./PrintAttributes.hpp"
#include "./PrintAttributes_Margins.hpp"
#include "./PrintAttributes_MediaSize.hpp"
#include "./PrintAttributes_Resolution.hpp"
#include "./PrintAttributes_Builder.hpp"

namespace android::print
{
	// Fields
	
	PrintAttributes_Builder::PrintAttributes_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrintAttributes_Builder::PrintAttributes_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintAttributes$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject PrintAttributes_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/print/PrintAttributes;"
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setColorMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setColorMode",
			"(I)Landroid/print/PrintAttributes$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setDuplexMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setDuplexMode",
			"(I)Landroid/print/PrintAttributes$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setMediaSize(android::print::PrintAttributes_MediaSize arg0)
	{
		return __thiz.callObjectMethod(
			"setMediaSize",
			"(Landroid/print/PrintAttributes$MediaSize;)Landroid/print/PrintAttributes$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setMinMargins(android::print::PrintAttributes_Margins arg0)
	{
		return __thiz.callObjectMethod(
			"setMinMargins",
			"(Landroid/print/PrintAttributes$Margins;)Landroid/print/PrintAttributes$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setResolution(android::print::PrintAttributes_Resolution arg0)
	{
		return __thiz.callObjectMethod(
			"setResolution",
			"(Landroid/print/PrintAttributes$Resolution;)Landroid/print/PrintAttributes$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::print


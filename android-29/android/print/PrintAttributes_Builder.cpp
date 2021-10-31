#include "./PrintAttributes.hpp"
#include "./PrintAttributes_Margins.hpp"
#include "./PrintAttributes_MediaSize.hpp"
#include "./PrintAttributes_Resolution.hpp"
#include "./PrintAttributes_Builder.hpp"

namespace android::print
{
	// Fields
	
	// QAndroidJniObject forward
	PrintAttributes_Builder::PrintAttributes_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PrintAttributes_Builder::PrintAttributes_Builder()
		: __JniBaseClass(
			"android.print.PrintAttributes$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject PrintAttributes_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/print/PrintAttributes;"
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setColorMode(jint arg0)
	{
		return callObjectMethod(
			"setColorMode",
			"(I)Landroid/print/PrintAttributes$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setDuplexMode(jint arg0)
	{
		return callObjectMethod(
			"setDuplexMode",
			"(I)Landroid/print/PrintAttributes$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setMediaSize(android::print::PrintAttributes_MediaSize arg0)
	{
		return callObjectMethod(
			"setMediaSize",
			"(Landroid/print/PrintAttributes$MediaSize;)Landroid/print/PrintAttributes$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setMinMargins(android::print::PrintAttributes_Margins arg0)
	{
		return callObjectMethod(
			"setMinMargins",
			"(Landroid/print/PrintAttributes$Margins;)Landroid/print/PrintAttributes$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setResolution(android::print::PrintAttributes_Resolution arg0)
	{
		return callObjectMethod(
			"setResolution",
			"(Landroid/print/PrintAttributes$Resolution;)Landroid/print/PrintAttributes$Builder;",
			arg0.object()
		);
	}
} // namespace android::print


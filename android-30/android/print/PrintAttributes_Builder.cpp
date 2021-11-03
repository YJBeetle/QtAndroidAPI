#include "./PrintAttributes.hpp"
#include "./PrintAttributes_Margins.hpp"
#include "./PrintAttributes_MediaSize.hpp"
#include "./PrintAttributes_Resolution.hpp"
#include "./PrintAttributes_Builder.hpp"

namespace android::print
{
	// Fields
	
	// QJniObject forward
	PrintAttributes_Builder::PrintAttributes_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PrintAttributes_Builder::PrintAttributes_Builder()
		: JObject(
			"android.print.PrintAttributes$Builder",
			"()V"
		) {}
	
	// Methods
	android::print::PrintAttributes PrintAttributes_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/print/PrintAttributes;"
		);
	}
	android::print::PrintAttributes_Builder PrintAttributes_Builder::setColorMode(jint arg0) const
	{
		return callObjectMethod(
			"setColorMode",
			"(I)Landroid/print/PrintAttributes$Builder;",
			arg0
		);
	}
	android::print::PrintAttributes_Builder PrintAttributes_Builder::setDuplexMode(jint arg0) const
	{
		return callObjectMethod(
			"setDuplexMode",
			"(I)Landroid/print/PrintAttributes$Builder;",
			arg0
		);
	}
	android::print::PrintAttributes_Builder PrintAttributes_Builder::setMediaSize(android::print::PrintAttributes_MediaSize arg0) const
	{
		return callObjectMethod(
			"setMediaSize",
			"(Landroid/print/PrintAttributes$MediaSize;)Landroid/print/PrintAttributes$Builder;",
			arg0.object()
		);
	}
	android::print::PrintAttributes_Builder PrintAttributes_Builder::setMinMargins(android::print::PrintAttributes_Margins arg0) const
	{
		return callObjectMethod(
			"setMinMargins",
			"(Landroid/print/PrintAttributes$Margins;)Landroid/print/PrintAttributes$Builder;",
			arg0.object()
		);
	}
	android::print::PrintAttributes_Builder PrintAttributes_Builder::setResolution(android::print::PrintAttributes_Resolution arg0) const
	{
		return callObjectMethod(
			"setResolution",
			"(Landroid/print/PrintAttributes$Resolution;)Landroid/print/PrintAttributes$Builder;",
			arg0.object()
		);
	}
} // namespace android::print


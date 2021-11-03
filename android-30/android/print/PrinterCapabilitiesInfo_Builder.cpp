#include "./PrintAttributes_Margins.hpp"
#include "./PrintAttributes_MediaSize.hpp"
#include "./PrintAttributes_Resolution.hpp"
#include "./PrinterCapabilitiesInfo.hpp"
#include "./PrinterId.hpp"
#include "./PrinterCapabilitiesInfo_Builder.hpp"

namespace android::print
{
	// Fields
	
	// QJniObject forward
	PrinterCapabilitiesInfo_Builder::PrinterCapabilitiesInfo_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PrinterCapabilitiesInfo_Builder::PrinterCapabilitiesInfo_Builder(android::print::PrinterId arg0)
		: JObject(
			"android.print.PrinterCapabilitiesInfo$Builder",
			"(Landroid/print/PrinterId;)V",
			arg0.object()
		) {}
	
	// Methods
	android::print::PrinterCapabilitiesInfo_Builder PrinterCapabilitiesInfo_Builder::addMediaSize(android::print::PrintAttributes_MediaSize arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"addMediaSize",
			"(Landroid/print/PrintAttributes$MediaSize;Z)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::print::PrinterCapabilitiesInfo_Builder PrinterCapabilitiesInfo_Builder::addResolution(android::print::PrintAttributes_Resolution arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"addResolution",
			"(Landroid/print/PrintAttributes$Resolution;Z)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::print::PrinterCapabilitiesInfo PrinterCapabilitiesInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/print/PrinterCapabilitiesInfo;"
		);
	}
	android::print::PrinterCapabilitiesInfo_Builder PrinterCapabilitiesInfo_Builder::setColorModes(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setColorModes",
			"(II)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0,
			arg1
		);
	}
	android::print::PrinterCapabilitiesInfo_Builder PrinterCapabilitiesInfo_Builder::setDuplexModes(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setDuplexModes",
			"(II)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0,
			arg1
		);
	}
	android::print::PrinterCapabilitiesInfo_Builder PrinterCapabilitiesInfo_Builder::setMinMargins(android::print::PrintAttributes_Margins arg0) const
	{
		return callObjectMethod(
			"setMinMargins",
			"(Landroid/print/PrintAttributes$Margins;)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::print


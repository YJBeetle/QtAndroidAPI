#pragma once

#include "./PrintAttributes_Margins.def.hpp"
#include "./PrintAttributes_MediaSize.def.hpp"
#include "./PrintAttributes_Resolution.def.hpp"
#include "./PrinterCapabilitiesInfo.def.hpp"
#include "./PrinterId.def.hpp"
#include "./PrinterCapabilitiesInfo_Builder.def.hpp"

namespace android::print
{
	// Fields
	
	// Constructors
	inline PrinterCapabilitiesInfo_Builder::PrinterCapabilitiesInfo_Builder(android::print::PrinterId arg0)
		: JObject(
			"android.print.PrinterCapabilitiesInfo$Builder",
			"(Landroid/print/PrinterId;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::print::PrinterCapabilitiesInfo_Builder PrinterCapabilitiesInfo_Builder::addMediaSize(android::print::PrintAttributes_MediaSize arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"addMediaSize",
			"(Landroid/print/PrintAttributes$MediaSize;Z)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0.object(),
			arg1
		);
	}
	inline android::print::PrinterCapabilitiesInfo_Builder PrinterCapabilitiesInfo_Builder::addResolution(android::print::PrintAttributes_Resolution arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"addResolution",
			"(Landroid/print/PrintAttributes$Resolution;Z)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0.object(),
			arg1
		);
	}
	inline android::print::PrinterCapabilitiesInfo PrinterCapabilitiesInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/print/PrinterCapabilitiesInfo;"
		);
	}
	inline android::print::PrinterCapabilitiesInfo_Builder PrinterCapabilitiesInfo_Builder::setColorModes(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setColorModes",
			"(II)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0,
			arg1
		);
	}
	inline android::print::PrinterCapabilitiesInfo_Builder PrinterCapabilitiesInfo_Builder::setDuplexModes(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setDuplexModes",
			"(II)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0,
			arg1
		);
	}
	inline android::print::PrinterCapabilitiesInfo_Builder PrinterCapabilitiesInfo_Builder::setMinMargins(android::print::PrintAttributes_Margins arg0) const
	{
		return callObjectMethod(
			"setMinMargins",
			"(Landroid/print/PrintAttributes$Margins;)Landroid/print/PrinterCapabilitiesInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::print

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::print;
#endif

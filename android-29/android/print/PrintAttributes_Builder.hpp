#pragma once

#include "./PrintAttributes.def.hpp"
#include "./PrintAttributes_Margins.def.hpp"
#include "./PrintAttributes_MediaSize.def.hpp"
#include "./PrintAttributes_Resolution.def.hpp"
#include "./PrintAttributes_Builder.def.hpp"

namespace android::print
{
	// Fields
	
	// Constructors
	inline PrintAttributes_Builder::PrintAttributes_Builder()
		: JObject(
			"android.print.PrintAttributes$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::print::PrintAttributes PrintAttributes_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/print/PrintAttributes;"
		);
	}
	inline android::print::PrintAttributes_Builder PrintAttributes_Builder::setColorMode(jint arg0) const
	{
		return callObjectMethod(
			"setColorMode",
			"(I)Landroid/print/PrintAttributes$Builder;",
			arg0
		);
	}
	inline android::print::PrintAttributes_Builder PrintAttributes_Builder::setDuplexMode(jint arg0) const
	{
		return callObjectMethod(
			"setDuplexMode",
			"(I)Landroid/print/PrintAttributes$Builder;",
			arg0
		);
	}
	inline android::print::PrintAttributes_Builder PrintAttributes_Builder::setMediaSize(android::print::PrintAttributes_MediaSize arg0) const
	{
		return callObjectMethod(
			"setMediaSize",
			"(Landroid/print/PrintAttributes$MediaSize;)Landroid/print/PrintAttributes$Builder;",
			arg0.object()
		);
	}
	inline android::print::PrintAttributes_Builder PrintAttributes_Builder::setMinMargins(android::print::PrintAttributes_Margins arg0) const
	{
		return callObjectMethod(
			"setMinMargins",
			"(Landroid/print/PrintAttributes$Margins;)Landroid/print/PrintAttributes$Builder;",
			arg0.object()
		);
	}
	inline android::print::PrintAttributes_Builder PrintAttributes_Builder::setResolution(android::print::PrintAttributes_Resolution arg0) const
	{
		return callObjectMethod(
			"setResolution",
			"(Landroid/print/PrintAttributes$Resolution;)Landroid/print/PrintAttributes$Builder;",
			arg0.object()
		);
	}
} // namespace android::print

// Base class headers


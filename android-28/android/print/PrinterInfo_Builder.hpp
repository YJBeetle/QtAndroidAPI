#pragma once

#include "../app/PendingIntent.def.hpp"
#include "./PrinterCapabilitiesInfo.def.hpp"
#include "./PrinterId.def.hpp"
#include "./PrinterInfo.def.hpp"
#include "../../JString.hpp"
#include "./PrinterInfo_Builder.def.hpp"

namespace android::print
{
	// Fields
	
	// Constructors
	inline PrinterInfo_Builder::PrinterInfo_Builder(android::print::PrinterInfo arg0)
		: JObject(
			"android.print.PrinterInfo$Builder",
			"(Landroid/print/PrinterInfo;)V",
			arg0.object()
		) {}
	inline PrinterInfo_Builder::PrinterInfo_Builder(android::print::PrinterId arg0, JString arg1, jint arg2)
		: JObject(
			"android.print.PrinterInfo$Builder",
			"(Landroid/print/PrinterId;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline android::print::PrinterInfo PrinterInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/print/PrinterInfo;"
		);
	}
	inline android::print::PrinterInfo_Builder PrinterInfo_Builder::setCapabilities(android::print::PrinterCapabilitiesInfo arg0) const
	{
		return callObjectMethod(
			"setCapabilities",
			"(Landroid/print/PrinterCapabilitiesInfo;)Landroid/print/PrinterInfo$Builder;",
			arg0.object()
		);
	}
	inline android::print::PrinterInfo_Builder PrinterInfo_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/String;)Landroid/print/PrinterInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::print::PrinterInfo_Builder PrinterInfo_Builder::setHasCustomPrinterIcon(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasCustomPrinterIcon",
			"(Z)Landroid/print/PrinterInfo$Builder;",
			arg0
		);
	}
	inline android::print::PrinterInfo_Builder PrinterInfo_Builder::setIconResourceId(jint arg0) const
	{
		return callObjectMethod(
			"setIconResourceId",
			"(I)Landroid/print/PrinterInfo$Builder;",
			arg0
		);
	}
	inline android::print::PrinterInfo_Builder PrinterInfo_Builder::setInfoIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setInfoIntent",
			"(Landroid/app/PendingIntent;)Landroid/print/PrinterInfo$Builder;",
			arg0.object()
		);
	}
	inline android::print::PrinterInfo_Builder PrinterInfo_Builder::setName(JString arg0) const
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/print/PrinterInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::print::PrinterInfo_Builder PrinterInfo_Builder::setStatus(jint arg0) const
	{
		return callObjectMethod(
			"setStatus",
			"(I)Landroid/print/PrinterInfo$Builder;",
			arg0
		);
	}
} // namespace android::print

// Base class headers


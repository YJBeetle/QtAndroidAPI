#pragma once

#include "../../JArray.hpp"
#include "./PrintAttributes.def.hpp"
#include "./PrintJobInfo.def.hpp"
#include "../../JString.hpp"
#include "./PrintJobInfo_Builder.def.hpp"

namespace android::print
{
	// Fields
	
	// Constructors
	inline PrintJobInfo_Builder::PrintJobInfo_Builder(android::print::PrintJobInfo arg0)
		: JObject(
			"android.print.PrintJobInfo$Builder",
			"(Landroid/print/PrintJobInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::print::PrintJobInfo PrintJobInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/print/PrintJobInfo;"
		);
	}
	inline void PrintJobInfo_Builder::putAdvancedOption(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"putAdvancedOption",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void PrintJobInfo_Builder::putAdvancedOption(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"putAdvancedOption",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void PrintJobInfo_Builder::setAttributes(android::print::PrintAttributes arg0) const
	{
		callMethod<void>(
			"setAttributes",
			"(Landroid/print/PrintAttributes;)V",
			arg0.object()
		);
	}
	inline void PrintJobInfo_Builder::setCopies(jint arg0) const
	{
		callMethod<void>(
			"setCopies",
			"(I)V",
			arg0
		);
	}
	inline void PrintJobInfo_Builder::setPages(JArray arg0) const
	{
		callMethod<void>(
			"setPages",
			"([Landroid/print/PageRange;)V",
			arg0.object<jarray>()
		);
	}
} // namespace android::print

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::print;
#endif

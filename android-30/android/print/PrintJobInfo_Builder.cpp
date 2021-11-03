#include "../../JArray.hpp"
#include "./PrintAttributes.hpp"
#include "./PrintJobInfo.hpp"
#include "../../JString.hpp"
#include "./PrintJobInfo_Builder.hpp"

namespace android::print
{
	// Fields
	
	// QJniObject forward
	PrintJobInfo_Builder::PrintJobInfo_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PrintJobInfo_Builder::PrintJobInfo_Builder(android::print::PrintJobInfo arg0)
		: JObject(
			"android.print.PrintJobInfo$Builder",
			"(Landroid/print/PrintJobInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	android::print::PrintJobInfo PrintJobInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/print/PrintJobInfo;"
		);
	}
	void PrintJobInfo_Builder::putAdvancedOption(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"putAdvancedOption",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void PrintJobInfo_Builder::putAdvancedOption(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"putAdvancedOption",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void PrintJobInfo_Builder::setAttributes(android::print::PrintAttributes arg0) const
	{
		callMethod<void>(
			"setAttributes",
			"(Landroid/print/PrintAttributes;)V",
			arg0.object()
		);
	}
	void PrintJobInfo_Builder::setCopies(jint arg0) const
	{
		callMethod<void>(
			"setCopies",
			"(I)V",
			arg0
		);
	}
	void PrintJobInfo_Builder::setPages(JArray arg0) const
	{
		callMethod<void>(
			"setPages",
			"([Landroid/print/PageRange;)V",
			arg0.object<jarray>()
		);
	}
} // namespace android::print


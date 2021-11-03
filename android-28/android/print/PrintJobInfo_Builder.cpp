#include "./PrintAttributes.hpp"
#include "./PrintJobInfo.hpp"
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
	android::print::PrintJobInfo PrintJobInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/print/PrintJobInfo;"
		);
	}
	void PrintJobInfo_Builder::putAdvancedOption(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"putAdvancedOption",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void PrintJobInfo_Builder::putAdvancedOption(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"putAdvancedOption",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void PrintJobInfo_Builder::setAttributes(android::print::PrintAttributes arg0)
	{
		callMethod<void>(
			"setAttributes",
			"(Landroid/print/PrintAttributes;)V",
			arg0.object()
		);
	}
	void PrintJobInfo_Builder::setCopies(jint arg0)
	{
		callMethod<void>(
			"setCopies",
			"(I)V",
			arg0
		);
	}
	void PrintJobInfo_Builder::setPages(jarray arg0)
	{
		callMethod<void>(
			"setPages",
			"([Landroid/print/PageRange;)V",
			arg0
		);
	}
} // namespace android::print


#include "./PrintAttributes.hpp"
#include "./PrintJobInfo.hpp"
#include "./PrintJobInfo_Builder.hpp"

namespace android::print
{
	// Fields
	
	PrintJobInfo_Builder::PrintJobInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrintJobInfo_Builder::PrintJobInfo_Builder(android::print::PrintJobInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintJobInfo$Builder",
			"(Landroid/print/PrintJobInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PrintJobInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/print/PrintJobInfo;"
		);
	}
	void PrintJobInfo_Builder::putAdvancedOption(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"putAdvancedOption",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void PrintJobInfo_Builder::putAdvancedOption(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"putAdvancedOption",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void PrintJobInfo_Builder::setAttributes(android::print::PrintAttributes arg0)
	{
		__thiz.callMethod<void>(
			"setAttributes",
			"(Landroid/print/PrintAttributes;)V",
			arg0.__jniObject().object()
		);
	}
	void PrintJobInfo_Builder::setCopies(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCopies",
			"(I)V",
			arg0
		);
	}
	void PrintJobInfo_Builder::setPages(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setPages",
			"([Landroid/print/PageRange;)V",
			arg0
		);
	}
} // namespace android::print


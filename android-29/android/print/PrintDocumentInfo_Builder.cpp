#include "./PrintDocumentInfo.hpp"
#include "./PrintDocumentInfo_Builder.hpp"

namespace android::print
{
	// Fields
	
	PrintDocumentInfo_Builder::PrintDocumentInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrintDocumentInfo_Builder::PrintDocumentInfo_Builder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintDocumentInfo$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject PrintDocumentInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/print/PrintDocumentInfo;"
		);
	}
	QAndroidJniObject PrintDocumentInfo_Builder::setContentType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setContentType",
			"(I)Landroid/print/PrintDocumentInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrintDocumentInfo_Builder::setPageCount(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPageCount",
			"(I)Landroid/print/PrintDocumentInfo$Builder;",
			arg0
		);
	}
} // namespace android::print


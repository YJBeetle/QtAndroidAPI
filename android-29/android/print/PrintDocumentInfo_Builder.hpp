#pragma once

#ifndef ANDROID_PRINT_PRINTDOCUMENTINFO_BUILDER
#define ANDROID_PRINT_PRINTDOCUMENTINFO_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintDocumentInfo;
}

namespace __jni_impl::android::print
{
	class PrintDocumentInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setPageCount(jint arg0);
		QAndroidJniObject setContentType(jint arg0);
	};
} // namespace __jni_impl::android::print

#include "PrintDocumentInfo.hpp"

namespace __jni_impl::android::print
{
	// Fields
	
	// Constructors
	void PrintDocumentInfo_Builder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintDocumentInfo$Builder",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject PrintDocumentInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/print/PrintDocumentInfo;"
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
	QAndroidJniObject PrintDocumentInfo_Builder::setContentType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setContentType",
			"(I)Landroid/print/PrintDocumentInfo$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintDocumentInfo_Builder : public __jni_impl::android::print::PrintDocumentInfo_Builder
	{
	public:
		PrintDocumentInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PrintDocumentInfo_Builder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTDOCUMENTINFO_BUILDER


#pragma once

#ifndef ANDROID_PRINT_PDF_PRINTEDPDFDOCUMENT
#define ANDROID_PRINT_PDF_PRINTEDPDFDOCUMENT

#include "../../../__JniBaseClass.hpp"
#include "../../graphics/pdf/PdfDocument.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::print
{
	class PrintAttributes;
}
namespace __jni_impl::android::graphics::pdf
{
	class PdfDocument_Page;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::print::pdf
{
	class PrintedPdfDocument : public __jni_impl::android::graphics::pdf::PdfDocument
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::print::PrintAttributes arg1);
		
		// Methods
		jint getPageWidth();
		QAndroidJniObject startPage(jint arg0);
		jint getPageHeight();
		QAndroidJniObject getPageContentRect();
	};
} // namespace __jni_impl::android::print::pdf

#include "../../content/Context.hpp"
#include "../PrintAttributes.hpp"
#include "../../graphics/pdf/PdfDocument_Page.hpp"
#include "../../graphics/Rect.hpp"

namespace __jni_impl::android::print::pdf
{
	// Fields
	
	// Constructors
	void PrintedPdfDocument::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::print::PrintAttributes arg1)
	{
		__thiz = QAndroidJniObject(
			"android.print.pdf.PrintedPdfDocument",
			"(Landroid/content/Context;Landroid/print/PrintAttributes;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jint PrintedPdfDocument::getPageWidth()
	{
		return __thiz.callMethod<jint>(
			"getPageWidth",
			"()I"
		);
	}
	QAndroidJniObject PrintedPdfDocument::startPage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"startPage",
			"(I)Landroid/graphics/pdf/PdfDocument$Page;",
			arg0
		);
	}
	jint PrintedPdfDocument::getPageHeight()
	{
		return __thiz.callMethod<jint>(
			"getPageHeight",
			"()I"
		);
	}
	QAndroidJniObject PrintedPdfDocument::getPageContentRect()
	{
		return __thiz.callObjectMethod(
			"getPageContentRect",
			"()Landroid/graphics/Rect;"
		);
	}
} // namespace __jni_impl::android::print::pdf

namespace android::print::pdf
{
	class PrintedPdfDocument : public __jni_impl::android::print::pdf::PrintedPdfDocument
	{
	public:
		PrintedPdfDocument(QAndroidJniObject obj) { __thiz = obj; }
		PrintedPdfDocument(__jni_impl::android::content::Context arg0, __jni_impl::android::print::PrintAttributes arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::print::pdf

#endif // ANDROID_PRINT_PDF_PRINTEDPDFDOCUMENT


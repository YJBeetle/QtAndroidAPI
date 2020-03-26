#pragma once

#ifndef ANDROID_GRAPHICS_PDF_PDFDOCUMENT
#define ANDROID_GRAPHICS_PDF_PDFDOCUMENT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::android::graphics::pdf
{
	class PdfDocument_Page;
}
namespace __jni_impl::android::graphics::pdf
{
	class PdfDocument_PageInfo;
}

namespace __jni_impl::android::graphics::pdf
{
	class PdfDocument : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void writeTo(__jni_impl::java::io::OutputStream arg0);
		QAndroidJniObject getPages();
		QAndroidJniObject startPage(__jni_impl::android::graphics::pdf::PdfDocument_PageInfo arg0);
		void finishPage(__jni_impl::android::graphics::pdf::PdfDocument_Page arg0);
	};
} // namespace __jni_impl::android::graphics::pdf

#include "../../../java/io/OutputStream.hpp"
#include "PdfDocument_Page.hpp"
#include "PdfDocument_PageInfo.hpp"

namespace __jni_impl::android::graphics::pdf
{
	// Fields
	
	// Constructors
	void PdfDocument::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.pdf.PdfDocument",
			"()V");
	}
	
	// Methods
	void PdfDocument::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void PdfDocument::writeTo(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"writeTo",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PdfDocument::getPages()
	{
		return __thiz.callObjectMethod(
			"getPages",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PdfDocument::startPage(__jni_impl::android::graphics::pdf::PdfDocument_PageInfo arg0)
	{
		return __thiz.callObjectMethod(
			"startPage",
			"(Landroid/graphics/pdf/PdfDocument$PageInfo;)Landroid/graphics/pdf/PdfDocument$Page;",
			arg0.__jniObject().object()
		);
	}
	void PdfDocument::finishPage(__jni_impl::android::graphics::pdf::PdfDocument_Page arg0)
	{
		__thiz.callMethod<void>(
			"finishPage",
			"(Landroid/graphics/pdf/PdfDocument$Page;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::pdf

namespace android::graphics::pdf
{
	class PdfDocument : public __jni_impl::android::graphics::pdf::PdfDocument
	{
	public:
		PdfDocument(QAndroidJniObject obj) { __thiz = obj; }
		PdfDocument()
		{
			__constructor();
		}
	};
} // namespace android::graphics::pdf

#endif // ANDROID_GRAPHICS_PDF_PDFDOCUMENT


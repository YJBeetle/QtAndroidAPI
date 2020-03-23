#pragma once

#ifndef ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGE
#define ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics::pdf
{
	class PdfDocument_PageInfo;
}

namespace __jni_impl::android::graphics::pdf
{
	class PdfDocument_Page : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getInfo();
		QAndroidJniObject getCanvas();
	};
} // namespace __jni_impl::android::graphics::pdf

#include "../Canvas.hpp"
#include "PdfDocument_PageInfo.hpp"

namespace __jni_impl::android::graphics::pdf
{
	// Fields
	
	// Constructors
	void PdfDocument_Page::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.pdf.PdfDocument$Page",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PdfDocument_Page::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Landroid/graphics/pdf/PdfDocument$PageInfo;");
	}
	QAndroidJniObject PdfDocument_Page::getCanvas()
	{
		return __thiz.callObjectMethod(
			"getCanvas",
			"()Landroid/graphics/Canvas;");
	}
} // namespace __jni_impl::android::graphics::pdf

namespace android::graphics::pdf
{
	class PdfDocument_Page : public __jni_impl::android::graphics::pdf::PdfDocument_Page
	{
	public:
		PdfDocument_Page(QAndroidJniObject obj) { __thiz = obj; }
		PdfDocument_Page()
		{
			__constructor();
		}
	};
} // namespace android::graphics::pdf

#endif // ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGE


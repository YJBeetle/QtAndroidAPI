#pragma once

#ifndef ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO
#define ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::graphics::pdf
{
	class PdfDocument_PageInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getPageWidth();
		jint getPageHeight();
		jint getPageNumber();
		QAndroidJniObject getContentRect();
	};
} // namespace __jni_impl::android::graphics::pdf

#include "../Rect.hpp"

namespace __jni_impl::android::graphics::pdf
{
	// Fields
	
	// Constructors
	void PdfDocument_PageInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.pdf.PdfDocument$PageInfo",
			"(V)V");
	}
	
	// Methods
	jint PdfDocument_PageInfo::getPageWidth()
	{
		return __thiz.callMethod<jint>(
			"getPageWidth",
			"()I");
	}
	jint PdfDocument_PageInfo::getPageHeight()
	{
		return __thiz.callMethod<jint>(
			"getPageHeight",
			"()I");
	}
	jint PdfDocument_PageInfo::getPageNumber()
	{
		return __thiz.callMethod<jint>(
			"getPageNumber",
			"()I");
	}
	QAndroidJniObject PdfDocument_PageInfo::getContentRect()
	{
		return __thiz.callObjectMethod(
			"getContentRect",
			"()Landroid/graphics/Rect;");
	}
} // namespace __jni_impl::android::graphics::pdf

namespace android::graphics::pdf
{
	class PdfDocument_PageInfo : public __jni_impl::android::graphics::pdf::PdfDocument_PageInfo
	{
	public:
		PdfDocument_PageInfo(QAndroidJniObject obj) { __thiz = obj; }
		PdfDocument_PageInfo()
		{
			__constructor();
		}
	};
} // namespace android::graphics::pdf

#endif // ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO


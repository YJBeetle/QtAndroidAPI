#pragma once

#ifndef ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO_BUILDER
#define ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics::pdf
{
	class PdfDocument_PageInfo;
}

namespace __jni_impl::android::graphics::pdf
{
	class PdfDocument_PageInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
		QAndroidJniObject create();
		QAndroidJniObject setContentRect(__jni_impl::android::graphics::Rect arg0);
	};
} // namespace __jni_impl::android::graphics::pdf

#include "../Rect.hpp"
#include "PdfDocument_PageInfo.hpp"

namespace __jni_impl::android::graphics::pdf
{
	// Fields
	
	// Constructors
	void PdfDocument_PageInfo_Builder::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.pdf.PdfDocument$PageInfo$Builder",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject PdfDocument_PageInfo_Builder::create()
	{
		return __thiz.callObjectMethod(
			"create",
			"()Landroid/graphics/pdf/PdfDocument$PageInfo;"
		);
	}
	QAndroidJniObject PdfDocument_PageInfo_Builder::setContentRect(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"setContentRect",
			"(Landroid/graphics/Rect;)Landroid/graphics/pdf/PdfDocument$PageInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::pdf

namespace android::graphics::pdf
{
	class PdfDocument_PageInfo_Builder : public __jni_impl::android::graphics::pdf::PdfDocument_PageInfo_Builder
	{
	public:
		PdfDocument_PageInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PdfDocument_PageInfo_Builder(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::graphics::pdf

#endif // ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO_BUILDER


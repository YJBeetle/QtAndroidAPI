#pragma once

#ifndef ANDROID_GRAPHICS_TEXT_LINEBREAKER_PARAGRAPHCONSTRAINTS
#define ANDROID_GRAPHICS_TEXT_LINEBREAKER_PARAGRAPHCONSTRAINTS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics::text
{
	class LineBreaker_ParagraphConstraints : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jfloat getDefaultTabStop();
		jfloat getFirstWidth();
		jint getFirstWidthLineCount();
		jfloatArray getTabStops();
		jfloat getWidth();
		void setIndent(jfloat arg0, jint arg1);
		void setTabStops(jfloatArray arg0, jfloat arg1);
		void setWidth(jfloat arg0);
	};
} // namespace __jni_impl::android::graphics::text


namespace __jni_impl::android::graphics::text
{
	// Fields
	
	// Constructors
	void LineBreaker_ParagraphConstraints::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.text.LineBreaker$ParagraphConstraints",
			"()V"
		);
	}
	
	// Methods
	jfloat LineBreaker_ParagraphConstraints::getDefaultTabStop()
	{
		return __thiz.callMethod<jfloat>(
			"getDefaultTabStop",
			"()F"
		);
	}
	jfloat LineBreaker_ParagraphConstraints::getFirstWidth()
	{
		return __thiz.callMethod<jfloat>(
			"getFirstWidth",
			"()F"
		);
	}
	jint LineBreaker_ParagraphConstraints::getFirstWidthLineCount()
	{
		return __thiz.callMethod<jint>(
			"getFirstWidthLineCount",
			"()I"
		);
	}
	jfloatArray LineBreaker_ParagraphConstraints::getTabStops()
	{
		return __thiz.callObjectMethod(
			"getTabStops",
			"()[F"
		).object<jfloatArray>();
	}
	jfloat LineBreaker_ParagraphConstraints::getWidth()
	{
		return __thiz.callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	void LineBreaker_ParagraphConstraints::setIndent(jfloat arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setIndent",
			"(FI)V",
			arg0,
			arg1
		);
	}
	void LineBreaker_ParagraphConstraints::setTabStops(jfloatArray arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setTabStops",
			"([FF)V",
			arg0,
			arg1
		);
	}
	void LineBreaker_ParagraphConstraints::setWidth(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setWidth",
			"(F)V",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics::text

namespace android::graphics::text
{
	class LineBreaker_ParagraphConstraints : public __jni_impl::android::graphics::text::LineBreaker_ParagraphConstraints
	{
	public:
		LineBreaker_ParagraphConstraints(QAndroidJniObject obj) { __thiz = obj; }
		LineBreaker_ParagraphConstraints()
		{
			__constructor();
		}
	};
} // namespace android::graphics::text

#endif // ANDROID_GRAPHICS_TEXT_LINEBREAKER_PARAGRAPHCONSTRAINTS


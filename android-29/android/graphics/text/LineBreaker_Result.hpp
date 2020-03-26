#pragma once

#ifndef ANDROID_GRAPHICS_TEXT_LINEBREAKER_RESULT
#define ANDROID_GRAPHICS_TEXT_LINEBREAKER_RESULT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics::text
{
	class LineBreaker_Result : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getLineBreakOffset(jint arg0);
		jboolean hasLineTab(jint arg0);
		jint getStartLineHyphenEdit(jint arg0);
		jint getEndLineHyphenEdit(jint arg0);
		jint getLineCount();
		jfloat getLineDescent(jint arg0);
		jfloat getLineWidth(jint arg0);
		jfloat getLineAscent(jint arg0);
	};
} // namespace __jni_impl::android::graphics::text


namespace __jni_impl::android::graphics::text
{
	// Fields
	
	// Constructors
	void LineBreaker_Result::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.text.LineBreaker$Result",
			"(V)V");
	}
	
	// Methods
	jint LineBreaker_Result::getLineBreakOffset(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineBreakOffset",
			"(I)I",
			arg0
		);
	}
	jboolean LineBreaker_Result::hasLineTab(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasLineTab",
			"(I)Z",
			arg0
		);
	}
	jint LineBreaker_Result::getStartLineHyphenEdit(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getStartLineHyphenEdit",
			"(I)I",
			arg0
		);
	}
	jint LineBreaker_Result::getEndLineHyphenEdit(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getEndLineHyphenEdit",
			"(I)I",
			arg0
		);
	}
	jint LineBreaker_Result::getLineCount()
	{
		return __thiz.callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	jfloat LineBreaker_Result::getLineDescent(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getLineDescent",
			"(I)F",
			arg0
		);
	}
	jfloat LineBreaker_Result::getLineWidth(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getLineWidth",
			"(I)F",
			arg0
		);
	}
	jfloat LineBreaker_Result::getLineAscent(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getLineAscent",
			"(I)F",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics::text

namespace android::graphics::text
{
	class LineBreaker_Result : public __jni_impl::android::graphics::text::LineBreaker_Result
	{
	public:
		LineBreaker_Result(QAndroidJniObject obj) { __thiz = obj; }
		LineBreaker_Result()
		{
			__constructor();
		}
	};
} // namespace android::graphics::text

#endif // ANDROID_GRAPHICS_TEXT_LINEBREAKER_RESULT


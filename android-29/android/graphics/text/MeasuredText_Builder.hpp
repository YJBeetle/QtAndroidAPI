#pragma once

#ifndef ANDROID_GRAPHICS_TEXT_MEASUREDTEXT_BUILDER
#define ANDROID_GRAPHICS_TEXT_MEASUREDTEXT_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::text
{
	class MeasuredText;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}

namespace __jni_impl::android::graphics::text
{
	class MeasuredText_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jcharArray arg0);
		void __constructor(__jni_impl::android::graphics::text::MeasuredText arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject appendStyleRun(__jni_impl::android::graphics::Paint arg0, jint arg1, jboolean arg2);
		QAndroidJniObject appendReplacementRun(__jni_impl::android::graphics::Paint arg0, jint arg1, jfloat arg2);
		QAndroidJniObject setComputeHyphenation(jboolean arg0);
		QAndroidJniObject setComputeLayout(jboolean arg0);
	};
} // namespace __jni_impl::android::graphics::text

#include "MeasuredText.hpp"
#include "../Paint.hpp"

namespace __jni_impl::android::graphics::text
{
	// Fields
	
	// Constructors
	void MeasuredText_Builder::__constructor(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.text.MeasuredText$Builder",
			"([C)V",
			arg0
		);
	}
	void MeasuredText_Builder::__constructor(__jni_impl::android::graphics::text::MeasuredText arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.text.MeasuredText$Builder",
			"(Landroid/graphics/text/MeasuredText;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject MeasuredText_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/graphics/text/MeasuredText;"
		);
	}
	QAndroidJniObject MeasuredText_Builder::appendStyleRun(__jni_impl::android::graphics::Paint arg0, jint arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"appendStyleRun",
			"(Landroid/graphics/Paint;IZ)Landroid/graphics/text/MeasuredText$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject MeasuredText_Builder::appendReplacementRun(__jni_impl::android::graphics::Paint arg0, jint arg1, jfloat arg2)
	{
		return __thiz.callObjectMethod(
			"appendReplacementRun",
			"(Landroid/graphics/Paint;IF)Landroid/graphics/text/MeasuredText$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject MeasuredText_Builder::setComputeHyphenation(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setComputeHyphenation",
			"(Z)Landroid/graphics/text/MeasuredText$Builder;",
			arg0
		);
	}
	QAndroidJniObject MeasuredText_Builder::setComputeLayout(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setComputeLayout",
			"(Z)Landroid/graphics/text/MeasuredText$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics::text

namespace android::graphics::text
{
	class MeasuredText_Builder : public __jni_impl::android::graphics::text::MeasuredText_Builder
	{
	public:
		MeasuredText_Builder(QAndroidJniObject obj) { __thiz = obj; }
		MeasuredText_Builder(jcharArray arg0)
		{
			__constructor(
				arg0);
		}
		MeasuredText_Builder(__jni_impl::android::graphics::text::MeasuredText arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics::text

#endif // ANDROID_GRAPHICS_TEXT_MEASUREDTEXT_BUILDER


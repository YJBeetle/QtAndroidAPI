#pragma once

#ifndef ANDROID_GRAPHICS_PAINT_FONTMETRICSINT
#define ANDROID_GRAPHICS_PAINT_FONTMETRICSINT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class Paint_FontMetricsInt : public __JniBaseClass
	{
	public:
		// Fields
		jint ascent();
		jint bottom();
		jint descent();
		jint leading();
		jint top();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	jint Paint_FontMetricsInt::ascent()
	{
		return __thiz.getField<jint>(
			"ascent"
		);
	}
	jint Paint_FontMetricsInt::bottom()
	{
		return __thiz.getField<jint>(
			"bottom"
		);
	}
	jint Paint_FontMetricsInt::descent()
	{
		return __thiz.getField<jint>(
			"descent"
		);
	}
	jint Paint_FontMetricsInt::leading()
	{
		return __thiz.getField<jint>(
			"leading"
		);
	}
	jint Paint_FontMetricsInt::top()
	{
		return __thiz.getField<jint>(
			"top"
		);
	}
	
	// Constructors
	void Paint_FontMetricsInt::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint$FontMetricsInt",
			"()V"
		);
	}
	
	// Methods
	jstring Paint_FontMetricsInt::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Paint_FontMetricsInt : public __jni_impl::android::graphics::Paint_FontMetricsInt
	{
	public:
		Paint_FontMetricsInt(QAndroidJniObject obj) { __thiz = obj; }
		Paint_FontMetricsInt()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PAINT_FONTMETRICSINT


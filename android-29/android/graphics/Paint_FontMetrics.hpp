#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class Paint_FontMetrics : public __JniBaseClass
	{
	public:
		// Fields
		jfloat ascent();
		jfloat bottom();
		jfloat descent();
		jfloat leading();
		jfloat top();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	jfloat Paint_FontMetrics::ascent()
	{
		return __thiz.getField<jfloat>(
			"ascent"
		);
	}
	jfloat Paint_FontMetrics::bottom()
	{
		return __thiz.getField<jfloat>(
			"bottom"
		);
	}
	jfloat Paint_FontMetrics::descent()
	{
		return __thiz.getField<jfloat>(
			"descent"
		);
	}
	jfloat Paint_FontMetrics::leading()
	{
		return __thiz.getField<jfloat>(
			"leading"
		);
	}
	jfloat Paint_FontMetrics::top()
	{
		return __thiz.getField<jfloat>(
			"top"
		);
	}
	
	// Constructors
	void Paint_FontMetrics::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint$FontMetrics",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Paint_FontMetrics : public __jni_impl::android::graphics::Paint_FontMetrics
	{
	public:
		Paint_FontMetrics(QAndroidJniObject obj) { __thiz = obj; }
		Paint_FontMetrics()
		{
			__constructor();
		}
	};
} // namespace android::graphics


#pragma once

#ifndef ANDROID_WIDGET_ABSSEEKBAR
#define ANDROID_WIDGET_ABSSEEKBAR

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "ProgressBar.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::widget
{
	class AbsSeekBar : public __jni_impl::android::widget::ProgressBar
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setThumbTintList(__jni_impl::android::content::res::ColorStateList arg0);
		QAndroidJniObject getThumbTintList();
		void setThumbTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setThumbTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		QAndroidJniObject getThumbTintMode();
		QAndroidJniObject getThumbTintBlendMode();
		void setSplitTrack(jboolean arg0);
		jboolean getSplitTrack();
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void setMax(jint arg0);
		jstring getAccessibilityClassName();
		void jumpDrawablesToCurrentState();
		void setSystemGestureExclusionRects(__jni_impl::__JniBaseClass arg0);
		void onRtlPropertiesChanged(jint arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		void setThumb(__jni_impl::android::graphics::drawable::Drawable arg0);
		jint getThumbOffset();
		QAndroidJniObject getThumb();
		void setThumbOffset(jint arg0);
		void setTickMark(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getTickMark();
		void setTickMarkTintList(__jni_impl::android::content::res::ColorStateList arg0);
		QAndroidJniObject getTickMarkTintList();
		void setTickMarkTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setTickMarkTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		QAndroidJniObject getTickMarkTintMode();
		QAndroidJniObject getTickMarkTintBlendMode();
		void setKeyProgressIncrement(jint arg0);
		jint getKeyProgressIncrement();
		void setMin(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/BlendMode.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void AbsSeekBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void AbsSeekBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void AbsSeekBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void AbsSeekBar::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void AbsSeekBar::setThumbTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbsSeekBar::getThumbTintList()
	{
		return __thiz.callObjectMethod(
			"getThumbTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	void AbsSeekBar::setThumbTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setThumbTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbsSeekBar::getThumbTintMode()
	{
		return __thiz.callObjectMethod(
			"getThumbTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject AbsSeekBar::getThumbTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getThumbTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	void AbsSeekBar::setSplitTrack(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSplitTrack",
			"(Z)V",
			arg0
		);
	}
	jboolean AbsSeekBar::getSplitTrack()
	{
		return __thiz.callMethod<jboolean>(
			"getSplitTrack",
			"()Z"
		);
	}
	jboolean AbsSeekBar::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AbsSeekBar::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setMax(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	jstring AbsSeekBar::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void AbsSeekBar::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void AbsSeekBar::setSystemGestureExclusionRects(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSystemGestureExclusionRects",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	void AbsSeekBar::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void AbsSeekBar::setThumb(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setThumb",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	jint AbsSeekBar::getThumbOffset()
	{
		return __thiz.callMethod<jint>(
			"getThumbOffset",
			"()I"
		);
	}
	QAndroidJniObject AbsSeekBar::getThumb()
	{
		return __thiz.callObjectMethod(
			"getThumb",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void AbsSeekBar::setThumbOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThumbOffset",
			"(I)V",
			arg0
		);
	}
	void AbsSeekBar::setTickMark(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTickMark",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbsSeekBar::getTickMark()
	{
		return __thiz.callObjectMethod(
			"getTickMark",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void AbsSeekBar::setTickMarkTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTickMarkTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbsSeekBar::getTickMarkTintList()
	{
		return __thiz.callObjectMethod(
			"getTickMarkTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	void AbsSeekBar::setTickMarkTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setTickMarkTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setTickMarkTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTickMarkTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbsSeekBar::getTickMarkTintMode()
	{
		return __thiz.callObjectMethod(
			"getTickMarkTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject AbsSeekBar::getTickMarkTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getTickMarkTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	void AbsSeekBar::setKeyProgressIncrement(jint arg0)
	{
		__thiz.callMethod<void>(
			"setKeyProgressIncrement",
			"(I)V",
			arg0
		);
	}
	jint AbsSeekBar::getKeyProgressIncrement()
	{
		return __thiz.callMethod<jint>(
			"getKeyProgressIncrement",
			"()I"
		);
	}
	void AbsSeekBar::setMin(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMin",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AbsSeekBar : public __jni_impl::android::widget::AbsSeekBar
	{
	public:
		AbsSeekBar(QAndroidJniObject obj) { __thiz = obj; }
		AbsSeekBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		AbsSeekBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		AbsSeekBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AbsSeekBar(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ABSSEEKBAR


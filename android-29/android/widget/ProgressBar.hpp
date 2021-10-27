#pragma once

#ifndef ANDROID_WIDGET_PROGRESSBAR
#define ANDROID_WIDGET_PROGRESSBAR

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"

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
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::widget
{
	class ProgressBar : public __jni_impl::android::view::View
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		jstring getAccessibilityClassName();
		QAndroidJniObject getCurrentDrawable();
		QAndroidJniObject getIndeterminateDrawable();
		QAndroidJniObject getIndeterminateTintBlendMode();
		QAndroidJniObject getIndeterminateTintList();
		QAndroidJniObject getIndeterminateTintMode();
		QAndroidJniObject getInterpolator();
		jint getMax();
		jint getMaxHeight();
		jint getMaxWidth();
		jint getMin();
		jint getMinHeight();
		jint getMinWidth();
		jint getProgress();
		QAndroidJniObject getProgressBackgroundTintBlendMode();
		QAndroidJniObject getProgressBackgroundTintList();
		QAndroidJniObject getProgressBackgroundTintMode();
		QAndroidJniObject getProgressDrawable();
		QAndroidJniObject getProgressTintBlendMode();
		QAndroidJniObject getProgressTintList();
		QAndroidJniObject getProgressTintMode();
		jint getSecondaryProgress();
		QAndroidJniObject getSecondaryProgressTintBlendMode();
		QAndroidJniObject getSecondaryProgressTintList();
		QAndroidJniObject getSecondaryProgressTintMode();
		void incrementProgressBy(jint arg0);
		void incrementSecondaryProgressBy(jint arg0);
		void invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		jboolean isAnimating();
		jboolean isIndeterminate();
		void jumpDrawablesToCurrentState();
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
		void onVisibilityAggregated(jboolean arg0);
		void postInvalidate();
		void setIndeterminate(jboolean arg0);
		void setIndeterminateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setIndeterminateDrawableTiled(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setIndeterminateTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setIndeterminateTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setIndeterminateTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setInterpolator(__jni_impl::__JniBaseClass arg0);
		void setInterpolator(__jni_impl::android::content::Context arg0, jint arg1);
		void setMax(jint arg0);
		void setMaxHeight(jint arg0);
		void setMaxWidth(jint arg0);
		void setMin(jint arg0);
		void setMinHeight(jint arg0);
		void setMinWidth(jint arg0);
		void setProgress(jint arg0);
		void setProgress(jint arg0, jboolean arg1);
		void setProgressBackgroundTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setProgressBackgroundTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setProgressBackgroundTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setProgressDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setProgressDrawableTiled(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setProgressTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setProgressTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setProgressTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setSecondaryProgress(jint arg0);
		void setSecondaryProgressTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setSecondaryProgressTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setSecondaryProgressTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ProgressBar::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ProgressBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ProgressBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void ProgressBar::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jstring ProgressBar::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject ProgressBar::getCurrentDrawable()
	{
		return __thiz.callObjectMethod(
			"getCurrentDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject ProgressBar::getIndeterminateDrawable()
	{
		return __thiz.callObjectMethod(
			"getIndeterminateDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject ProgressBar::getIndeterminateTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getIndeterminateTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject ProgressBar::getIndeterminateTintList()
	{
		return __thiz.callObjectMethod(
			"getIndeterminateTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject ProgressBar::getIndeterminateTintMode()
	{
		return __thiz.callObjectMethod(
			"getIndeterminateTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject ProgressBar::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	jint ProgressBar::getMax()
	{
		return __thiz.callMethod<jint>(
			"getMax",
			"()I"
		);
	}
	jint ProgressBar::getMaxHeight()
	{
		return __thiz.callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	jint ProgressBar::getMaxWidth()
	{
		return __thiz.callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	jint ProgressBar::getMin()
	{
		return __thiz.callMethod<jint>(
			"getMin",
			"()I"
		);
	}
	jint ProgressBar::getMinHeight()
	{
		return __thiz.callMethod<jint>(
			"getMinHeight",
			"()I"
		);
	}
	jint ProgressBar::getMinWidth()
	{
		return __thiz.callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	jint ProgressBar::getProgress()
	{
		return __thiz.callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	QAndroidJniObject ProgressBar::getProgressBackgroundTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getProgressBackgroundTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject ProgressBar::getProgressBackgroundTintList()
	{
		return __thiz.callObjectMethod(
			"getProgressBackgroundTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject ProgressBar::getProgressBackgroundTintMode()
	{
		return __thiz.callObjectMethod(
			"getProgressBackgroundTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject ProgressBar::getProgressDrawable()
	{
		return __thiz.callObjectMethod(
			"getProgressDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject ProgressBar::getProgressTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getProgressTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject ProgressBar::getProgressTintList()
	{
		return __thiz.callObjectMethod(
			"getProgressTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject ProgressBar::getProgressTintMode()
	{
		return __thiz.callObjectMethod(
			"getProgressTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jint ProgressBar::getSecondaryProgress()
	{
		return __thiz.callMethod<jint>(
			"getSecondaryProgress",
			"()I"
		);
	}
	QAndroidJniObject ProgressBar::getSecondaryProgressTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getSecondaryProgressTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject ProgressBar::getSecondaryProgressTintList()
	{
		return __thiz.callObjectMethod(
			"getSecondaryProgressTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject ProgressBar::getSecondaryProgressTintMode()
	{
		return __thiz.callObjectMethod(
			"getSecondaryProgressTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	void ProgressBar::incrementProgressBy(jint arg0)
	{
		__thiz.callMethod<void>(
			"incrementProgressBy",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::incrementSecondaryProgressBy(jint arg0)
	{
		__thiz.callMethod<void>(
			"incrementSecondaryProgressBy",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ProgressBar::isAnimating()
	{
		return __thiz.callMethod<jboolean>(
			"isAnimating",
			"()Z"
		);
	}
	jboolean ProgressBar::isIndeterminate()
	{
		return __thiz.callMethod<jboolean>(
			"isIndeterminate",
			"()Z"
		);
	}
	void ProgressBar::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void ProgressBar::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProgressBar::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	void ProgressBar::onVisibilityAggregated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void ProgressBar::postInvalidate()
	{
		__thiz.callMethod<void>(
			"postInvalidate",
			"()V"
		);
	}
	void ProgressBar::setIndeterminate(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminate",
			"(Z)V",
			arg0
		);
	}
	void ProgressBar::setIndeterminateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setIndeterminateDrawableTiled(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminateDrawableTiled",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setIndeterminateTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminateTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setIndeterminateTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminateTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setIndeterminateTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminateTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setInterpolator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setInterpolator(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ProgressBar::setMax(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setMaxHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxHeight",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setMaxWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setMin(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMin",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setMinHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinHeight",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setMinWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinWidth",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setProgress(jint arg0)
	{
		__thiz.callMethod<void>(
			"setProgress",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setProgress(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setProgress",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void ProgressBar::setProgressBackgroundTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setProgressBackgroundTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressBackgroundTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setProgressBackgroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressBackgroundTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setProgressBackgroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setProgressDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressDrawableTiled(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setProgressDrawableTiled",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setProgressTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setProgressTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setProgressTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setSecondaryProgress(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSecondaryProgress",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setSecondaryProgressTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setSecondaryProgressTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setSecondaryProgressTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setSecondaryProgressTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setSecondaryProgressTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setSecondaryProgressTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ProgressBar : public __jni_impl::android::widget::ProgressBar
	{
	public:
		ProgressBar(QAndroidJniObject obj) { __thiz = obj; }
		ProgressBar(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		ProgressBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ProgressBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ProgressBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_PROGRESSBAR


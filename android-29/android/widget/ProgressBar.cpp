#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./ProgressBar.hpp"

namespace android::widget
{
	// Fields
	
	ProgressBar::ProgressBar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ProgressBar::ProgressBar(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ProgressBar::ProgressBar(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ProgressBar::ProgressBar(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ProgressBar::ProgressBar(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
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
	void ProgressBar::invalidateDrawable(android::graphics::drawable::Drawable arg0)
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
	void ProgressBar::onRestoreInstanceState(__JniBaseClass arg0)
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
	void ProgressBar::setIndeterminateDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setIndeterminateDrawableTiled(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminateDrawableTiled",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setIndeterminateTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminateTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setIndeterminateTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminateTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setIndeterminateTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminateTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setInterpolator(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setInterpolator(android::content::Context arg0, jint arg1)
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
	void ProgressBar::setProgressBackgroundTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setProgressBackgroundTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressBackgroundTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setProgressBackgroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressBackgroundTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setProgressBackgroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setProgressDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressDrawableTiled(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setProgressDrawableTiled",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setProgressTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setProgressTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setProgressTintMode(android::graphics::PorterDuff_Mode arg0)
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
	void ProgressBar::setSecondaryProgressTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setSecondaryProgressTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setSecondaryProgressTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setSecondaryProgressTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressBar::setSecondaryProgressTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setSecondaryProgressTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget


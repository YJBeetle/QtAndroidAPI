#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../../JString.hpp"
#include "./ProgressBar.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ProgressBar::ProgressBar(QAndroidJniObject obj) : android::view::View(obj) {}
	
	// Constructors
	ProgressBar::ProgressBar(android::content::Context arg0)
		: android::view::View(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ProgressBar::ProgressBar(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ProgressBar::ProgressBar(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ProgressBar::ProgressBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void ProgressBar::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	JString ProgressBar::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::graphics::drawable::Drawable ProgressBar::getCurrentDrawable()
	{
		return callObjectMethod(
			"getCurrentDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable ProgressBar::getIndeterminateDrawable()
	{
		return callObjectMethod(
			"getIndeterminateDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::BlendMode ProgressBar::getIndeterminateTintBlendMode()
	{
		return callObjectMethod(
			"getIndeterminateTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList ProgressBar::getIndeterminateTintList()
	{
		return callObjectMethod(
			"getIndeterminateTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode ProgressBar::getIndeterminateTintMode()
	{
		return callObjectMethod(
			"getIndeterminateTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	JObject ProgressBar::getInterpolator()
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	jint ProgressBar::getMax()
	{
		return callMethod<jint>(
			"getMax",
			"()I"
		);
	}
	jint ProgressBar::getMaxHeight()
	{
		return callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	jint ProgressBar::getMaxWidth()
	{
		return callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	jint ProgressBar::getMin()
	{
		return callMethod<jint>(
			"getMin",
			"()I"
		);
	}
	jint ProgressBar::getMinHeight()
	{
		return callMethod<jint>(
			"getMinHeight",
			"()I"
		);
	}
	jint ProgressBar::getMinWidth()
	{
		return callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	jint ProgressBar::getProgress()
	{
		return callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	android::graphics::BlendMode ProgressBar::getProgressBackgroundTintBlendMode()
	{
		return callObjectMethod(
			"getProgressBackgroundTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList ProgressBar::getProgressBackgroundTintList()
	{
		return callObjectMethod(
			"getProgressBackgroundTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode ProgressBar::getProgressBackgroundTintMode()
	{
		return callObjectMethod(
			"getProgressBackgroundTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::drawable::Drawable ProgressBar::getProgressDrawable()
	{
		return callObjectMethod(
			"getProgressDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::BlendMode ProgressBar::getProgressTintBlendMode()
	{
		return callObjectMethod(
			"getProgressTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList ProgressBar::getProgressTintList()
	{
		return callObjectMethod(
			"getProgressTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode ProgressBar::getProgressTintMode()
	{
		return callObjectMethod(
			"getProgressTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jint ProgressBar::getSecondaryProgress()
	{
		return callMethod<jint>(
			"getSecondaryProgress",
			"()I"
		);
	}
	android::graphics::BlendMode ProgressBar::getSecondaryProgressTintBlendMode()
	{
		return callObjectMethod(
			"getSecondaryProgressTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList ProgressBar::getSecondaryProgressTintList()
	{
		return callObjectMethod(
			"getSecondaryProgressTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode ProgressBar::getSecondaryProgressTintMode()
	{
		return callObjectMethod(
			"getSecondaryProgressTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	void ProgressBar::incrementProgressBy(jint arg0)
	{
		callMethod<void>(
			"incrementProgressBy",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::incrementSecondaryProgressBy(jint arg0)
	{
		callMethod<void>(
			"incrementSecondaryProgressBy",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::invalidateDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	jboolean ProgressBar::isAnimating()
	{
		return callMethod<jboolean>(
			"isAnimating",
			"()Z"
		);
	}
	jboolean ProgressBar::isIndeterminate()
	{
		return callMethod<jboolean>(
			"isIndeterminate",
			"()Z"
		);
	}
	void ProgressBar::jumpDrawablesToCurrentState()
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void ProgressBar::onRestoreInstanceState(JObject arg0)
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	JObject ProgressBar::onSaveInstanceState()
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	void ProgressBar::onVisibilityAggregated(jboolean arg0)
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void ProgressBar::postInvalidate()
	{
		callMethod<void>(
			"postInvalidate",
			"()V"
		);
	}
	void ProgressBar::setIndeterminate(jboolean arg0)
	{
		callMethod<void>(
			"setIndeterminate",
			"(Z)V",
			arg0
		);
	}
	void ProgressBar::setIndeterminateDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setIndeterminateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ProgressBar::setIndeterminateDrawableTiled(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setIndeterminateDrawableTiled",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ProgressBar::setIndeterminateTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setIndeterminateTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void ProgressBar::setIndeterminateTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setIndeterminateTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void ProgressBar::setIndeterminateTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setIndeterminateTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void ProgressBar::setInterpolator(JObject arg0)
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.object()
		);
	}
	void ProgressBar::setInterpolator(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void ProgressBar::setMax(jint arg0)
	{
		callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setMaxHeight(jint arg0)
	{
		callMethod<void>(
			"setMaxHeight",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setMaxWidth(jint arg0)
	{
		callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setMin(jint arg0)
	{
		callMethod<void>(
			"setMin",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setMinHeight(jint arg0)
	{
		callMethod<void>(
			"setMinHeight",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setMinWidth(jint arg0)
	{
		callMethod<void>(
			"setMinWidth",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setProgress(jint arg0)
	{
		callMethod<void>(
			"setProgress",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setProgress(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"setProgress",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void ProgressBar::setProgressBackgroundTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setProgressBackgroundTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void ProgressBar::setProgressBackgroundTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setProgressBackgroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void ProgressBar::setProgressBackgroundTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setProgressBackgroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void ProgressBar::setProgressDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setProgressDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ProgressBar::setProgressDrawableTiled(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setProgressDrawableTiled",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ProgressBar::setProgressTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setProgressTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void ProgressBar::setProgressTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setProgressTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void ProgressBar::setProgressTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setProgressTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void ProgressBar::setSecondaryProgress(jint arg0)
	{
		callMethod<void>(
			"setSecondaryProgress",
			"(I)V",
			arg0
		);
	}
	void ProgressBar::setSecondaryProgressTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setSecondaryProgressTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void ProgressBar::setSecondaryProgressTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setSecondaryProgressTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void ProgressBar::setSecondaryProgressTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setSecondaryProgressTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void ProgressBar::setStateDescription(JString arg0)
	{
		callMethod<void>(
			"setStateDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget


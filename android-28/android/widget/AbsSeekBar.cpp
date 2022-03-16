#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../../JString.hpp"
#include "./AbsSeekBar.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	AbsSeekBar::AbsSeekBar(android::content::Context arg0)
		: android::widget::ProgressBar(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AbsSeekBar::AbsSeekBar(android::content::Context arg0, JObject arg1)
		: android::widget::ProgressBar(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AbsSeekBar::AbsSeekBar(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::ProgressBar(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	AbsSeekBar::AbsSeekBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::ProgressBar(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void AbsSeekBar::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	JString AbsSeekBar::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AbsSeekBar::getKeyProgressIncrement() const
	{
		return callMethod<jint>(
			"getKeyProgressIncrement",
			"()I"
		);
	}
	jboolean AbsSeekBar::getSplitTrack() const
	{
		return callMethod<jboolean>(
			"getSplitTrack",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable AbsSeekBar::getThumb() const
	{
		return callObjectMethod(
			"getThumb",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint AbsSeekBar::getThumbOffset() const
	{
		return callMethod<jint>(
			"getThumbOffset",
			"()I"
		);
	}
	android::content::res::ColorStateList AbsSeekBar::getThumbTintList() const
	{
		return callObjectMethod(
			"getThumbTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode AbsSeekBar::getThumbTintMode() const
	{
		return callObjectMethod(
			"getThumbTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::drawable::Drawable AbsSeekBar::getTickMark() const
	{
		return callObjectMethod(
			"getTickMark",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::content::res::ColorStateList AbsSeekBar::getTickMarkTintList() const
	{
		return callObjectMethod(
			"getTickMarkTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode AbsSeekBar::getTickMarkTintMode() const
	{
		return callObjectMethod(
			"getTickMarkTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	void AbsSeekBar::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	jboolean AbsSeekBar::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void AbsSeekBar::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	jboolean AbsSeekBar::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void AbsSeekBar::setKeyProgressIncrement(jint arg0) const
	{
		callMethod<void>(
			"setKeyProgressIncrement",
			"(I)V",
			arg0
		);
	}
	void AbsSeekBar::setMax(jint arg0) const
	{
		callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	void AbsSeekBar::setMin(jint arg0) const
	{
		callMethod<void>(
			"setMin",
			"(I)V",
			arg0
		);
	}
	void AbsSeekBar::setSplitTrack(jboolean arg0) const
	{
		callMethod<void>(
			"setSplitTrack",
			"(Z)V",
			arg0
		);
	}
	void AbsSeekBar::setThumb(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setThumb",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void AbsSeekBar::setThumbOffset(jint arg0) const
	{
		callMethod<void>(
			"setThumbOffset",
			"(I)V",
			arg0
		);
	}
	void AbsSeekBar::setThumbTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setThumbTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void AbsSeekBar::setThumbTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setThumbTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void AbsSeekBar::setTickMark(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setTickMark",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void AbsSeekBar::setTickMarkTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTickMarkTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void AbsSeekBar::setTickMarkTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setTickMarkTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
} // namespace android::widget


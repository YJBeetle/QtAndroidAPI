#include "../../JIntArray.hpp"
#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../../JString.hpp"
#include "./CheckedTextView.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	CheckedTextView::CheckedTextView(QAndroidJniObject obj) : android::widget::TextView(obj) {}
	
	// Constructors
	CheckedTextView::CheckedTextView(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	CheckedTextView::CheckedTextView(android::content::Context arg0, JObject arg1)
		: android::widget::TextView(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	CheckedTextView::CheckedTextView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	CheckedTextView::CheckedTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void CheckedTextView::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	JString CheckedTextView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::graphics::drawable::Drawable CheckedTextView::getCheckMarkDrawable() const
	{
		return callObjectMethod(
			"getCheckMarkDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::BlendMode CheckedTextView::getCheckMarkTintBlendMode() const
	{
		return callObjectMethod(
			"getCheckMarkTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList CheckedTextView::getCheckMarkTintList() const
	{
		return callObjectMethod(
			"getCheckMarkTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode CheckedTextView::getCheckMarkTintMode() const
	{
		return callObjectMethod(
			"getCheckMarkTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jboolean CheckedTextView::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void CheckedTextView::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void CheckedTextView::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	void CheckedTextView::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	JObject CheckedTextView::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	void CheckedTextView::setCheckMarkDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setCheckMarkDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void CheckedTextView::setCheckMarkDrawable(jint arg0) const
	{
		callMethod<void>(
			"setCheckMarkDrawable",
			"(I)V",
			arg0
		);
	}
	void CheckedTextView::setCheckMarkTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setCheckMarkTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void CheckedTextView::setCheckMarkTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setCheckMarkTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void CheckedTextView::setCheckMarkTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setCheckMarkTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void CheckedTextView::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void CheckedTextView::setVisibility(jint arg0) const
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	void CheckedTextView::toggle() const
	{
		callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace android::widget


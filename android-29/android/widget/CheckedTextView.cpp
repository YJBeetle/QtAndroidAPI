#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./CheckedTextView.hpp"

namespace android::widget
{
	// Fields
	
	CheckedTextView::CheckedTextView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CheckedTextView::CheckedTextView(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	CheckedTextView::CheckedTextView(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	CheckedTextView::CheckedTextView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	CheckedTextView::CheckedTextView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void CheckedTextView::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jstring CheckedTextView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject CheckedTextView::getCheckMarkDrawable()
	{
		return __thiz.callObjectMethod(
			"getCheckMarkDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject CheckedTextView::getCheckMarkTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getCheckMarkTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject CheckedTextView::getCheckMarkTintList()
	{
		return __thiz.callObjectMethod(
			"getCheckMarkTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject CheckedTextView::getCheckMarkTintMode()
	{
		return __thiz.callObjectMethod(
			"getCheckMarkTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jboolean CheckedTextView::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void CheckedTextView::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void CheckedTextView::onRestoreInstanceState(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	void CheckedTextView::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject CheckedTextView::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	void CheckedTextView::setCheckMarkDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void CheckedTextView::setCheckMarkDrawable(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkDrawable",
			"(I)V",
			arg0
		);
	}
	void CheckedTextView::setCheckMarkTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void CheckedTextView::setCheckMarkTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void CheckedTextView::setCheckMarkTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void CheckedTextView::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void CheckedTextView::setVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	void CheckedTextView::toggle()
	{
		__thiz.callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace android::widget


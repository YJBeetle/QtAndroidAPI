#pragma once

#ifndef ANDROID_WIDGET_SWITCH
#define ANDROID_WIDGET_SWITCH

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "TextView.hpp"
#include "Button.hpp"
#include "CompoundButton.hpp"

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
namespace __jni_impl::android::graphics
{
	class Typeface;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}

namespace __jni_impl::android::widget
{
	class Switch : public __jni_impl::android::widget::CompoundButton
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		jstring getAccessibilityClassName();
		jint getCompoundPaddingLeft();
		jint getCompoundPaddingRight();
		jboolean getShowText();
		jboolean getSplitTrack();
		jint getSwitchMinWidth();
		jint getSwitchPadding();
		jstring getTextOff();
		jstring getTextOn();
		QAndroidJniObject getThumbDrawable();
		jint getThumbTextPadding();
		QAndroidJniObject getThumbTintBlendMode();
		QAndroidJniObject getThumbTintList();
		QAndroidJniObject getThumbTintMode();
		QAndroidJniObject getTrackDrawable();
		QAndroidJniObject getTrackTintBlendMode();
		QAndroidJniObject getTrackTintList();
		QAndroidJniObject getTrackTintMode();
		void jumpDrawablesToCurrentState();
		void onMeasure(jint arg0, jint arg1);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void setChecked(jboolean arg0);
		void setShowText(jboolean arg0);
		void setSplitTrack(jboolean arg0);
		void setSwitchMinWidth(jint arg0);
		void setSwitchPadding(jint arg0);
		void setSwitchTextAppearance(__jni_impl::android::content::Context arg0, jint arg1);
		void setSwitchTypeface(__jni_impl::android::graphics::Typeface arg0);
		void setSwitchTypeface(__jni_impl::android::graphics::Typeface arg0, jint arg1);
		void setTextOff(jstring arg0);
		void setTextOff(const QString &arg0);
		void setTextOn(jstring arg0);
		void setTextOn(const QString &arg0);
		void setThumbDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setThumbResource(jint arg0);
		void setThumbTextPadding(jint arg0);
		void setThumbTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setThumbTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setThumbTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setTrackDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setTrackResource(jint arg0);
		void setTrackTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setTrackTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setTrackTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void toggle();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/Typeface.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/MotionEvent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void Switch::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Switch::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Switch::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void Switch::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jstring Switch::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Switch::getCompoundPaddingLeft()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	jint Switch::getCompoundPaddingRight()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	jboolean Switch::getShowText()
	{
		return __thiz.callMethod<jboolean>(
			"getShowText",
			"()Z"
		);
	}
	jboolean Switch::getSplitTrack()
	{
		return __thiz.callMethod<jboolean>(
			"getSplitTrack",
			"()Z"
		);
	}
	jint Switch::getSwitchMinWidth()
	{
		return __thiz.callMethod<jint>(
			"getSwitchMinWidth",
			"()I"
		);
	}
	jint Switch::getSwitchPadding()
	{
		return __thiz.callMethod<jint>(
			"getSwitchPadding",
			"()I"
		);
	}
	jstring Switch::getTextOff()
	{
		return __thiz.callObjectMethod(
			"getTextOff",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Switch::getTextOn()
	{
		return __thiz.callObjectMethod(
			"getTextOn",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Switch::getThumbDrawable()
	{
		return __thiz.callObjectMethod(
			"getThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint Switch::getThumbTextPadding()
	{
		return __thiz.callMethod<jint>(
			"getThumbTextPadding",
			"()I"
		);
	}
	QAndroidJniObject Switch::getThumbTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getThumbTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject Switch::getThumbTintList()
	{
		return __thiz.callObjectMethod(
			"getThumbTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject Switch::getThumbTintMode()
	{
		return __thiz.callObjectMethod(
			"getThumbTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject Switch::getTrackDrawable()
	{
		return __thiz.callObjectMethod(
			"getTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject Switch::getTrackTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getTrackTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject Switch::getTrackTintList()
	{
		return __thiz.callObjectMethod(
			"getTrackTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject Switch::getTrackTintMode()
	{
		return __thiz.callObjectMethod(
			"getTrackTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	void Switch::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void Switch::onMeasure(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean Switch::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Switch::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void Switch::setShowText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowText",
			"(Z)V",
			arg0
		);
	}
	void Switch::setSplitTrack(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSplitTrack",
			"(Z)V",
			arg0
		);
	}
	void Switch::setSwitchMinWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchMinWidth",
			"(I)V",
			arg0
		);
	}
	void Switch::setSwitchPadding(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchPadding",
			"(I)V",
			arg0
		);
	}
	void Switch::setSwitchTextAppearance(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSwitchTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Switch::setSwitchTypeface(__jni_impl::android::graphics::Typeface arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setSwitchTypeface(__jni_impl::android::graphics::Typeface arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Switch::setTextOff(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Switch::setTextOff(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Switch::setTextOn(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Switch::setTextOn(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Switch::setThumbDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setThumbResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThumbResource",
			"(I)V",
			arg0
		);
	}
	void Switch::setThumbTextPadding(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTextPadding",
			"(I)V",
			arg0
		);
	}
	void Switch::setThumbTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setThumbTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setThumbTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setTrackDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setTrackResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTrackResource",
			"(I)V",
			arg0
		);
	}
	void Switch::setTrackTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTrackTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setTrackTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTrackTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setTrackTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setTrackTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::toggle()
	{
		__thiz.callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Switch : public __jni_impl::android::widget::Switch
	{
	public:
		Switch(QAndroidJniObject obj) { __thiz = obj; }
		Switch(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		Switch(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Switch(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Switch(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_SWITCH


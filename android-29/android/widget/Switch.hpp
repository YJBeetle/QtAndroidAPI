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
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics
{
	class Typeface;
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
	class MotionEvent;
}

namespace __jni_impl::android::widget
{
	class Switch : public __jni_impl::android::widget::CompoundButton
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jint getCompoundPaddingLeft();
		jint getCompoundPaddingRight();
		QAndroidJniObject getAccessibilityClassName();
		void jumpDrawablesToCurrentState();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		void onMeasure(jint arg0, jint arg1);
		void setSwitchTextAppearance(__jni_impl::android::content::Context arg0, jint arg1);
		void setSwitchTypeface(__jni_impl::android::graphics::Typeface arg0);
		void setSwitchTypeface(__jni_impl::android::graphics::Typeface arg0, jint arg1);
		void setSwitchPadding(jint arg0);
		jint getSwitchPadding();
		void setSwitchMinWidth(jint arg0);
		jint getSwitchMinWidth();
		void setThumbTextPadding(jint arg0);
		jint getThumbTextPadding();
		void setTrackDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setTrackResource(jint arg0);
		QAndroidJniObject getTrackDrawable();
		void setTrackTintList(__jni_impl::android::content::res::ColorStateList arg0);
		QAndroidJniObject getTrackTintList();
		void setTrackTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setTrackTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		QAndroidJniObject getTrackTintMode();
		QAndroidJniObject getTrackTintBlendMode();
		void setThumbDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setThumbResource(jint arg0);
		QAndroidJniObject getThumbDrawable();
		void setThumbTintList(__jni_impl::android::content::res::ColorStateList arg0);
		QAndroidJniObject getThumbTintList();
		void setThumbTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setThumbTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		QAndroidJniObject getThumbTintMode();
		QAndroidJniObject getThumbTintBlendMode();
		void setSplitTrack(jboolean arg0);
		jboolean getSplitTrack();
		QAndroidJniObject getTextOn();
		void setTextOn(jstring arg0);
		QAndroidJniObject getTextOff();
		void setTextOff(jstring arg0);
		void setShowText(jboolean arg0);
		jboolean getShowText();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void toggle();
		void setChecked(jboolean arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../graphics/Typeface.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/BlendMode.hpp"
#include "../view/MotionEvent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void Switch::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void Switch::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void Switch::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Switch::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint Switch::getCompoundPaddingLeft()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I");
	}
	jint Switch::getCompoundPaddingRight()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingRight",
			"()I");
	}
	QAndroidJniObject Switch::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void Switch::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V");
	}
	void Switch::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	void Switch::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1);
	}
	void Switch::onMeasure(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1);
	}
	void Switch::setSwitchTextAppearance(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSwitchTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Switch::setSwitchTypeface(__jni_impl::android::graphics::Typeface arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;)V",
			arg0.__jniObject().object());
	}
	void Switch::setSwitchTypeface(__jni_impl::android::graphics::Typeface arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Switch::setSwitchPadding(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchPadding",
			"(I)V",
			arg0);
	}
	jint Switch::getSwitchPadding()
	{
		return __thiz.callMethod<jint>(
			"getSwitchPadding",
			"()I");
	}
	void Switch::setSwitchMinWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchMinWidth",
			"(I)V",
			arg0);
	}
	jint Switch::getSwitchMinWidth()
	{
		return __thiz.callMethod<jint>(
			"getSwitchMinWidth",
			"()I");
	}
	void Switch::setThumbTextPadding(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTextPadding",
			"(I)V",
			arg0);
	}
	jint Switch::getThumbTextPadding()
	{
		return __thiz.callMethod<jint>(
			"getThumbTextPadding",
			"()I");
	}
	void Switch::setTrackDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void Switch::setTrackResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTrackResource",
			"(I)V",
			arg0);
	}
	QAndroidJniObject Switch::getTrackDrawable()
	{
		return __thiz.callObjectMethod(
			"getTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;");
	}
	void Switch::setTrackTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTrackTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Switch::getTrackTintList()
	{
		return __thiz.callObjectMethod(
			"getTrackTintList",
			"()Landroid/content/res/ColorStateList;");
	}
	void Switch::setTrackTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setTrackTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object());
	}
	void Switch::setTrackTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTrackTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Switch::getTrackTintMode()
	{
		return __thiz.callObjectMethod(
			"getTrackTintMode",
			"()Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject Switch::getTrackTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getTrackTintBlendMode",
			"()Landroid/graphics/BlendMode;");
	}
	void Switch::setThumbDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void Switch::setThumbResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThumbResource",
			"(I)V",
			arg0);
	}
	QAndroidJniObject Switch::getThumbDrawable()
	{
		return __thiz.callObjectMethod(
			"getThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;");
	}
	void Switch::setThumbTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Switch::getThumbTintList()
	{
		return __thiz.callObjectMethod(
			"getThumbTintList",
			"()Landroid/content/res/ColorStateList;");
	}
	void Switch::setThumbTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object());
	}
	void Switch::setThumbTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Switch::getThumbTintMode()
	{
		return __thiz.callObjectMethod(
			"getThumbTintMode",
			"()Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject Switch::getThumbTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getThumbTintBlendMode",
			"()Landroid/graphics/BlendMode;");
	}
	void Switch::setSplitTrack(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSplitTrack",
			"(Z)V",
			arg0);
	}
	jboolean Switch::getSplitTrack()
	{
		return __thiz.callMethod<jboolean>(
			"getSplitTrack",
			"()Z");
	}
	QAndroidJniObject Switch::getTextOn()
	{
		return __thiz.callObjectMethod(
			"getTextOn",
			"()Ljava/lang/CharSequence;");
	}
	void Switch::setTextOn(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject Switch::getTextOff()
	{
		return __thiz.callObjectMethod(
			"getTextOff",
			"()Ljava/lang/CharSequence;");
	}
	void Switch::setTextOff(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void Switch::setShowText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowText",
			"(Z)V",
			arg0);
	}
	jboolean Switch::getShowText()
	{
		return __thiz.callMethod<jboolean>(
			"getShowText",
			"()Z");
	}
	jboolean Switch::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	void Switch::toggle()
	{
		__thiz.callMethod<void>(
			"toggle",
			"()V");
	}
	void Switch::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Switch : public __jni_impl::android::widget::Switch
	{
	public:
		Switch(QAndroidJniObject obj) { __thiz = obj; }
		Switch(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		Switch(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Switch(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Switch(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_SWITCH


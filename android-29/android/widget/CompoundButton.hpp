#pragma once

#ifndef ANDROID_WIDGET_COMPOUNDBUTTON
#define ANDROID_WIDGET_COMPOUNDBUTTON

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "TextView.hpp"
#include "Button.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
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

namespace __jni_impl::android::widget
{
	class CompoundButton : public __jni_impl::android::widget::Button
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jstring getAccessibilityClassName();
		void jumpDrawablesToCurrentState();
		jboolean performClick();
		void autofill(__jni_impl::android::view::autofill::AutofillValue arg0);
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		void toggle();
		jboolean isChecked();
		void setChecked(jboolean arg0);
		jint getCompoundPaddingLeft();
		jint getCompoundPaddingRight();
		void setOnCheckedChangeListener(__jni_impl::__JniBaseClass arg0);
		void setButtonDrawable(jint arg0);
		void setButtonDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getButtonDrawable();
		void setButtonTintList(__jni_impl::android::content::res::ColorStateList arg0);
		QAndroidJniObject getButtonTintList();
		void setButtonTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setButtonTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		QAndroidJniObject getButtonTintMode();
		QAndroidJniObject getButtonTintBlendMode();
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/BlendMode.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void CompoundButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void CompoundButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void CompoundButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CompoundButton::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring CompoundButton::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void CompoundButton::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	jboolean CompoundButton::performClick()
	{
		return __thiz.callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	void CompoundButton::autofill(__jni_impl::android::view::autofill::AutofillValue arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object()
		);
	}
	jint CompoundButton::getAutofillType()
	{
		return __thiz.callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	QAndroidJniObject CompoundButton::getAutofillValue()
	{
		return __thiz.callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	void CompoundButton::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void CompoundButton::toggle()
	{
		__thiz.callMethod<void>(
			"toggle",
			"()V"
		);
	}
	jboolean CompoundButton::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void CompoundButton::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	jint CompoundButton::getCompoundPaddingLeft()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	jint CompoundButton::getCompoundPaddingRight()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	void CompoundButton::setOnCheckedChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCheckedChangeListener",
			"(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void CompoundButton::setButtonDrawable(jint arg0)
	{
		__thiz.callMethod<void>(
			"setButtonDrawable",
			"(I)V",
			arg0
		);
	}
	void CompoundButton::setButtonDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setButtonDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompoundButton::getButtonDrawable()
	{
		return __thiz.callObjectMethod(
			"getButtonDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void CompoundButton::setButtonTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setButtonTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompoundButton::getButtonTintList()
	{
		return __thiz.callObjectMethod(
			"getButtonTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	void CompoundButton::setButtonTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setButtonTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void CompoundButton::setButtonTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setButtonTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompoundButton::getButtonTintMode()
	{
		return __thiz.callObjectMethod(
			"getButtonTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject CompoundButton::getButtonTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getButtonTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	void CompoundButton::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompoundButton::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class CompoundButton : public __jni_impl::android::widget::CompoundButton
	{
	public:
		CompoundButton(QAndroidJniObject obj) { __thiz = obj; }
		CompoundButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		CompoundButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		CompoundButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CompoundButton(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_COMPOUNDBUTTON


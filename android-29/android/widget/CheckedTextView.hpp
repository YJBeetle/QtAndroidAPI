#pragma once

#ifndef ANDROID_WIDGET_CHECKEDTEXTVIEW
#define ANDROID_WIDGET_CHECKEDTEXTVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "TextView.hpp"

namespace __jni_impl::android::content
{
	class Context;
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
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::widget
{
	class CheckedTextView : public __jni_impl::android::widget::TextView
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setCheckMarkDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setCheckMarkDrawable(jint arg0);
		void setCheckMarkTintList(__jni_impl::android::content::res::ColorStateList arg0);
		QAndroidJniObject getCheckMarkTintList();
		void setCheckMarkTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setCheckMarkTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		QAndroidJniObject getCheckMarkTintMode();
		QAndroidJniObject getCheckMarkTintBlendMode();
		QAndroidJniObject getCheckMarkDrawable();
		QAndroidJniObject getAccessibilityClassName();
		void jumpDrawablesToCurrentState();
		void setVisibility(jint arg0);
		void onRtlPropertiesChanged(jint arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
		void toggle();
		jboolean isChecked();
		void setChecked(jboolean arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void CheckedTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void CheckedTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void CheckedTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void CheckedTextView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void CheckedTextView::setCheckMarkDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void CheckedTextView::setCheckMarkDrawable(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkDrawable",
			"(I)V",
			arg0);
	}
	void CheckedTextView::setCheckMarkTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CheckedTextView::getCheckMarkTintList()
	{
		return __thiz.callObjectMethod(
			"getCheckMarkTintList",
			"()Landroid/content/res/ColorStateList;");
	}
	void CheckedTextView::setCheckMarkTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object());
	}
	void CheckedTextView::setCheckMarkTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CheckedTextView::getCheckMarkTintMode()
	{
		return __thiz.callObjectMethod(
			"getCheckMarkTintMode",
			"()Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject CheckedTextView::getCheckMarkTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getCheckMarkTintBlendMode",
			"()Landroid/graphics/BlendMode;");
	}
	QAndroidJniObject CheckedTextView::getCheckMarkDrawable()
	{
		return __thiz.callObjectMethod(
			"getCheckMarkDrawable",
			"()Landroid/graphics/drawable/Drawable;");
	}
	QAndroidJniObject CheckedTextView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void CheckedTextView::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V");
	}
	void CheckedTextView::setVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0);
	}
	void CheckedTextView::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0);
	}
	void CheckedTextView::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1);
	}
	void CheckedTextView::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CheckedTextView::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;");
	}
	void CheckedTextView::toggle()
	{
		__thiz.callMethod<void>(
			"toggle",
			"()V");
	}
	jboolean CheckedTextView::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z");
	}
	void CheckedTextView::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class CheckedTextView : public __jni_impl::android::widget::CheckedTextView
	{
	public:
		CheckedTextView(QAndroidJniObject obj) { __thiz = obj; }
		CheckedTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		CheckedTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		CheckedTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CheckedTextView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_CHECKEDTEXTVIEW


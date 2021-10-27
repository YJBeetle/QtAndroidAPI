#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "TextView.hpp"

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
	class CheckedTextView : public __jni_impl::android::widget::TextView
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
		QAndroidJniObject getCheckMarkDrawable();
		QAndroidJniObject getCheckMarkTintBlendMode();
		QAndroidJniObject getCheckMarkTintList();
		QAndroidJniObject getCheckMarkTintMode();
		jboolean isChecked();
		void jumpDrawablesToCurrentState();
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		void onRtlPropertiesChanged(jint arg0);
		QAndroidJniObject onSaveInstanceState();
		void setCheckMarkDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setCheckMarkDrawable(jint arg0);
		void setCheckMarkTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setCheckMarkTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setCheckMarkTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setChecked(jboolean arg0);
		void setVisibility(jint arg0);
		void toggle();
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
	void CheckedTextView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void CheckedTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CheckedTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckedTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void CheckedTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
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
	void CheckedTextView::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
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
	void CheckedTextView::setCheckMarkDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
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
	void CheckedTextView::setCheckMarkTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void CheckedTextView::setCheckMarkTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setCheckMarkTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void CheckedTextView::setCheckMarkTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
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
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class CheckedTextView : public __jni_impl::android::widget::CheckedTextView
	{
	public:
		CheckedTextView(QAndroidJniObject obj) { __thiz = obj; }
		CheckedTextView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		CheckedTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CheckedTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		CheckedTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget


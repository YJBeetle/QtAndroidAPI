#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
#include "./AbsSpinner.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class PointerIcon;
}

namespace __jni_impl::android::widget
{
	class Spinner : public __jni_impl::android::widget::AbsSpinner
	{
	public:
		// Fields
		static jint MODE_DIALOG();
		static jint MODE_DROPDOWN();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::content::res::Resources_Theme arg5);
		
		// Methods
		jstring getAccessibilityClassName();
		jint getBaseline();
		jint getDropDownHorizontalOffset();
		jint getDropDownVerticalOffset();
		jint getDropDownWidth();
		jint getGravity();
		QAndroidJniObject getPopupBackground();
		QAndroidJniObject getPopupContext();
		jstring getPrompt();
		void onClick(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1);
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean performClick();
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		void setDropDownHorizontalOffset(jint arg0);
		void setDropDownVerticalOffset(jint arg0);
		void setDropDownWidth(jint arg0);
		void setEnabled(jboolean arg0);
		void setGravity(jint arg0);
		void setOnItemClickListener(__jni_impl::__JniBaseClass arg0);
		void setPopupBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setPopupBackgroundResource(jint arg0);
		void setPrompt(jstring arg0);
		void setPrompt(const QString &arg0);
		void setPromptId(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint Spinner::MODE_DIALOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.Spinner",
			"MODE_DIALOG"
		);
	}
	jint Spinner::MODE_DROPDOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.Spinner",
			"MODE_DROPDOWN"
		);
	}
	
	// Constructors
	void Spinner::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void Spinner::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Spinner::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Spinner::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Spinner::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void Spinner::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	void Spinner::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::content::res::Resources_Theme arg5)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IIILandroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	
	// Methods
	jstring Spinner::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Spinner::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint Spinner::getDropDownHorizontalOffset()
	{
		return __thiz.callMethod<jint>(
			"getDropDownHorizontalOffset",
			"()I"
		);
	}
	jint Spinner::getDropDownVerticalOffset()
	{
		return __thiz.callMethod<jint>(
			"getDropDownVerticalOffset",
			"()I"
		);
	}
	jint Spinner::getDropDownWidth()
	{
		return __thiz.callMethod<jint>(
			"getDropDownWidth",
			"()I"
		);
	}
	jint Spinner::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	QAndroidJniObject Spinner::getPopupBackground()
	{
		return __thiz.callObjectMethod(
			"getPopupBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject Spinner::getPopupContext()
	{
		return __thiz.callObjectMethod(
			"getPopupContext",
			"()Landroid/content/Context;"
		);
	}
	jstring Spinner::getPrompt()
	{
		return __thiz.callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void Spinner::onClick(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Spinner::onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Spinner::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Spinner::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean Spinner::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Spinner::performClick()
	{
		return __thiz.callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	void Spinner::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object()
		);
	}
	void Spinner::setDropDownHorizontalOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	void Spinner::setDropDownVerticalOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownVerticalOffset",
			"(I)V",
			arg0
		);
	}
	void Spinner::setDropDownWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownWidth",
			"(I)V",
			arg0
		);
	}
	void Spinner::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void Spinner::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void Spinner::setOnItemClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Spinner::setPopupBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setPopupBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Spinner::setPopupBackgroundResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPopupBackgroundResource",
			"(I)V",
			arg0
		);
	}
	void Spinner::setPrompt(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPrompt",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Spinner::setPrompt(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPrompt",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Spinner::setPromptId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPromptId",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Spinner : public __jni_impl::android::widget::Spinner
	{
	public:
		Spinner(QAndroidJniObject obj) { __thiz = obj; }
		Spinner(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		Spinner(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Spinner(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Spinner(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Spinner(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		Spinner(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		Spinner(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::content::res::Resources_Theme arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::widget


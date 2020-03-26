#pragma once

#ifndef ANDROID_WIDGET_POPUPMENU
#define ANDROID_WIDGET_POPUPMENU

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class MenuInflater;
}

namespace __jni_impl::android::widget
{
	class PopupMenu : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, jint arg2, jint arg3, jint arg4);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1);
		
		// Methods
		void inflate(jint arg0);
		QAndroidJniObject getDragToOpenListener();
		void setForceShowIcon(jboolean arg0);
		void dismiss();
		void setOnDismissListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getMenuInflater();
		void show();
		void setGravity(jint arg0);
		jint getGravity();
		void setOnMenuItemClickListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getMenu();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/MenuInflater.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void PopupMenu::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4);
	}
	void PopupMenu::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void PopupMenu::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void PopupMenu::inflate(jint arg0)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject PopupMenu::getDragToOpenListener()
	{
		return __thiz.callObjectMethod(
			"getDragToOpenListener",
			"()Landroid/view/View$OnTouchListener;"
		);
	}
	void PopupMenu::setForceShowIcon(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setForceShowIcon",
			"(Z)V",
			arg0
		);
	}
	void PopupMenu::dismiss()
	{
		__thiz.callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	void PopupMenu::setOnDismissListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupMenu$OnDismissListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PopupMenu::getMenuInflater()
	{
		return __thiz.callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	void PopupMenu::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
	void PopupMenu::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	jint PopupMenu::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	void PopupMenu::setOnMenuItemClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PopupMenu::getMenu()
	{
		return __thiz.callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class PopupMenu : public __jni_impl::android::widget::PopupMenu
	{
	public:
		PopupMenu(QAndroidJniObject obj) { __thiz = obj; }
		PopupMenu(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		PopupMenu(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		PopupMenu(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_POPUPMENU


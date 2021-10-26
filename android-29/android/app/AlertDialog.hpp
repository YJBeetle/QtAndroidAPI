#pragma once

#ifndef ANDROID_APP_ALERTDIALOG
#define ANDROID_APP_ALERTDIALOG

#include "../../__JniBaseClass.hpp"
#include "Dialog.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::widget
{
	class Button;
}
namespace __jni_impl::android::widget
{
	class ListView;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::os
{
	class Message;
}

namespace __jni_impl::android::app
{
	class AlertDialog : public __jni_impl::android::app::Dialog
	{
	public:
		// Fields
		static jint THEME_DEVICE_DEFAULT_DARK();
		static jint THEME_DEVICE_DEFAULT_LIGHT();
		static jint THEME_HOLO_DARK();
		static jint THEME_HOLO_LIGHT();
		static jint THEME_TRADITIONAL();
		
		// Constructors
		void __constructor();
		
		// Methods
		void setMessage(jstring arg0);
		void setMessage(const QString &arg0);
		void setIcon(jint arg0);
		void setIcon(__jni_impl::android::graphics::drawable::Drawable arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		void setTitle(jstring arg0);
		void setTitle(const QString &arg0);
		QAndroidJniObject getButton(jint arg0);
		QAndroidJniObject getListView();
		void setCustomTitle(__jni_impl::android::view::View arg0);
		void setView(__jni_impl::android::view::View arg0);
		void setView(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setButton(jstring arg0, __jni_impl::android::os::Message arg1);
		void setButton(const QString &arg0, __jni_impl::android::os::Message arg1);
		void setButton(jint arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		void setButton(jint arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		void setButton(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void setButton(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void setButton(jint arg0, jstring arg1, __jni_impl::android::os::Message arg2);
		void setButton(jint arg0, const QString &arg1, __jni_impl::android::os::Message arg2);
		void setButton2(jstring arg0, __jni_impl::android::os::Message arg1);
		void setButton2(const QString &arg0, __jni_impl::android::os::Message arg1);
		void setButton2(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void setButton2(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void setButton3(jstring arg0, __jni_impl::android::os::Message arg1);
		void setButton3(const QString &arg0, __jni_impl::android::os::Message arg1);
		void setButton3(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void setButton3(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void setIconAttribute(jint arg0);
		void setInverseBackgroundForced(jboolean arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../view/KeyEvent.hpp"
#include "../widget/Button.hpp"
#include "../widget/ListView.hpp"
#include "../view/View.hpp"
#include "../os/Message.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jint AlertDialog::THEME_DEVICE_DEFAULT_DARK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_DEVICE_DEFAULT_DARK"
		);
	}
	jint AlertDialog::THEME_DEVICE_DEFAULT_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_DEVICE_DEFAULT_LIGHT"
		);
	}
	jint AlertDialog::THEME_HOLO_DARK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_HOLO_DARK"
		);
	}
	jint AlertDialog::THEME_HOLO_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_HOLO_LIGHT"
		);
	}
	jint AlertDialog::THEME_TRADITIONAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_TRADITIONAL"
		);
	}
	
	// Constructors
	void AlertDialog::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.AlertDialog",
			"(V)V");
	}
	
	// Methods
	void AlertDialog::setMessage(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setMessage",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AlertDialog::setMessage(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setMessage",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AlertDialog::setIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	void AlertDialog::setIcon(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AlertDialog::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AlertDialog::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AlertDialog::setTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject AlertDialog::getButton(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getButton",
			"(I)Landroid/widget/Button;",
			arg0
		);
	}
	QAndroidJniObject AlertDialog::getListView()
	{
		return __thiz.callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	void AlertDialog::setCustomTitle(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setCustomTitle",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AlertDialog::setView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AlertDialog::setView(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"setView",
			"(Landroid/view/View;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void AlertDialog::setButton(jstring arg0, __jni_impl::android::os::Message arg1)
	{
		__thiz.callMethod<void>(
			"setButton",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setButton(const QString &arg0, __jni_impl::android::os::Message arg1)
	{
		__thiz.callMethod<void>(
			"setButton",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setButton(jint arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setButton",
			"(ILjava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AlertDialog::setButton(jint arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setButton",
			"(ILjava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void AlertDialog::setButton(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setButton(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setButton(jint arg0, jstring arg1, __jni_impl::android::os::Message arg2)
	{
		__thiz.callMethod<void>(
			"setButton",
			"(ILjava/lang/CharSequence;Landroid/os/Message;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AlertDialog::setButton(jint arg0, const QString &arg1, __jni_impl::android::os::Message arg2)
	{
		__thiz.callMethod<void>(
			"setButton",
			"(ILjava/lang/CharSequence;Landroid/os/Message;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void AlertDialog::setButton2(jstring arg0, __jni_impl::android::os::Message arg1)
	{
		__thiz.callMethod<void>(
			"setButton2",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setButton2(const QString &arg0, __jni_impl::android::os::Message arg1)
	{
		__thiz.callMethod<void>(
			"setButton2",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setButton2(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setButton2",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setButton2(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setButton2",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setButton3(jstring arg0, __jni_impl::android::os::Message arg1)
	{
		__thiz.callMethod<void>(
			"setButton3",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setButton3(const QString &arg0, __jni_impl::android::os::Message arg1)
	{
		__thiz.callMethod<void>(
			"setButton3",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setButton3(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setButton3",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setButton3(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setButton3",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AlertDialog::setIconAttribute(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIconAttribute",
			"(I)V",
			arg0
		);
	}
	void AlertDialog::setInverseBackgroundForced(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setInverseBackgroundForced",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class AlertDialog : public __jni_impl::android::app::AlertDialog
	{
	public:
		AlertDialog(QAndroidJniObject obj) { __thiz = obj; }
		AlertDialog()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ALERTDIALOG


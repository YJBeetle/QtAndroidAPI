#pragma once

#ifndef ANDROID_PREFERENCE_DIALOGPREFERENCE
#define ANDROID_PREFERENCE_DIALOGPREFERENCE

#include "../../__JniBaseClass.hpp"
#include "Preference.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::app
{
	class AlertDialog_Builder;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::app
{
	class Dialog;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::preference
{
	class DialogPreference : public __jni_impl::android::preference::Preference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void setDialogTitle(jint arg0);
		void setDialogTitle(jstring arg0);
		QAndroidJniObject getDialogTitle();
		void setDialogMessage(jint arg0);
		void setDialogMessage(jstring arg0);
		QAndroidJniObject getDialogMessage();
		void setDialogIcon(jint arg0);
		void setDialogIcon(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getDialogIcon();
		void setPositiveButtonText(jstring arg0);
		void setPositiveButtonText(jint arg0);
		QAndroidJniObject getPositiveButtonText();
		void setNegativeButtonText(jint arg0);
		void setNegativeButtonText(jstring arg0);
		QAndroidJniObject getNegativeButtonText();
		void setDialogLayoutResource(jint arg0);
		jint getDialogLayoutResource();
		void onActivityDestroy();
		void onClick(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject getDialog();
		void onDismiss(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::preference

#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../app/AlertDialog_Builder.hpp"
#include "../view/View.hpp"
#include "../app/Dialog.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void DialogPreference::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void DialogPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void DialogPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void DialogPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	
	// Methods
	void DialogPreference::setDialogTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDialogTitle",
			"(I)V",
			arg0);
	}
	void DialogPreference::setDialogTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDialogTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject DialogPreference::getDialogTitle()
	{
		return __thiz.callObjectMethod(
			"getDialogTitle",
			"()Ljava/lang/CharSequence;");
	}
	void DialogPreference::setDialogMessage(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDialogMessage",
			"(I)V",
			arg0);
	}
	void DialogPreference::setDialogMessage(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDialogMessage",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject DialogPreference::getDialogMessage()
	{
		return __thiz.callObjectMethod(
			"getDialogMessage",
			"()Ljava/lang/CharSequence;");
	}
	void DialogPreference::setDialogIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDialogIcon",
			"(I)V",
			arg0);
	}
	void DialogPreference::setDialogIcon(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setDialogIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DialogPreference::getDialogIcon()
	{
		return __thiz.callObjectMethod(
			"getDialogIcon",
			"()Landroid/graphics/drawable/Drawable;");
	}
	void DialogPreference::setPositiveButtonText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPositiveButtonText",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void DialogPreference::setPositiveButtonText(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPositiveButtonText",
			"(I)V",
			arg0);
	}
	QAndroidJniObject DialogPreference::getPositiveButtonText()
	{
		return __thiz.callObjectMethod(
			"getPositiveButtonText",
			"()Ljava/lang/CharSequence;");
	}
	void DialogPreference::setNegativeButtonText(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNegativeButtonText",
			"(I)V",
			arg0);
	}
	void DialogPreference::setNegativeButtonText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNegativeButtonText",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject DialogPreference::getNegativeButtonText()
	{
		return __thiz.callObjectMethod(
			"getNegativeButtonText",
			"()Ljava/lang/CharSequence;");
	}
	void DialogPreference::setDialogLayoutResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDialogLayoutResource",
			"(I)V",
			arg0);
	}
	jint DialogPreference::getDialogLayoutResource()
	{
		return __thiz.callMethod<jint>(
			"getDialogLayoutResource",
			"()I");
	}
	void DialogPreference::onActivityDestroy()
	{
		__thiz.callMethod<void>(
			"onActivityDestroy",
			"()V");
	}
	void DialogPreference::onClick(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject DialogPreference::getDialog()
	{
		return __thiz.callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;");
	}
	void DialogPreference::onDismiss(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class DialogPreference : public __jni_impl::android::preference::DialogPreference
	{
	public:
		DialogPreference(QAndroidJniObject obj) { __thiz = obj; }
		DialogPreference(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		DialogPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DialogPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DialogPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_DIALOGPREFERENCE


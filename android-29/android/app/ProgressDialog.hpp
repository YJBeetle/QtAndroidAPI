#pragma once

#include "../../__JniBaseClass.hpp"
#include "Dialog.hpp"
#include "AlertDialog.hpp"

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
namespace __jni_impl::java::text
{
	class NumberFormat;
}

namespace __jni_impl::android::app
{
	class ProgressDialog : public __jni_impl::android::app::AlertDialog
	{
	public:
		// Fields
		static jint STYLE_HORIZONTAL();
		static jint STYLE_SPINNER();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		
		// Methods
		static QAndroidJniObject show(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject show(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2);
		static QAndroidJniObject show(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2, jboolean arg3);
		static QAndroidJniObject show(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2, jboolean arg3);
		static QAndroidJniObject show(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2, jboolean arg3, jboolean arg4);
		static QAndroidJniObject show(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2, jboolean arg3, jboolean arg4);
		static QAndroidJniObject show(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2, jboolean arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5);
		static QAndroidJniObject show(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2, jboolean arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5);
		jint getMax();
		jint getProgress();
		jint getSecondaryProgress();
		void incrementProgressBy(jint arg0);
		void incrementSecondaryProgressBy(jint arg0);
		jboolean isIndeterminate();
		void onStart();
		void setIndeterminate(jboolean arg0);
		void setIndeterminateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setMax(jint arg0);
		void setMessage(jstring arg0);
		void setMessage(const QString &arg0);
		void setProgress(jint arg0);
		void setProgressDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setProgressNumberFormat(jstring arg0);
		void setProgressNumberFormat(const QString &arg0);
		void setProgressPercentFormat(__jni_impl::java::text::NumberFormat arg0);
		void setProgressStyle(jint arg0);
		void setSecondaryProgress(jint arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../../java/text/NumberFormat.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jint ProgressDialog::STYLE_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ProgressDialog",
			"STYLE_HORIZONTAL"
		);
	}
	jint ProgressDialog::STYLE_SPINNER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ProgressDialog",
			"STYLE_SPINNER"
		);
	}
	
	// Constructors
	void ProgressDialog::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ProgressDialog",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressDialog::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.ProgressDialog",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject ProgressDialog::show(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/app/ProgressDialog;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ProgressDialog::show(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/app/ProgressDialog;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject ProgressDialog::show(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2, jboolean arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Z)Landroid/app/ProgressDialog;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject ProgressDialog::show(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2, jboolean arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Z)Landroid/app/ProgressDialog;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	QAndroidJniObject ProgressDialog::show(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2, jboolean arg3, jboolean arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZZ)Landroid/app/ProgressDialog;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject ProgressDialog::show(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2, jboolean arg3, jboolean arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZZ)Landroid/app/ProgressDialog;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4
		);
	}
	QAndroidJniObject ProgressDialog::show(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2, jboolean arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZZLandroid/content/DialogInterface$OnCancelListener;)Landroid/app/ProgressDialog;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject ProgressDialog::show(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2, jboolean arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZZLandroid/content/DialogInterface$OnCancelListener;)Landroid/app/ProgressDialog;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	jint ProgressDialog::getMax()
	{
		return __thiz.callMethod<jint>(
			"getMax",
			"()I"
		);
	}
	jint ProgressDialog::getProgress()
	{
		return __thiz.callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	jint ProgressDialog::getSecondaryProgress()
	{
		return __thiz.callMethod<jint>(
			"getSecondaryProgress",
			"()I"
		);
	}
	void ProgressDialog::incrementProgressBy(jint arg0)
	{
		__thiz.callMethod<void>(
			"incrementProgressBy",
			"(I)V",
			arg0
		);
	}
	void ProgressDialog::incrementSecondaryProgressBy(jint arg0)
	{
		__thiz.callMethod<void>(
			"incrementSecondaryProgressBy",
			"(I)V",
			arg0
		);
	}
	jboolean ProgressDialog::isIndeterminate()
	{
		return __thiz.callMethod<jboolean>(
			"isIndeterminate",
			"()Z"
		);
	}
	void ProgressDialog::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void ProgressDialog::setIndeterminate(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminate",
			"(Z)V",
			arg0
		);
	}
	void ProgressDialog::setIndeterminateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIndeterminateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressDialog::setMax(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	void ProgressDialog::setMessage(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setMessage",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ProgressDialog::setMessage(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setMessage",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ProgressDialog::setProgress(jint arg0)
	{
		__thiz.callMethod<void>(
			"setProgress",
			"(I)V",
			arg0
		);
	}
	void ProgressDialog::setProgressDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setProgressDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressDialog::setProgressNumberFormat(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setProgressNumberFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ProgressDialog::setProgressNumberFormat(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setProgressNumberFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ProgressDialog::setProgressPercentFormat(__jni_impl::java::text::NumberFormat arg0)
	{
		__thiz.callMethod<void>(
			"setProgressPercentFormat",
			"(Ljava/text/NumberFormat;)V",
			arg0.__jniObject().object()
		);
	}
	void ProgressDialog::setProgressStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setProgressStyle",
			"(I)V",
			arg0
		);
	}
	void ProgressDialog::setSecondaryProgress(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSecondaryProgress",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ProgressDialog : public __jni_impl::android::app::ProgressDialog
	{
	public:
		ProgressDialog(QAndroidJniObject obj) { __thiz = obj; }
		ProgressDialog(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		ProgressDialog(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app


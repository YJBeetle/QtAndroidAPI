#pragma once

#ifndef ANDROID_APP_DIALOGFRAGMENT
#define ANDROID_APP_DIALOGFRAGMENT

#include "../../__JniBaseClass.hpp"
#include "Fragment.hpp"

namespace __jni_impl::android::app
{
	class Dialog;
}
namespace __jni_impl::android::view
{
	class LayoutInflater;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::app
{
	class FragmentTransaction;
}
namespace __jni_impl::android::app
{
	class FragmentManager;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::app
{
	class DialogFragment : public __jni_impl::android::app::Fragment
	{
	public:
		// Fields
		static jint STYLE_NORMAL();
		static jint STYLE_NO_FRAME();
		static jint STYLE_NO_INPUT();
		static jint STYLE_NO_TITLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onStart();
		void onCancel(__jni_impl::__JniBaseClass arg0);
		void setStyle(jint arg0, jint arg1);
		void dismissAllowingStateLoss();
		QAndroidJniObject getDialog();
		jboolean isCancelable();
		void setShowsDialog(jboolean arg0);
		jboolean getShowsDialog();
		void onDestroyView();
		QAndroidJniObject onGetLayoutInflater(__jni_impl::android::os::Bundle arg0);
		void onAttach(__jni_impl::android::content::Context arg0);
		void onActivityCreated(__jni_impl::android::os::Bundle arg0);
		void onDetach();
		jint show(__jni_impl::android::app::FragmentTransaction arg0, jstring arg1);
		jint show(__jni_impl::android::app::FragmentTransaction arg0, const QString &arg1);
		void show(__jni_impl::android::app::FragmentManager arg0, jstring arg1);
		void show(__jni_impl::android::app::FragmentManager arg0, const QString &arg1);
		void dismiss();
		void setCancelable(jboolean arg0);
		jint getTheme();
		void dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		void dump(const QString &arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		void onCreate(__jni_impl::android::os::Bundle arg0);
		void onSaveInstanceState(__jni_impl::android::os::Bundle arg0);
		void onStop();
		QAndroidJniObject onCreateDialog(__jni_impl::android::os::Bundle arg0);
		void onDismiss(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::app

#include "Dialog.hpp"
#include "../view/LayoutInflater.hpp"
#include "../os/Bundle.hpp"
#include "../content/Context.hpp"
#include "FragmentTransaction.hpp"
#include "FragmentManager.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jint DialogFragment::STYLE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NORMAL"
		);
	}
	jint DialogFragment::STYLE_NO_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_FRAME"
		);
	}
	jint DialogFragment::STYLE_NO_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_INPUT"
		);
	}
	jint DialogFragment::STYLE_NO_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_TITLE"
		);
	}
	
	// Constructors
	void DialogFragment::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.DialogFragment",
			"()V"
		);
	}
	
	// Methods
	void DialogFragment::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void DialogFragment::onCancel(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCancel",
			"(Landroid/content/DialogInterface;)V",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::setStyle(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setStyle",
			"(II)V",
			arg0,
			arg1
		);
	}
	void DialogFragment::dismissAllowingStateLoss()
	{
		__thiz.callMethod<void>(
			"dismissAllowingStateLoss",
			"()V"
		);
	}
	QAndroidJniObject DialogFragment::getDialog()
	{
		return __thiz.callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	jboolean DialogFragment::isCancelable()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelable",
			"()Z"
		);
	}
	void DialogFragment::setShowsDialog(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowsDialog",
			"(Z)V",
			arg0
		);
	}
	jboolean DialogFragment::getShowsDialog()
	{
		return __thiz.callMethod<jboolean>(
			"getShowsDialog",
			"()Z"
		);
	}
	void DialogFragment::onDestroyView()
	{
		__thiz.callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	QAndroidJniObject DialogFragment::onGetLayoutInflater(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"onGetLayoutInflater",
			"(Landroid/os/Bundle;)Landroid/view/LayoutInflater;",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onAttach(__jni_impl::android::content::Context arg0)
	{
		__thiz.callMethod<void>(
			"onAttach",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onActivityCreated(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onDetach()
	{
		__thiz.callMethod<void>(
			"onDetach",
			"()V"
		);
	}
	jint DialogFragment::show(__jni_impl::android::app::FragmentTransaction arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"show",
			"(Landroid/app/FragmentTransaction;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint DialogFragment::show(__jni_impl::android::app::FragmentTransaction arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"show",
			"(Landroid/app/FragmentTransaction;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DialogFragment::show(__jni_impl::android::app::FragmentManager arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"show",
			"(Landroid/app/FragmentManager;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DialogFragment::show(__jni_impl::android::app::FragmentManager arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"show",
			"(Landroid/app/FragmentManager;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DialogFragment::dismiss()
	{
		__thiz.callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	void DialogFragment::setCancelable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCancelable",
			"(Z)V",
			arg0
		);
	}
	jint DialogFragment::getTheme()
	{
		return __thiz.callMethod<jint>(
			"getTheme",
			"()I"
		);
	}
	void DialogFragment::dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DialogFragment::dump(const QString &arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DialogFragment::onCreate(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onSaveInstanceState(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V"
		);
	}
	QAndroidJniObject DialogFragment::onCreateDialog(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateDialog",
			"(Landroid/os/Bundle;)Landroid/app/Dialog;",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onDismiss(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class DialogFragment : public __jni_impl::android::app::DialogFragment
	{
	public:
		DialogFragment(QAndroidJniObject obj) { __thiz = obj; }
		DialogFragment()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_DIALOGFRAGMENT


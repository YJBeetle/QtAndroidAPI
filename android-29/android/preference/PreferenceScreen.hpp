#pragma once

#ifndef ANDROID_PREFERENCE_PREFERENCESCREEN
#define ANDROID_PREFERENCE_PREFERENCESCREEN

#include "../../__JniBaseClass.hpp"
#include "Preference.hpp"
#include "PreferenceGroup.hpp"

namespace __jni_impl::android::app
{
	class Dialog;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::widget
{
	class AdapterView;
}
namespace __jni_impl::android::widget
{
	class ListView;
}

namespace __jni_impl::android::preference
{
	class PreferenceScreen : public __jni_impl::android::preference::PreferenceGroup
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void bind(__jni_impl::android::widget::ListView arg0);
		QAndroidJniObject getDialog();
		QAndroidJniObject getRootAdapter();
		void onDismiss(__jni_impl::__JniBaseClass arg0);
		void onItemClick(__jni_impl::android::widget::AdapterView arg0, __jni_impl::android::view::View arg1, jint arg2, jlong arg3);
	};
} // namespace __jni_impl::android::preference

#include "../app/Dialog.hpp"
#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../widget/AdapterView.hpp"
#include "../widget/ListView.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void PreferenceScreen::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceScreen",
			"(V)V");
	}
	
	// Methods
	void PreferenceScreen::bind(__jni_impl::android::widget::ListView arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Landroid/widget/ListView;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PreferenceScreen::getDialog()
	{
		return __thiz.callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	QAndroidJniObject PreferenceScreen::getRootAdapter()
	{
		return __thiz.callObjectMethod(
			"getRootAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	void PreferenceScreen::onDismiss(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceScreen::onItemClick(__jni_impl::android::widget::AdapterView arg0, __jni_impl::android::view::View arg1, jint arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"onItemClick",
			"(Landroid/widget/AdapterView;Landroid/view/View;IJ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class PreferenceScreen : public __jni_impl::android::preference::PreferenceScreen
	{
	public:
		PreferenceScreen(QAndroidJniObject obj) { __thiz = obj; }
		PreferenceScreen()
		{
			__constructor();
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_PREFERENCESCREEN


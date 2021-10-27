#pragma once

#ifndef ANDROID_PREFERENCE_PREFERENCEFRAGMENT
#define ANDROID_PREFERENCE_PREFERENCEFRAGMENT

#include "../../__JniBaseClass.hpp"
#include "../app/Fragment.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::preference
{
	class Preference;
}
namespace __jni_impl::android::preference
{
	class PreferenceManager;
}
namespace __jni_impl::android::preference
{
	class PreferenceScreen;
}
namespace __jni_impl::android::view
{
	class LayoutInflater;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}

namespace __jni_impl::android::preference
{
	class PreferenceFragment : public __jni_impl::android::app::Fragment
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void addPreferencesFromIntent(__jni_impl::android::content::Intent arg0);
		void addPreferencesFromResource(jint arg0);
		QAndroidJniObject findPreference(jstring arg0);
		QAndroidJniObject findPreference(const QString &arg0);
		QAndroidJniObject getPreferenceManager();
		QAndroidJniObject getPreferenceScreen();
		void onActivityCreated(__jni_impl::android::os::Bundle arg0);
		void onActivityResult(jint arg0, jint arg1, __jni_impl::android::content::Intent arg2);
		void onCreate(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject onCreateView(__jni_impl::android::view::LayoutInflater arg0, __jni_impl::android::view::ViewGroup arg1, __jni_impl::android::os::Bundle arg2);
		void onDestroy();
		void onDestroyView();
		jboolean onPreferenceTreeClick(__jni_impl::android::preference::PreferenceScreen arg0, __jni_impl::android::preference::Preference arg1);
		void onSaveInstanceState(__jni_impl::android::os::Bundle arg0);
		void onStart();
		void onStop();
		void onViewCreated(__jni_impl::android::view::View arg0, __jni_impl::android::os::Bundle arg1);
		void setPreferenceScreen(__jni_impl::android::preference::PreferenceScreen arg0);
	};
} // namespace __jni_impl::android::preference

#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "Preference.hpp"
#include "PreferenceManager.hpp"
#include "PreferenceScreen.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void PreferenceFragment::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceFragment",
			"()V"
		);
	}
	
	// Methods
	void PreferenceFragment::addPreferencesFromIntent(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"addPreferencesFromIntent",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceFragment::addPreferencesFromResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"addPreferencesFromResource",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject PreferenceFragment::findPreference(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0
		);
	}
	QAndroidJniObject PreferenceFragment::findPreference(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PreferenceFragment::getPreferenceManager()
	{
		return __thiz.callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
		);
	}
	QAndroidJniObject PreferenceFragment::getPreferenceScreen()
	{
		return __thiz.callObjectMethod(
			"getPreferenceScreen",
			"()Landroid/preference/PreferenceScreen;"
		);
	}
	void PreferenceFragment::onActivityCreated(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceFragment::onActivityResult(jint arg0, jint arg1, __jni_impl::android::content::Intent arg2)
	{
		__thiz.callMethod<void>(
			"onActivityResult",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void PreferenceFragment::onCreate(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PreferenceFragment::onCreateView(__jni_impl::android::view::LayoutInflater arg0, __jni_impl::android::view::ViewGroup arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void PreferenceFragment::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void PreferenceFragment::onDestroyView()
	{
		__thiz.callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	jboolean PreferenceFragment::onPreferenceTreeClick(__jni_impl::android::preference::PreferenceScreen arg0, __jni_impl::android::preference::Preference arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onPreferenceTreeClick",
			"(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void PreferenceFragment::onSaveInstanceState(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceFragment::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void PreferenceFragment::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V"
		);
	}
	void PreferenceFragment::onViewCreated(__jni_impl::android::view::View arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void PreferenceFragment::setPreferenceScreen(__jni_impl::android::preference::PreferenceScreen arg0)
	{
		__thiz.callMethod<void>(
			"setPreferenceScreen",
			"(Landroid/preference/PreferenceScreen;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class PreferenceFragment : public __jni_impl::android::preference::PreferenceFragment
	{
	public:
		PreferenceFragment(QAndroidJniObject obj) { __thiz = obj; }
		PreferenceFragment()
		{
			__constructor();
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_PREFERENCEFRAGMENT


#pragma once

#ifndef ANDROID_PREFERENCE_PREFERENCEFRAGMENT
#define ANDROID_PREFERENCE_PREFERENCEFRAGMENT

#include "../../__JniBaseClass.hpp"
#include "../app/Fragment.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::view
{
	class LayoutInflater;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::preference
{
	class PreferenceManager;
}
namespace __jni_impl::android::preference
{
	class PreferenceScreen;
}
namespace __jni_impl::android::preference
{
	class Preference;
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
		void onStart();
		void onDestroyView();
		void onViewCreated(__jni_impl::android::view::View arg0, __jni_impl::android::os::Bundle arg1);
		void onActivityCreated(__jni_impl::android::os::Bundle arg0);
		void onCreate(__jni_impl::android::os::Bundle arg0);
		void onSaveInstanceState(__jni_impl::android::os::Bundle arg0);
		void onStop();
		void onDestroy();
		void onActivityResult(jint arg0, jint arg1, __jni_impl::android::content::Intent arg2);
		QAndroidJniObject onCreateView(__jni_impl::android::view::LayoutInflater arg0, __jni_impl::android::view::ViewGroup arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject getPreferenceManager();
		void setPreferenceScreen(__jni_impl::android::preference::PreferenceScreen arg0);
		QAndroidJniObject getPreferenceScreen();
		void addPreferencesFromIntent(__jni_impl::android::content::Intent arg0);
		void addPreferencesFromResource(jint arg0);
		jboolean onPreferenceTreeClick(__jni_impl::android::preference::PreferenceScreen arg0, __jni_impl::android::preference::Preference arg1);
		QAndroidJniObject findPreference(jstring arg0);
	};
} // namespace __jni_impl::android::preference

#include "../view/View.hpp"
#include "../os/Bundle.hpp"
#include "../content/Intent.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/ViewGroup.hpp"
#include "PreferenceManager.hpp"
#include "PreferenceScreen.hpp"
#include "Preference.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void PreferenceFragment::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceFragment",
			"()V");
	}
	
	// Methods
	void PreferenceFragment::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
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
	void PreferenceFragment::onViewCreated(__jni_impl::android::view::View arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	void PreferenceFragment::onCreate(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
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
	void PreferenceFragment::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V"
		);
	}
	void PreferenceFragment::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
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
	QAndroidJniObject PreferenceFragment::getPreferenceManager()
	{
		return __thiz.callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
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
	QAndroidJniObject PreferenceFragment::getPreferenceScreen()
	{
		return __thiz.callObjectMethod(
			"getPreferenceScreen",
			"()Landroid/preference/PreferenceScreen;"
		);
	}
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
	jboolean PreferenceFragment::onPreferenceTreeClick(__jni_impl::android::preference::PreferenceScreen arg0, __jni_impl::android::preference::Preference arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onPreferenceTreeClick",
			"(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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


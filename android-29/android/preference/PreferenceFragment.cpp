#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "./Preference.hpp"
#include "./PreferenceManager.hpp"
#include "./PreferenceScreen.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./PreferenceFragment.hpp"

namespace android::preference
{
	// Fields
	
	PreferenceFragment::PreferenceFragment(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PreferenceFragment::PreferenceFragment()
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceFragment",
			"()V"
		);
	}
	
	// Methods
	void PreferenceFragment::addPreferencesFromIntent(android::content::Intent arg0)
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
	void PreferenceFragment::onActivityCreated(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceFragment::onActivityResult(jint arg0, jint arg1, android::content::Intent arg2)
	{
		__thiz.callMethod<void>(
			"onActivityResult",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void PreferenceFragment::onCreate(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PreferenceFragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2)
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
	jboolean PreferenceFragment::onPreferenceTreeClick(android::preference::PreferenceScreen arg0, android::preference::Preference arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onPreferenceTreeClick",
			"(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void PreferenceFragment::onSaveInstanceState(android::os::Bundle arg0)
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
	void PreferenceFragment::onViewCreated(android::view::View arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void PreferenceFragment::setPreferenceScreen(android::preference::PreferenceScreen arg0)
	{
		__thiz.callMethod<void>(
			"setPreferenceScreen",
			"(Landroid/preference/PreferenceScreen;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::preference


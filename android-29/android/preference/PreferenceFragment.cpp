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
	
	// QAndroidJniObject forward
	PreferenceFragment::PreferenceFragment(QAndroidJniObject obj) : android::app::Fragment(obj) {}
	
	// Constructors
	PreferenceFragment::PreferenceFragment()
		: android::app::Fragment(
			"android.preference.PreferenceFragment",
			"()V"
		) {}
	
	// Methods
	void PreferenceFragment::addPreferencesFromIntent(android::content::Intent arg0)
	{
		callMethod<void>(
			"addPreferencesFromIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void PreferenceFragment::addPreferencesFromResource(jint arg0)
	{
		callMethod<void>(
			"addPreferencesFromResource",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject PreferenceFragment::findPreference(jstring arg0)
	{
		return callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0
		);
	}
	QAndroidJniObject PreferenceFragment::getPreferenceManager()
	{
		return callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
		);
	}
	QAndroidJniObject PreferenceFragment::getPreferenceScreen()
	{
		return callObjectMethod(
			"getPreferenceScreen",
			"()Landroid/preference/PreferenceScreen;"
		);
	}
	void PreferenceFragment::onActivityCreated(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void PreferenceFragment::onActivityResult(jint arg0, jint arg1, android::content::Intent arg2)
	{
		callMethod<void>(
			"onActivityResult",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void PreferenceFragment::onCreate(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	QAndroidJniObject PreferenceFragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void PreferenceFragment::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void PreferenceFragment::onDestroyView()
	{
		callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	jboolean PreferenceFragment::onPreferenceTreeClick(android::preference::PreferenceScreen arg0, android::preference::Preference arg1)
	{
		return callMethod<jboolean>(
			"onPreferenceTreeClick",
			"(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void PreferenceFragment::onSaveInstanceState(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void PreferenceFragment::onStart()
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void PreferenceFragment::onStop()
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
	void PreferenceFragment::onViewCreated(android::view::View arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void PreferenceFragment::setPreferenceScreen(android::preference::PreferenceScreen arg0)
	{
		callMethod<void>(
			"setPreferenceScreen",
			"(Landroid/preference/PreferenceScreen;)V",
			arg0.object()
		);
	}
} // namespace android::preference


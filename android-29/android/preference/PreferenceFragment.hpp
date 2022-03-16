#pragma once

#include "../content/Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./Preference.def.hpp"
#include "./PreferenceManager.def.hpp"
#include "./PreferenceScreen.def.hpp"
#include "../view/LayoutInflater.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "../../JString.hpp"
#include "./PreferenceFragment.def.hpp"

namespace android::preference
{
	// Fields
	
	// Constructors
	inline PreferenceFragment::PreferenceFragment()
		: android::app::Fragment(
			"android.preference.PreferenceFragment",
			"()V"
		) {}
	
	// Methods
	inline void PreferenceFragment::addPreferencesFromIntent(android::content::Intent arg0) const
	{
		callMethod<void>(
			"addPreferencesFromIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void PreferenceFragment::addPreferencesFromResource(jint arg0) const
	{
		callMethod<void>(
			"addPreferencesFromResource",
			"(I)V",
			arg0
		);
	}
	inline android::preference::Preference PreferenceFragment::findPreference(JString arg0) const
	{
		return callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0.object<jstring>()
		);
	}
	inline android::preference::PreferenceManager PreferenceFragment::getPreferenceManager() const
	{
		return callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
		);
	}
	inline android::preference::PreferenceScreen PreferenceFragment::getPreferenceScreen() const
	{
		return callObjectMethod(
			"getPreferenceScreen",
			"()Landroid/preference/PreferenceScreen;"
		);
	}
	inline void PreferenceFragment::onActivityCreated(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void PreferenceFragment::onActivityResult(jint arg0, jint arg1, android::content::Intent arg2) const
	{
		callMethod<void>(
			"onActivityResult",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void PreferenceFragment::onCreate(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline android::view::View PreferenceFragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void PreferenceFragment::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void PreferenceFragment::onDestroyView() const
	{
		callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	inline jboolean PreferenceFragment::onPreferenceTreeClick(android::preference::PreferenceScreen arg0, android::preference::Preference arg1) const
	{
		return callMethod<jboolean>(
			"onPreferenceTreeClick",
			"(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void PreferenceFragment::onSaveInstanceState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void PreferenceFragment::onStart() const
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	inline void PreferenceFragment::onStop() const
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
	inline void PreferenceFragment::onViewCreated(android::view::View arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void PreferenceFragment::setPreferenceScreen(android::preference::PreferenceScreen arg0) const
	{
		callMethod<void>(
			"setPreferenceScreen",
			"(Landroid/preference/PreferenceScreen;)V",
			arg0.object()
		);
	}
} // namespace android::preference

// Base class headers
#include "../app/Fragment.hpp"


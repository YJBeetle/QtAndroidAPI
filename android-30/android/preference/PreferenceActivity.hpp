#pragma once

#include "../app/Fragment.def.hpp"
#include "../content/Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./Preference.def.hpp"
#include "./PreferenceActivity_Header.def.hpp"
#include "./PreferenceFragment.def.hpp"
#include "./PreferenceManager.def.hpp"
#include "./PreferenceScreen.def.hpp"
#include "../view/View.def.hpp"
#include "../widget/ListView.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./PreferenceActivity.def.hpp"

namespace android::preference
{
	// Fields
	inline JString PreferenceActivity::EXTRA_NO_HEADERS()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_NO_HEADERS",
			"Ljava/lang/String;"
		);
	}
	inline JString PreferenceActivity::EXTRA_SHOW_FRAGMENT()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT",
			"Ljava/lang/String;"
		);
	}
	inline JString PreferenceActivity::EXTRA_SHOW_FRAGMENT_ARGUMENTS()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT_ARGUMENTS",
			"Ljava/lang/String;"
		);
	}
	inline JString PreferenceActivity::EXTRA_SHOW_FRAGMENT_SHORT_TITLE()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT_SHORT_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString PreferenceActivity::EXTRA_SHOW_FRAGMENT_TITLE()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline jlong PreferenceActivity::HEADER_ID_UNDEFINED()
	{
		return getStaticField<jlong>(
			"android.preference.PreferenceActivity",
			"HEADER_ID_UNDEFINED"
		);
	}
	
	// Constructors
	inline PreferenceActivity::PreferenceActivity()
		: android::app::ListActivity(
			"android.preference.PreferenceActivity",
			"()V"
		) {}
	
	// Methods
	inline void PreferenceActivity::addPreferencesFromIntent(android::content::Intent arg0) const
	{
		callMethod<void>(
			"addPreferencesFromIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void PreferenceActivity::addPreferencesFromResource(jint arg0) const
	{
		callMethod<void>(
			"addPreferencesFromResource",
			"(I)V",
			arg0
		);
	}
	inline android::preference::Preference PreferenceActivity::findPreference(JString arg0) const
	{
		return callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0.object<jstring>()
		);
	}
	inline void PreferenceActivity::finishPreferencePanel(android::app::Fragment arg0, jint arg1, android::content::Intent arg2) const
	{
		callMethod<void>(
			"finishPreferencePanel",
			"(Landroid/app/Fragment;ILandroid/content/Intent;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline android::preference::PreferenceManager PreferenceActivity::getPreferenceManager() const
	{
		return callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
		);
	}
	inline android::preference::PreferenceScreen PreferenceActivity::getPreferenceScreen() const
	{
		return callObjectMethod(
			"getPreferenceScreen",
			"()Landroid/preference/PreferenceScreen;"
		);
	}
	inline jboolean PreferenceActivity::hasHeaders() const
	{
		return callMethod<jboolean>(
			"hasHeaders",
			"()Z"
		);
	}
	inline void PreferenceActivity::invalidateHeaders() const
	{
		callMethod<void>(
			"invalidateHeaders",
			"()V"
		);
	}
	inline jboolean PreferenceActivity::isMultiPane() const
	{
		return callMethod<jboolean>(
			"isMultiPane",
			"()Z"
		);
	}
	inline void PreferenceActivity::loadHeadersFromResource(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"loadHeadersFromResource",
			"(ILjava/util/List;)V",
			arg0,
			arg1.object()
		);
	}
	inline void PreferenceActivity::onBackPressed() const
	{
		callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	inline void PreferenceActivity::onBuildHeaders(JObject arg0) const
	{
		callMethod<void>(
			"onBuildHeaders",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline android::content::Intent PreferenceActivity::onBuildStartFragmentIntent(JString arg0, android::os::Bundle arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"onBuildStartFragmentIntent",
			"(Ljava/lang/String;Landroid/os/Bundle;II)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline void PreferenceActivity::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	inline android::preference::PreferenceActivity_Header PreferenceActivity::onGetInitialHeader() const
	{
		return callObjectMethod(
			"onGetInitialHeader",
			"()Landroid/preference/PreferenceActivity$Header;"
		);
	}
	inline android::preference::PreferenceActivity_Header PreferenceActivity::onGetNewHeader() const
	{
		return callObjectMethod(
			"onGetNewHeader",
			"()Landroid/preference/PreferenceActivity$Header;"
		);
	}
	inline void PreferenceActivity::onHeaderClick(android::preference::PreferenceActivity_Header arg0, jint arg1) const
	{
		callMethod<void>(
			"onHeaderClick",
			"(Landroid/preference/PreferenceActivity$Header;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean PreferenceActivity::onIsHidingHeaders() const
	{
		return callMethod<jboolean>(
			"onIsHidingHeaders",
			"()Z"
		);
	}
	inline jboolean PreferenceActivity::onIsMultiPane() const
	{
		return callMethod<jboolean>(
			"onIsMultiPane",
			"()Z"
		);
	}
	inline jboolean PreferenceActivity::onOptionsItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	inline jboolean PreferenceActivity::onPreferenceStartFragment(android::preference::PreferenceFragment arg0, android::preference::Preference arg1) const
	{
		return callMethod<jboolean>(
			"onPreferenceStartFragment",
			"(Landroid/preference/PreferenceFragment;Landroid/preference/Preference;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean PreferenceActivity::onPreferenceTreeClick(android::preference::PreferenceScreen arg0, android::preference::Preference arg1) const
	{
		return callMethod<jboolean>(
			"onPreferenceTreeClick",
			"(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void PreferenceActivity::setListFooter(android::view::View arg0) const
	{
		callMethod<void>(
			"setListFooter",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void PreferenceActivity::setParentTitle(JString arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"setParentTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/view/View$OnClickListener;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void PreferenceActivity::setPreferenceScreen(android::preference::PreferenceScreen arg0) const
	{
		callMethod<void>(
			"setPreferenceScreen",
			"(Landroid/preference/PreferenceScreen;)V",
			arg0.object()
		);
	}
	inline void PreferenceActivity::showBreadCrumbs(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"showBreadCrumbs",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void PreferenceActivity::startPreferenceFragment(android::app::Fragment arg0, jboolean arg1) const
	{
		callMethod<void>(
			"startPreferenceFragment",
			"(Landroid/app/Fragment;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void PreferenceActivity::startPreferencePanel(JString arg0, android::os::Bundle arg1, jint arg2, JString arg3, android::app::Fragment arg4, jint arg5) const
	{
		callMethod<void>(
			"startPreferencePanel",
			"(Ljava/lang/String;Landroid/os/Bundle;ILjava/lang/CharSequence;Landroid/app/Fragment;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object<jstring>(),
			arg4.object(),
			arg5
		);
	}
	inline void PreferenceActivity::startWithFragment(JString arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3) const
	{
		callMethod<void>(
			"startWithFragment",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline void PreferenceActivity::startWithFragment(JString arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3, jint arg4, jint arg5) const
	{
		callMethod<void>(
			"startWithFragment",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;III)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4,
			arg5
		);
	}
	inline void PreferenceActivity::switchToHeader(android::preference::PreferenceActivity_Header arg0) const
	{
		callMethod<void>(
			"switchToHeader",
			"(Landroid/preference/PreferenceActivity$Header;)V",
			arg0.object()
		);
	}
	inline void PreferenceActivity::switchToHeader(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"switchToHeader",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::preference

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "../app/Activity.hpp"
#include "../app/ListActivity.hpp"


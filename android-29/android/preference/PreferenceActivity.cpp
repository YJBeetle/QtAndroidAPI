#include "../app/Fragment.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "./Preference.hpp"
#include "./PreferenceActivity_Header.hpp"
#include "./PreferenceFragment.hpp"
#include "./PreferenceManager.hpp"
#include "./PreferenceScreen.hpp"
#include "../view/View.hpp"
#include "../widget/ListView.hpp"
#include "./PreferenceActivity.hpp"

namespace android::preference
{
	// Fields
	jstring PreferenceActivity::EXTRA_NO_HEADERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_NO_HEADERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PreferenceActivity::EXTRA_SHOW_FRAGMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PreferenceActivity::EXTRA_SHOW_FRAGMENT_ARGUMENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT_ARGUMENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PreferenceActivity::EXTRA_SHOW_FRAGMENT_SHORT_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT_SHORT_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PreferenceActivity::EXTRA_SHOW_FRAGMENT_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong PreferenceActivity::HEADER_ID_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.preference.PreferenceActivity",
			"HEADER_ID_UNDEFINED"
		);
	}
	
	// QAndroidJniObject forward
	PreferenceActivity::PreferenceActivity(QAndroidJniObject obj) : android::app::ListActivity(obj) {}
	
	// Constructors
	PreferenceActivity::PreferenceActivity()
		: android::app::ListActivity(
			"android.preference.PreferenceActivity",
			"()V"
		) {}
	
	// Methods
	void PreferenceActivity::addPreferencesFromIntent(android::content::Intent arg0)
	{
		callMethod<void>(
			"addPreferencesFromIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void PreferenceActivity::addPreferencesFromResource(jint arg0)
	{
		callMethod<void>(
			"addPreferencesFromResource",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject PreferenceActivity::findPreference(jstring arg0)
	{
		return callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0
		);
	}
	void PreferenceActivity::finishPreferencePanel(android::app::Fragment arg0, jint arg1, android::content::Intent arg2)
	{
		callMethod<void>(
			"finishPreferencePanel",
			"(Landroid/app/Fragment;ILandroid/content/Intent;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject PreferenceActivity::getPreferenceManager()
	{
		return callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
		);
	}
	QAndroidJniObject PreferenceActivity::getPreferenceScreen()
	{
		return callObjectMethod(
			"getPreferenceScreen",
			"()Landroid/preference/PreferenceScreen;"
		);
	}
	jboolean PreferenceActivity::hasHeaders()
	{
		return callMethod<jboolean>(
			"hasHeaders",
			"()Z"
		);
	}
	void PreferenceActivity::invalidateHeaders()
	{
		callMethod<void>(
			"invalidateHeaders",
			"()V"
		);
	}
	jboolean PreferenceActivity::isMultiPane()
	{
		return callMethod<jboolean>(
			"isMultiPane",
			"()Z"
		);
	}
	void PreferenceActivity::loadHeadersFromResource(jint arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"loadHeadersFromResource",
			"(ILjava/util/List;)V",
			arg0,
			arg1.object()
		);
	}
	void PreferenceActivity::onBackPressed()
	{
		callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	void PreferenceActivity::onBuildHeaders(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onBuildHeaders",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	QAndroidJniObject PreferenceActivity::onBuildStartFragmentIntent(jstring arg0, android::os::Bundle arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"onBuildStartFragmentIntent",
			"(Ljava/lang/String;Landroid/os/Bundle;II)Landroid/content/Intent;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	void PreferenceActivity::onContentChanged()
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	QAndroidJniObject PreferenceActivity::onGetInitialHeader()
	{
		return callObjectMethod(
			"onGetInitialHeader",
			"()Landroid/preference/PreferenceActivity$Header;"
		);
	}
	QAndroidJniObject PreferenceActivity::onGetNewHeader()
	{
		return callObjectMethod(
			"onGetNewHeader",
			"()Landroid/preference/PreferenceActivity$Header;"
		);
	}
	void PreferenceActivity::onHeaderClick(android::preference::PreferenceActivity_Header arg0, jint arg1)
	{
		callMethod<void>(
			"onHeaderClick",
			"(Landroid/preference/PreferenceActivity$Header;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean PreferenceActivity::onIsHidingHeaders()
	{
		return callMethod<jboolean>(
			"onIsHidingHeaders",
			"()Z"
		);
	}
	jboolean PreferenceActivity::onIsMultiPane()
	{
		return callMethod<jboolean>(
			"onIsMultiPane",
			"()Z"
		);
	}
	jboolean PreferenceActivity::onOptionsItemSelected(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	jboolean PreferenceActivity::onPreferenceStartFragment(android::preference::PreferenceFragment arg0, android::preference::Preference arg1)
	{
		return callMethod<jboolean>(
			"onPreferenceStartFragment",
			"(Landroid/preference/PreferenceFragment;Landroid/preference/Preference;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean PreferenceActivity::onPreferenceTreeClick(android::preference::PreferenceScreen arg0, android::preference::Preference arg1)
	{
		return callMethod<jboolean>(
			"onPreferenceTreeClick",
			"(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void PreferenceActivity::setListFooter(android::view::View arg0)
	{
		callMethod<void>(
			"setListFooter",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void PreferenceActivity::setParentTitle(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"setParentTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/view/View$OnClickListener;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void PreferenceActivity::setPreferenceScreen(android::preference::PreferenceScreen arg0)
	{
		callMethod<void>(
			"setPreferenceScreen",
			"(Landroid/preference/PreferenceScreen;)V",
			arg0.object()
		);
	}
	void PreferenceActivity::showBreadCrumbs(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"showBreadCrumbs",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void PreferenceActivity::startPreferenceFragment(android::app::Fragment arg0, jboolean arg1)
	{
		callMethod<void>(
			"startPreferenceFragment",
			"(Landroid/app/Fragment;Z)V",
			arg0.object(),
			arg1
		);
	}
	void PreferenceActivity::startPreferencePanel(jstring arg0, android::os::Bundle arg1, jint arg2, jstring arg3, android::app::Fragment arg4, jint arg5)
	{
		callMethod<void>(
			"startPreferencePanel",
			"(Ljava/lang/String;Landroid/os/Bundle;ILjava/lang/CharSequence;Landroid/app/Fragment;I)V",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
	void PreferenceActivity::startWithFragment(jstring arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3)
	{
		callMethod<void>(
			"startWithFragment",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;I)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	void PreferenceActivity::startWithFragment(jstring arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3, jint arg4, jint arg5)
	{
		callMethod<void>(
			"startWithFragment",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;III)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3,
			arg4,
			arg5
		);
	}
	void PreferenceActivity::switchToHeader(android::preference::PreferenceActivity_Header arg0)
	{
		callMethod<void>(
			"switchToHeader",
			"(Landroid/preference/PreferenceActivity$Header;)V",
			arg0.object()
		);
	}
	void PreferenceActivity::switchToHeader(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"switchToHeader",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::preference


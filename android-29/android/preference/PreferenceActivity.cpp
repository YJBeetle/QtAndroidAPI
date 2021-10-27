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
	
	PreferenceActivity::PreferenceActivity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PreferenceActivity::PreferenceActivity()
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceActivity",
			"()V"
		);
	}
	
	// Methods
	void PreferenceActivity::addPreferencesFromIntent(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"addPreferencesFromIntent",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceActivity::addPreferencesFromResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"addPreferencesFromResource",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject PreferenceActivity::findPreference(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0
		);
	}
	QAndroidJniObject PreferenceActivity::findPreference(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void PreferenceActivity::finishPreferencePanel(android::app::Fragment arg0, jint arg1, android::content::Intent arg2)
	{
		__thiz.callMethod<void>(
			"finishPreferencePanel",
			"(Landroid/app/Fragment;ILandroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject PreferenceActivity::getPreferenceManager()
	{
		return __thiz.callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
		);
	}
	QAndroidJniObject PreferenceActivity::getPreferenceScreen()
	{
		return __thiz.callObjectMethod(
			"getPreferenceScreen",
			"()Landroid/preference/PreferenceScreen;"
		);
	}
	jboolean PreferenceActivity::hasHeaders()
	{
		return __thiz.callMethod<jboolean>(
			"hasHeaders",
			"()Z"
		);
	}
	void PreferenceActivity::invalidateHeaders()
	{
		__thiz.callMethod<void>(
			"invalidateHeaders",
			"()V"
		);
	}
	jboolean PreferenceActivity::isMultiPane()
	{
		return __thiz.callMethod<jboolean>(
			"isMultiPane",
			"()Z"
		);
	}
	void PreferenceActivity::loadHeadersFromResource(jint arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"loadHeadersFromResource",
			"(ILjava/util/List;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void PreferenceActivity::onBackPressed()
	{
		__thiz.callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	void PreferenceActivity::onBuildHeaders(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onBuildHeaders",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PreferenceActivity::onBuildStartFragmentIntent(jstring arg0, android::os::Bundle arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"onBuildStartFragmentIntent",
			"(Ljava/lang/String;Landroid/os/Bundle;II)Landroid/content/Intent;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject PreferenceActivity::onBuildStartFragmentIntent(const QString &arg0, android::os::Bundle arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"onBuildStartFragmentIntent",
			"(Ljava/lang/String;Landroid/os/Bundle;II)Landroid/content/Intent;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void PreferenceActivity::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	QAndroidJniObject PreferenceActivity::onGetInitialHeader()
	{
		return __thiz.callObjectMethod(
			"onGetInitialHeader",
			"()Landroid/preference/PreferenceActivity$Header;"
		);
	}
	QAndroidJniObject PreferenceActivity::onGetNewHeader()
	{
		return __thiz.callObjectMethod(
			"onGetNewHeader",
			"()Landroid/preference/PreferenceActivity$Header;"
		);
	}
	void PreferenceActivity::onHeaderClick(android::preference::PreferenceActivity_Header arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onHeaderClick",
			"(Landroid/preference/PreferenceActivity$Header;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean PreferenceActivity::onIsHidingHeaders()
	{
		return __thiz.callMethod<jboolean>(
			"onIsHidingHeaders",
			"()Z"
		);
	}
	jboolean PreferenceActivity::onIsMultiPane()
	{
		return __thiz.callMethod<jboolean>(
			"onIsMultiPane",
			"()Z"
		);
	}
	jboolean PreferenceActivity::onOptionsItemSelected(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean PreferenceActivity::onPreferenceStartFragment(android::preference::PreferenceFragment arg0, android::preference::Preference arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onPreferenceStartFragment",
			"(Landroid/preference/PreferenceFragment;Landroid/preference/Preference;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean PreferenceActivity::onPreferenceTreeClick(android::preference::PreferenceScreen arg0, android::preference::Preference arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onPreferenceTreeClick",
			"(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void PreferenceActivity::setListFooter(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setListFooter",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceActivity::setParentTitle(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setParentTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/view/View$OnClickListener;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void PreferenceActivity::setParentTitle(const QString &arg0, const QString &arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setParentTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/view/View$OnClickListener;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void PreferenceActivity::setPreferenceScreen(android::preference::PreferenceScreen arg0)
	{
		__thiz.callMethod<void>(
			"setPreferenceScreen",
			"(Landroid/preference/PreferenceScreen;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceActivity::showBreadCrumbs(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"showBreadCrumbs",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void PreferenceActivity::showBreadCrumbs(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"showBreadCrumbs",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void PreferenceActivity::startPreferenceFragment(android::app::Fragment arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"startPreferenceFragment",
			"(Landroid/app/Fragment;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void PreferenceActivity::startPreferencePanel(jstring arg0, android::os::Bundle arg1, jint arg2, jstring arg3, android::app::Fragment arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"startPreferencePanel",
			"(Ljava/lang/String;Landroid/os/Bundle;ILjava/lang/CharSequence;Landroid/app/Fragment;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5
		);
	}
	void PreferenceActivity::startPreferencePanel(const QString &arg0, android::os::Bundle arg1, jint arg2, const QString &arg3, android::app::Fragment arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"startPreferencePanel",
			"(Ljava/lang/String;Landroid/os/Bundle;ILjava/lang/CharSequence;Landroid/app/Fragment;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4.__jniObject().object(),
			arg5
		);
	}
	void PreferenceActivity::startWithFragment(jstring arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"startWithFragment",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void PreferenceActivity::startWithFragment(const QString &arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"startWithFragment",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void PreferenceActivity::startWithFragment(jstring arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"startWithFragment",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;III)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5
		);
	}
	void PreferenceActivity::startWithFragment(const QString &arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"startWithFragment",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;III)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5
		);
	}
	void PreferenceActivity::switchToHeader(android::preference::PreferenceActivity_Header arg0)
	{
		__thiz.callMethod<void>(
			"switchToHeader",
			"(Landroid/preference/PreferenceActivity$Header;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceActivity::switchToHeader(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"switchToHeader",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void PreferenceActivity::switchToHeader(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"switchToHeader",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::preference


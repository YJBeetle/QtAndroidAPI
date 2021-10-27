#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/res/TypedArray.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "./PreferenceGroup.hpp"
#include "./PreferenceManager.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Preference.hpp"

namespace android::preference
{
	// Fields
	jint Preference::DEFAULT_ORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.preference.Preference",
			"DEFAULT_ORDER"
		);
	}
	
	Preference::Preference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Preference::Preference(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	Preference::Preference(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Preference::Preference(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	Preference::Preference(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint Preference::compareTo(android::preference::Preference arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/preference/Preference;)I",
			arg0.__jniObject().object()
		);
	}
	jint Preference::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject Preference::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jstring Preference::getDependency()
	{
		return __thiz.callObjectMethod(
			"getDependency",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Preference::getEditor()
	{
		return __thiz.callObjectMethod(
			"getEditor",
			"()Landroid/content/SharedPreferences$Editor;"
		);
	}
	QAndroidJniObject Preference::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring Preference::getFragment()
	{
		return __thiz.callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Preference::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject Preference::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jstring Preference::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Preference::getLayoutResource()
	{
		return __thiz.callMethod<jint>(
			"getLayoutResource",
			"()I"
		);
	}
	QAndroidJniObject Preference::getOnPreferenceChangeListener()
	{
		return __thiz.callObjectMethod(
			"getOnPreferenceChangeListener",
			"()Landroid/preference/Preference$OnPreferenceChangeListener;"
		);
	}
	QAndroidJniObject Preference::getOnPreferenceClickListener()
	{
		return __thiz.callObjectMethod(
			"getOnPreferenceClickListener",
			"()Landroid/preference/Preference$OnPreferenceClickListener;"
		);
	}
	jint Preference::getOrder()
	{
		return __thiz.callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	QAndroidJniObject Preference::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Landroid/preference/PreferenceGroup;"
		);
	}
	QAndroidJniObject Preference::getPersistedStringSet(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getPersistedStringSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Preference::getPreferenceDataStore()
	{
		return __thiz.callObjectMethod(
			"getPreferenceDataStore",
			"()Landroid/preference/PreferenceDataStore;"
		);
	}
	QAndroidJniObject Preference::getPreferenceManager()
	{
		return __thiz.callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
		);
	}
	QAndroidJniObject Preference::getSharedPreferences()
	{
		return __thiz.callObjectMethod(
			"getSharedPreferences",
			"()Landroid/content/SharedPreferences;"
		);
	}
	jboolean Preference::getShouldDisableView()
	{
		return __thiz.callMethod<jboolean>(
			"getShouldDisableView",
			"()Z"
		);
	}
	jstring Preference::getSummary()
	{
		return __thiz.callObjectMethod(
			"getSummary",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Preference::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Preference::getTitleRes()
	{
		return __thiz.callMethod<jint>(
			"getTitleRes",
			"()I"
		);
	}
	QAndroidJniObject Preference::getView(android::view::View arg0, android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"getView",
			"(Landroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Preference::getWidgetLayoutResource()
	{
		return __thiz.callMethod<jint>(
			"getWidgetLayoutResource",
			"()I"
		);
	}
	jboolean Preference::hasKey()
	{
		return __thiz.callMethod<jboolean>(
			"hasKey",
			"()Z"
		);
	}
	jboolean Preference::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean Preference::isIconSpaceReserved()
	{
		return __thiz.callMethod<jboolean>(
			"isIconSpaceReserved",
			"()Z"
		);
	}
	jboolean Preference::isPersistent()
	{
		return __thiz.callMethod<jboolean>(
			"isPersistent",
			"()Z"
		);
	}
	jboolean Preference::isRecycleEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isRecycleEnabled",
			"()Z"
		);
	}
	jboolean Preference::isSelectable()
	{
		return __thiz.callMethod<jboolean>(
			"isSelectable",
			"()Z"
		);
	}
	jboolean Preference::isSingleLineTitle()
	{
		return __thiz.callMethod<jboolean>(
			"isSingleLineTitle",
			"()Z"
		);
	}
	void Preference::notifyDependencyChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"notifyDependencyChange",
			"(Z)V",
			arg0
		);
	}
	void Preference::onDependencyChanged(android::preference::Preference arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onDependencyChanged",
			"(Landroid/preference/Preference;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Preference::onParentChanged(android::preference::Preference arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onParentChanged",
			"(Landroid/preference/Preference;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Preference::peekExtras()
	{
		return __thiz.callObjectMethod(
			"peekExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jboolean Preference::persistStringSet(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"persistStringSet",
			"(Ljava/util/Set;)Z",
			arg0.__jniObject().object()
		);
	}
	void Preference::restoreHierarchyState(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Preference::saveHierarchyState(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"saveHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Preference::setDefaultValue(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultValue",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Preference::setDependency(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDependency",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Preference::setDependency(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDependency",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Preference::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void Preference::setFragment(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFragment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Preference::setFragment(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFragment",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Preference::setIcon(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Preference::setIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	void Preference::setIconSpaceReserved(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIconSpaceReserved",
			"(Z)V",
			arg0
		);
	}
	void Preference::setIntent(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Preference::setKey(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setKey",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Preference::setKey(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setKey",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Preference::setLayoutResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutResource",
			"(I)V",
			arg0
		);
	}
	void Preference::setOnPreferenceChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnPreferenceChangeListener",
			"(Landroid/preference/Preference$OnPreferenceChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Preference::setOnPreferenceClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnPreferenceClickListener",
			"(Landroid/preference/Preference$OnPreferenceClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Preference::setOrder(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrder",
			"(I)V",
			arg0
		);
	}
	void Preference::setPersistent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPersistent",
			"(Z)V",
			arg0
		);
	}
	void Preference::setPreferenceDataStore(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPreferenceDataStore",
			"(Landroid/preference/PreferenceDataStore;)V",
			arg0.__jniObject().object()
		);
	}
	void Preference::setRecycleEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRecycleEnabled",
			"(Z)V",
			arg0
		);
	}
	void Preference::setSelectable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelectable",
			"(Z)V",
			arg0
		);
	}
	void Preference::setShouldDisableView(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShouldDisableView",
			"(Z)V",
			arg0
		);
	}
	void Preference::setSingleLineTitle(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSingleLineTitle",
			"(Z)V",
			arg0
		);
	}
	void Preference::setSummary(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSummary",
			"(I)V",
			arg0
		);
	}
	void Preference::setSummary(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSummary",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Preference::setSummary(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSummary",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Preference::setTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void Preference::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Preference::setTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Preference::setWidgetLayoutResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWidgetLayoutResource",
			"(I)V",
			arg0
		);
	}
	jboolean Preference::shouldCommit()
	{
		return __thiz.callMethod<jboolean>(
			"shouldCommit",
			"()Z"
		);
	}
	jboolean Preference::shouldDisableDependents()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
	jstring Preference::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::preference


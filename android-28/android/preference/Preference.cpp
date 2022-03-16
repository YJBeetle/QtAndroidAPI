#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/res/TypedArray.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "./PreferenceGroup.hpp"
#include "./PreferenceManager.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Preference.hpp"

namespace android::preference
{
	// Fields
	jint Preference::DEFAULT_ORDER()
	{
		return getStaticField<jint>(
			"android.preference.Preference",
			"DEFAULT_ORDER"
		);
	}
	
	// Constructors
	Preference::Preference(android::content::Context arg0)
		: JObject(
			"android.preference.Preference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Preference::Preference(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	Preference::Preference(android::content::Context arg0, JObject arg1, jint arg2)
		: JObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	Preference::Preference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: JObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jint Preference::compareTo(android::preference::Preference arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/preference/Preference;)I",
			arg0.object()
		);
	}
	jint Preference::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	android::content::Context Preference::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	JString Preference::getDependency() const
	{
		return callObjectMethod(
			"getDependency",
			"()Ljava/lang/String;"
		);
	}
	JObject Preference::getEditor() const
	{
		return callObjectMethod(
			"getEditor",
			"()Landroid/content/SharedPreferences$Editor;"
		);
	}
	android::os::Bundle Preference::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString Preference::getFragment() const
	{
		return callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		);
	}
	android::graphics::drawable::Drawable Preference::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::content::Intent Preference::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	JString Preference::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	jint Preference::getLayoutResource() const
	{
		return callMethod<jint>(
			"getLayoutResource",
			"()I"
		);
	}
	JObject Preference::getOnPreferenceChangeListener() const
	{
		return callObjectMethod(
			"getOnPreferenceChangeListener",
			"()Landroid/preference/Preference$OnPreferenceChangeListener;"
		);
	}
	JObject Preference::getOnPreferenceClickListener() const
	{
		return callObjectMethod(
			"getOnPreferenceClickListener",
			"()Landroid/preference/Preference$OnPreferenceClickListener;"
		);
	}
	jint Preference::getOrder() const
	{
		return callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	android::preference::PreferenceGroup Preference::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/preference/PreferenceGroup;"
		);
	}
	JObject Preference::getPersistedStringSet(JObject arg0) const
	{
		return callObjectMethod(
			"getPersistedStringSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.object()
		);
	}
	JObject Preference::getPreferenceDataStore() const
	{
		return callObjectMethod(
			"getPreferenceDataStore",
			"()Landroid/preference/PreferenceDataStore;"
		);
	}
	android::preference::PreferenceManager Preference::getPreferenceManager() const
	{
		return callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
		);
	}
	JObject Preference::getSharedPreferences() const
	{
		return callObjectMethod(
			"getSharedPreferences",
			"()Landroid/content/SharedPreferences;"
		);
	}
	jboolean Preference::getShouldDisableView() const
	{
		return callMethod<jboolean>(
			"getShouldDisableView",
			"()Z"
		);
	}
	JString Preference::getSummary() const
	{
		return callObjectMethod(
			"getSummary",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Preference::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint Preference::getTitleRes() const
	{
		return callMethod<jint>(
			"getTitleRes",
			"()I"
		);
	}
	android::view::View Preference::getView(android::view::View arg0, android::view::ViewGroup arg1) const
	{
		return callObjectMethod(
			"getView",
			"(Landroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object()
		);
	}
	jint Preference::getWidgetLayoutResource() const
	{
		return callMethod<jint>(
			"getWidgetLayoutResource",
			"()I"
		);
	}
	jboolean Preference::hasKey() const
	{
		return callMethod<jboolean>(
			"hasKey",
			"()Z"
		);
	}
	jboolean Preference::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean Preference::isIconSpaceReserved() const
	{
		return callMethod<jboolean>(
			"isIconSpaceReserved",
			"()Z"
		);
	}
	jboolean Preference::isPersistent() const
	{
		return callMethod<jboolean>(
			"isPersistent",
			"()Z"
		);
	}
	jboolean Preference::isRecycleEnabled() const
	{
		return callMethod<jboolean>(
			"isRecycleEnabled",
			"()Z"
		);
	}
	jboolean Preference::isSelectable() const
	{
		return callMethod<jboolean>(
			"isSelectable",
			"()Z"
		);
	}
	jboolean Preference::isSingleLineTitle() const
	{
		return callMethod<jboolean>(
			"isSingleLineTitle",
			"()Z"
		);
	}
	void Preference::notifyDependencyChange(jboolean arg0) const
	{
		callMethod<void>(
			"notifyDependencyChange",
			"(Z)V",
			arg0
		);
	}
	void Preference::onDependencyChanged(android::preference::Preference arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onDependencyChanged",
			"(Landroid/preference/Preference;Z)V",
			arg0.object(),
			arg1
		);
	}
	void Preference::onParentChanged(android::preference::Preference arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onParentChanged",
			"(Landroid/preference/Preference;Z)V",
			arg0.object(),
			arg1
		);
	}
	android::os::Bundle Preference::peekExtras() const
	{
		return callObjectMethod(
			"peekExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jboolean Preference::persistStringSet(JObject arg0) const
	{
		return callMethod<jboolean>(
			"persistStringSet",
			"(Ljava/util/Set;)Z",
			arg0.object()
		);
	}
	void Preference::restoreHierarchyState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Preference::saveHierarchyState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"saveHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Preference::setDefaultValue(JObject arg0) const
	{
		callMethod<void>(
			"setDefaultValue",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void Preference::setDependency(JString arg0) const
	{
		callMethod<void>(
			"setDependency",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Preference::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void Preference::setFragment(JString arg0) const
	{
		callMethod<void>(
			"setFragment",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Preference::setIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Preference::setIcon(jint arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	void Preference::setIconSpaceReserved(jboolean arg0) const
	{
		callMethod<void>(
			"setIconSpaceReserved",
			"(Z)V",
			arg0
		);
	}
	void Preference::setIntent(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Preference::setKey(JString arg0) const
	{
		callMethod<void>(
			"setKey",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Preference::setLayoutResource(jint arg0) const
	{
		callMethod<void>(
			"setLayoutResource",
			"(I)V",
			arg0
		);
	}
	void Preference::setOnPreferenceChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnPreferenceChangeListener",
			"(Landroid/preference/Preference$OnPreferenceChangeListener;)V",
			arg0.object()
		);
	}
	void Preference::setOnPreferenceClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnPreferenceClickListener",
			"(Landroid/preference/Preference$OnPreferenceClickListener;)V",
			arg0.object()
		);
	}
	void Preference::setOrder(jint arg0) const
	{
		callMethod<void>(
			"setOrder",
			"(I)V",
			arg0
		);
	}
	void Preference::setPersistent(jboolean arg0) const
	{
		callMethod<void>(
			"setPersistent",
			"(Z)V",
			arg0
		);
	}
	void Preference::setPreferenceDataStore(JObject arg0) const
	{
		callMethod<void>(
			"setPreferenceDataStore",
			"(Landroid/preference/PreferenceDataStore;)V",
			arg0.object()
		);
	}
	void Preference::setRecycleEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setRecycleEnabled",
			"(Z)V",
			arg0
		);
	}
	void Preference::setSelectable(jboolean arg0) const
	{
		callMethod<void>(
			"setSelectable",
			"(Z)V",
			arg0
		);
	}
	void Preference::setShouldDisableView(jboolean arg0) const
	{
		callMethod<void>(
			"setShouldDisableView",
			"(Z)V",
			arg0
		);
	}
	void Preference::setSingleLineTitle(jboolean arg0) const
	{
		callMethod<void>(
			"setSingleLineTitle",
			"(Z)V",
			arg0
		);
	}
	void Preference::setSummary(jint arg0) const
	{
		callMethod<void>(
			"setSummary",
			"(I)V",
			arg0
		);
	}
	void Preference::setSummary(JString arg0) const
	{
		callMethod<void>(
			"setSummary",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Preference::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void Preference::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Preference::setWidgetLayoutResource(jint arg0) const
	{
		callMethod<void>(
			"setWidgetLayoutResource",
			"(I)V",
			arg0
		);
	}
	jboolean Preference::shouldCommit() const
	{
		return callMethod<jboolean>(
			"shouldCommit",
			"()Z"
		);
	}
	jboolean Preference::shouldDisableDependents() const
	{
		return callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
	JString Preference::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::preference


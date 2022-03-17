#pragma once

#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./PreferenceGroup.def.hpp"
#include "./PreferenceManager.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Preference.def.hpp"

namespace android::preference
{
	// Fields
	inline jint Preference::DEFAULT_ORDER()
	{
		return getStaticField<jint>(
			"android.preference.Preference",
			"DEFAULT_ORDER"
		);
	}
	
	// Constructors
	inline Preference::Preference(android::content::Context arg0)
		: JObject(
			"android.preference.Preference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline Preference::Preference(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Preference::Preference(android::content::Context arg0, JObject arg1, jint arg2)
		: JObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline Preference::Preference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: JObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint Preference::compareTo(android::preference::Preference arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/preference/Preference;)I",
			arg0.object()
		);
	}
	inline jint Preference::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline android::content::Context Preference::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline JString Preference::getDependency() const
	{
		return callObjectMethod(
			"getDependency",
			"()Ljava/lang/String;"
		);
	}
	inline JObject Preference::getEditor() const
	{
		return callObjectMethod(
			"getEditor",
			"()Landroid/content/SharedPreferences$Editor;"
		);
	}
	inline android::os::Bundle Preference::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString Preference::getFragment() const
	{
		return callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		);
	}
	inline android::graphics::drawable::Drawable Preference::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::content::Intent Preference::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline JString Preference::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline jint Preference::getLayoutResource() const
	{
		return callMethod<jint>(
			"getLayoutResource",
			"()I"
		);
	}
	inline JObject Preference::getOnPreferenceChangeListener() const
	{
		return callObjectMethod(
			"getOnPreferenceChangeListener",
			"()Landroid/preference/Preference$OnPreferenceChangeListener;"
		);
	}
	inline JObject Preference::getOnPreferenceClickListener() const
	{
		return callObjectMethod(
			"getOnPreferenceClickListener",
			"()Landroid/preference/Preference$OnPreferenceClickListener;"
		);
	}
	inline jint Preference::getOrder() const
	{
		return callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	inline android::preference::PreferenceGroup Preference::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/preference/PreferenceGroup;"
		);
	}
	inline JObject Preference::getPersistedStringSet(JObject arg0) const
	{
		return callObjectMethod(
			"getPersistedStringSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline JObject Preference::getPreferenceDataStore() const
	{
		return callObjectMethod(
			"getPreferenceDataStore",
			"()Landroid/preference/PreferenceDataStore;"
		);
	}
	inline android::preference::PreferenceManager Preference::getPreferenceManager() const
	{
		return callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
		);
	}
	inline JObject Preference::getSharedPreferences() const
	{
		return callObjectMethod(
			"getSharedPreferences",
			"()Landroid/content/SharedPreferences;"
		);
	}
	inline jboolean Preference::getShouldDisableView() const
	{
		return callMethod<jboolean>(
			"getShouldDisableView",
			"()Z"
		);
	}
	inline JString Preference::getSummary() const
	{
		return callObjectMethod(
			"getSummary",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString Preference::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint Preference::getTitleRes() const
	{
		return callMethod<jint>(
			"getTitleRes",
			"()I"
		);
	}
	inline android::view::View Preference::getView(android::view::View arg0, android::view::ViewGroup arg1) const
	{
		return callObjectMethod(
			"getView",
			"(Landroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint Preference::getWidgetLayoutResource() const
	{
		return callMethod<jint>(
			"getWidgetLayoutResource",
			"()I"
		);
	}
	inline jboolean Preference::hasKey() const
	{
		return callMethod<jboolean>(
			"hasKey",
			"()Z"
		);
	}
	inline jboolean Preference::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean Preference::isIconSpaceReserved() const
	{
		return callMethod<jboolean>(
			"isIconSpaceReserved",
			"()Z"
		);
	}
	inline jboolean Preference::isPersistent() const
	{
		return callMethod<jboolean>(
			"isPersistent",
			"()Z"
		);
	}
	inline jboolean Preference::isRecycleEnabled() const
	{
		return callMethod<jboolean>(
			"isRecycleEnabled",
			"()Z"
		);
	}
	inline jboolean Preference::isSelectable() const
	{
		return callMethod<jboolean>(
			"isSelectable",
			"()Z"
		);
	}
	inline jboolean Preference::isSingleLineTitle() const
	{
		return callMethod<jboolean>(
			"isSingleLineTitle",
			"()Z"
		);
	}
	inline void Preference::notifyDependencyChange(jboolean arg0) const
	{
		callMethod<void>(
			"notifyDependencyChange",
			"(Z)V",
			arg0
		);
	}
	inline void Preference::onDependencyChanged(android::preference::Preference arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onDependencyChanged",
			"(Landroid/preference/Preference;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void Preference::onParentChanged(android::preference::Preference arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onParentChanged",
			"(Landroid/preference/Preference;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline android::os::Bundle Preference::peekExtras() const
	{
		return callObjectMethod(
			"peekExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jboolean Preference::persistStringSet(JObject arg0) const
	{
		return callMethod<jboolean>(
			"persistStringSet",
			"(Ljava/util/Set;)Z",
			arg0.object()
		);
	}
	inline void Preference::restoreHierarchyState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Preference::saveHierarchyState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"saveHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Preference::setDefaultValue(JObject arg0) const
	{
		callMethod<void>(
			"setDefaultValue",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void Preference::setDependency(JString arg0) const
	{
		callMethod<void>(
			"setDependency",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Preference::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void Preference::setFragment(JString arg0) const
	{
		callMethod<void>(
			"setFragment",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Preference::setIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void Preference::setIcon(jint arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	inline void Preference::setIconSpaceReserved(jboolean arg0) const
	{
		callMethod<void>(
			"setIconSpaceReserved",
			"(Z)V",
			arg0
		);
	}
	inline void Preference::setIntent(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void Preference::setKey(JString arg0) const
	{
		callMethod<void>(
			"setKey",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Preference::setLayoutResource(jint arg0) const
	{
		callMethod<void>(
			"setLayoutResource",
			"(I)V",
			arg0
		);
	}
	inline void Preference::setOnPreferenceChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnPreferenceChangeListener",
			"(Landroid/preference/Preference$OnPreferenceChangeListener;)V",
			arg0.object()
		);
	}
	inline void Preference::setOnPreferenceClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnPreferenceClickListener",
			"(Landroid/preference/Preference$OnPreferenceClickListener;)V",
			arg0.object()
		);
	}
	inline void Preference::setOrder(jint arg0) const
	{
		callMethod<void>(
			"setOrder",
			"(I)V",
			arg0
		);
	}
	inline void Preference::setPersistent(jboolean arg0) const
	{
		callMethod<void>(
			"setPersistent",
			"(Z)V",
			arg0
		);
	}
	inline void Preference::setPreferenceDataStore(JObject arg0) const
	{
		callMethod<void>(
			"setPreferenceDataStore",
			"(Landroid/preference/PreferenceDataStore;)V",
			arg0.object()
		);
	}
	inline void Preference::setRecycleEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setRecycleEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void Preference::setSelectable(jboolean arg0) const
	{
		callMethod<void>(
			"setSelectable",
			"(Z)V",
			arg0
		);
	}
	inline void Preference::setShouldDisableView(jboolean arg0) const
	{
		callMethod<void>(
			"setShouldDisableView",
			"(Z)V",
			arg0
		);
	}
	inline void Preference::setSingleLineTitle(jboolean arg0) const
	{
		callMethod<void>(
			"setSingleLineTitle",
			"(Z)V",
			arg0
		);
	}
	inline void Preference::setSummary(jint arg0) const
	{
		callMethod<void>(
			"setSummary",
			"(I)V",
			arg0
		);
	}
	inline void Preference::setSummary(JString arg0) const
	{
		callMethod<void>(
			"setSummary",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Preference::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	inline void Preference::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Preference::setWidgetLayoutResource(jint arg0) const
	{
		callMethod<void>(
			"setWidgetLayoutResource",
			"(I)V",
			arg0
		);
	}
	inline jboolean Preference::shouldCommit() const
	{
		return callMethod<jboolean>(
			"shouldCommit",
			"()Z"
		);
	}
	inline jboolean Preference::shouldDisableDependents() const
	{
		return callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
	inline JString Preference::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::preference

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::preference;
#endif

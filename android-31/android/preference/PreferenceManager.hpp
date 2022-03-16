#pragma once

#include "../content/Context.def.hpp"
#include "./Preference.def.hpp"
#include "./PreferenceScreen.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./PreferenceManager.def.hpp"

namespace android::preference
{
	// Fields
	inline JString PreferenceManager::KEY_HAS_SET_DEFAULT_VALUES()
	{
		return getStaticObjectField(
			"android.preference.PreferenceManager",
			"KEY_HAS_SET_DEFAULT_VALUES",
			"Ljava/lang/String;"
		);
	}
	inline JString PreferenceManager::METADATA_KEY_PREFERENCES()
	{
		return getStaticObjectField(
			"android.preference.PreferenceManager",
			"METADATA_KEY_PREFERENCES",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject PreferenceManager::getDefaultSharedPreferences(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.preference.PreferenceManager",
			"getDefaultSharedPreferences",
			"(Landroid/content/Context;)Landroid/content/SharedPreferences;",
			arg0.object()
		);
	}
	inline JString PreferenceManager::getDefaultSharedPreferencesName(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.preference.PreferenceManager",
			"getDefaultSharedPreferencesName",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline void PreferenceManager::setDefaultValues(android::content::Context arg0, jint arg1, jboolean arg2)
	{
		callStaticMethod<void>(
			"android.preference.PreferenceManager",
			"setDefaultValues",
			"(Landroid/content/Context;IZ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void PreferenceManager::setDefaultValues(android::content::Context arg0, JString arg1, jint arg2, jint arg3, jboolean arg4)
	{
		callStaticMethod<void>(
			"android.preference.PreferenceManager",
			"setDefaultValues",
			"(Landroid/content/Context;Ljava/lang/String;IIZ)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4
		);
	}
	inline android::preference::PreferenceScreen PreferenceManager::createPreferenceScreen(android::content::Context arg0) const
	{
		return callObjectMethod(
			"createPreferenceScreen",
			"(Landroid/content/Context;)Landroid/preference/PreferenceScreen;",
			arg0.object()
		);
	}
	inline android::preference::Preference PreferenceManager::findPreference(JString arg0) const
	{
		return callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0.object<jstring>()
		);
	}
	inline JObject PreferenceManager::getPreferenceDataStore() const
	{
		return callObjectMethod(
			"getPreferenceDataStore",
			"()Landroid/preference/PreferenceDataStore;"
		);
	}
	inline JObject PreferenceManager::getSharedPreferences() const
	{
		return callObjectMethod(
			"getSharedPreferences",
			"()Landroid/content/SharedPreferences;"
		);
	}
	inline jint PreferenceManager::getSharedPreferencesMode() const
	{
		return callMethod<jint>(
			"getSharedPreferencesMode",
			"()I"
		);
	}
	inline JString PreferenceManager::getSharedPreferencesName() const
	{
		return callObjectMethod(
			"getSharedPreferencesName",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean PreferenceManager::isStorageDefault() const
	{
		return callMethod<jboolean>(
			"isStorageDefault",
			"()Z"
		);
	}
	inline jboolean PreferenceManager::isStorageDeviceProtected() const
	{
		return callMethod<jboolean>(
			"isStorageDeviceProtected",
			"()Z"
		);
	}
	inline void PreferenceManager::setPreferenceDataStore(JObject arg0) const
	{
		callMethod<void>(
			"setPreferenceDataStore",
			"(Landroid/preference/PreferenceDataStore;)V",
			arg0.object()
		);
	}
	inline void PreferenceManager::setSharedPreferencesMode(jint arg0) const
	{
		callMethod<void>(
			"setSharedPreferencesMode",
			"(I)V",
			arg0
		);
	}
	inline void PreferenceManager::setSharedPreferencesName(JString arg0) const
	{
		callMethod<void>(
			"setSharedPreferencesName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void PreferenceManager::setStorageDefault() const
	{
		callMethod<void>(
			"setStorageDefault",
			"()V"
		);
	}
	inline void PreferenceManager::setStorageDeviceProtected() const
	{
		callMethod<void>(
			"setStorageDeviceProtected",
			"()V"
		);
	}
} // namespace android::preference

// Base class headers


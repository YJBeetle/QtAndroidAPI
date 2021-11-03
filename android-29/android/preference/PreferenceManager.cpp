#include "../content/Context.hpp"
#include "./Preference.hpp"
#include "./PreferenceScreen.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./PreferenceManager.hpp"

namespace android::preference
{
	// Fields
	JString PreferenceManager::KEY_HAS_SET_DEFAULT_VALUES()
	{
		return getStaticObjectField(
			"android.preference.PreferenceManager",
			"KEY_HAS_SET_DEFAULT_VALUES",
			"Ljava/lang/String;"
		);
	}
	JString PreferenceManager::METADATA_KEY_PREFERENCES()
	{
		return getStaticObjectField(
			"android.preference.PreferenceManager",
			"METADATA_KEY_PREFERENCES",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	PreferenceManager::PreferenceManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject PreferenceManager::getDefaultSharedPreferences(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.preference.PreferenceManager",
			"getDefaultSharedPreferences",
			"(Landroid/content/Context;)Landroid/content/SharedPreferences;",
			arg0.object()
		);
	}
	JString PreferenceManager::getDefaultSharedPreferencesName(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.preference.PreferenceManager",
			"getDefaultSharedPreferencesName",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	void PreferenceManager::setDefaultValues(android::content::Context arg0, jint arg1, jboolean arg2)
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
	void PreferenceManager::setDefaultValues(android::content::Context arg0, JString arg1, jint arg2, jint arg3, jboolean arg4)
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
	android::preference::PreferenceScreen PreferenceManager::createPreferenceScreen(android::content::Context arg0)
	{
		return callObjectMethod(
			"createPreferenceScreen",
			"(Landroid/content/Context;)Landroid/preference/PreferenceScreen;",
			arg0.object()
		);
	}
	android::preference::Preference PreferenceManager::findPreference(JString arg0)
	{
		return callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0.object<jstring>()
		);
	}
	JObject PreferenceManager::getPreferenceDataStore()
	{
		return callObjectMethod(
			"getPreferenceDataStore",
			"()Landroid/preference/PreferenceDataStore;"
		);
	}
	JObject PreferenceManager::getSharedPreferences()
	{
		return callObjectMethod(
			"getSharedPreferences",
			"()Landroid/content/SharedPreferences;"
		);
	}
	jint PreferenceManager::getSharedPreferencesMode()
	{
		return callMethod<jint>(
			"getSharedPreferencesMode",
			"()I"
		);
	}
	JString PreferenceManager::getSharedPreferencesName()
	{
		return callObjectMethod(
			"getSharedPreferencesName",
			"()Ljava/lang/String;"
		);
	}
	jboolean PreferenceManager::isStorageDefault()
	{
		return callMethod<jboolean>(
			"isStorageDefault",
			"()Z"
		);
	}
	jboolean PreferenceManager::isStorageDeviceProtected()
	{
		return callMethod<jboolean>(
			"isStorageDeviceProtected",
			"()Z"
		);
	}
	void PreferenceManager::setPreferenceDataStore(JObject arg0)
	{
		callMethod<void>(
			"setPreferenceDataStore",
			"(Landroid/preference/PreferenceDataStore;)V",
			arg0.object()
		);
	}
	void PreferenceManager::setSharedPreferencesMode(jint arg0)
	{
		callMethod<void>(
			"setSharedPreferencesMode",
			"(I)V",
			arg0
		);
	}
	void PreferenceManager::setSharedPreferencesName(JString arg0)
	{
		callMethod<void>(
			"setSharedPreferencesName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void PreferenceManager::setStorageDefault()
	{
		callMethod<void>(
			"setStorageDefault",
			"()V"
		);
	}
	void PreferenceManager::setStorageDeviceProtected()
	{
		callMethod<void>(
			"setStorageDeviceProtected",
			"()V"
		);
	}
} // namespace android::preference


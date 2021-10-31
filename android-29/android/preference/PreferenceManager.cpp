#include "../content/Context.hpp"
#include "./Preference.hpp"
#include "./PreferenceScreen.hpp"
#include "./PreferenceManager.hpp"

namespace android::preference
{
	// Fields
	jstring PreferenceManager::KEY_HAS_SET_DEFAULT_VALUES()
	{
		return getStaticObjectField(
			"android.preference.PreferenceManager",
			"KEY_HAS_SET_DEFAULT_VALUES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PreferenceManager::METADATA_KEY_PREFERENCES()
	{
		return getStaticObjectField(
			"android.preference.PreferenceManager",
			"METADATA_KEY_PREFERENCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	PreferenceManager::PreferenceManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass PreferenceManager::getDefaultSharedPreferences(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.preference.PreferenceManager",
			"getDefaultSharedPreferences",
			"(Landroid/content/Context;)Landroid/content/SharedPreferences;",
			arg0.object()
		);
	}
	jstring PreferenceManager::getDefaultSharedPreferencesName(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.preference.PreferenceManager",
			"getDefaultSharedPreferencesName",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
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
	void PreferenceManager::setDefaultValues(android::content::Context arg0, jstring arg1, jint arg2, jint arg3, jboolean arg4)
	{
		callStaticMethod<void>(
			"android.preference.PreferenceManager",
			"setDefaultValues",
			"(Landroid/content/Context;Ljava/lang/String;IIZ)V",
			arg0.object(),
			arg1,
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
	android::preference::Preference PreferenceManager::findPreference(jstring arg0)
	{
		return callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0
		);
	}
	__JniBaseClass PreferenceManager::getPreferenceDataStore()
	{
		return callObjectMethod(
			"getPreferenceDataStore",
			"()Landroid/preference/PreferenceDataStore;"
		);
	}
	__JniBaseClass PreferenceManager::getSharedPreferences()
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
	jstring PreferenceManager::getSharedPreferencesName()
	{
		return callObjectMethod(
			"getSharedPreferencesName",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	void PreferenceManager::setPreferenceDataStore(__JniBaseClass arg0)
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
	void PreferenceManager::setSharedPreferencesName(jstring arg0)
	{
		callMethod<void>(
			"setSharedPreferencesName",
			"(Ljava/lang/String;)V",
			arg0
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


#include "../content/Context.hpp"
#include "./Preference.hpp"
#include "./PreferenceScreen.hpp"
#include "./PreferenceManager.hpp"

namespace android::preference
{
	// Fields
	jstring PreferenceManager::KEY_HAS_SET_DEFAULT_VALUES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.PreferenceManager",
			"KEY_HAS_SET_DEFAULT_VALUES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PreferenceManager::METADATA_KEY_PREFERENCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.PreferenceManager",
			"METADATA_KEY_PREFERENCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	PreferenceManager::PreferenceManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PreferenceManager::getDefaultSharedPreferences(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.preference.PreferenceManager",
			"getDefaultSharedPreferences",
			"(Landroid/content/Context;)Landroid/content/SharedPreferences;",
			arg0.__jniObject().object()
		);
	}
	jstring PreferenceManager::getDefaultSharedPreferencesName(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.preference.PreferenceManager",
			"getDefaultSharedPreferencesName",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void PreferenceManager::setDefaultValues(android::content::Context arg0, jint arg1, jboolean arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.preference.PreferenceManager",
			"setDefaultValues",
			"(Landroid/content/Context;IZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void PreferenceManager::setDefaultValues(android::content::Context arg0, jstring arg1, jint arg2, jint arg3, jboolean arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.preference.PreferenceManager",
			"setDefaultValues",
			"(Landroid/content/Context;Ljava/lang/String;IIZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject PreferenceManager::createPreferenceScreen(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"createPreferenceScreen",
			"(Landroid/content/Context;)Landroid/preference/PreferenceScreen;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PreferenceManager::findPreference(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0
		);
	}
	QAndroidJniObject PreferenceManager::getPreferenceDataStore()
	{
		return __thiz.callObjectMethod(
			"getPreferenceDataStore",
			"()Landroid/preference/PreferenceDataStore;"
		);
	}
	QAndroidJniObject PreferenceManager::getSharedPreferences()
	{
		return __thiz.callObjectMethod(
			"getSharedPreferences",
			"()Landroid/content/SharedPreferences;"
		);
	}
	jint PreferenceManager::getSharedPreferencesMode()
	{
		return __thiz.callMethod<jint>(
			"getSharedPreferencesMode",
			"()I"
		);
	}
	jstring PreferenceManager::getSharedPreferencesName()
	{
		return __thiz.callObjectMethod(
			"getSharedPreferencesName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean PreferenceManager::isStorageDefault()
	{
		return __thiz.callMethod<jboolean>(
			"isStorageDefault",
			"()Z"
		);
	}
	jboolean PreferenceManager::isStorageDeviceProtected()
	{
		return __thiz.callMethod<jboolean>(
			"isStorageDeviceProtected",
			"()Z"
		);
	}
	void PreferenceManager::setPreferenceDataStore(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPreferenceDataStore",
			"(Landroid/preference/PreferenceDataStore;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceManager::setSharedPreferencesMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSharedPreferencesMode",
			"(I)V",
			arg0
		);
	}
	void PreferenceManager::setSharedPreferencesName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSharedPreferencesName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PreferenceManager::setStorageDefault()
	{
		__thiz.callMethod<void>(
			"setStorageDefault",
			"()V"
		);
	}
	void PreferenceManager::setStorageDeviceProtected()
	{
		__thiz.callMethod<void>(
			"setStorageDeviceProtected",
			"()V"
		);
	}
} // namespace android::preference


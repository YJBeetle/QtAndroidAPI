#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::preference
{
	class Preference;
}
namespace android::preference
{
	class PreferenceScreen;
}

namespace android::preference
{
	class PreferenceManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring KEY_HAS_SET_DEFAULT_VALUES();
		static jstring METADATA_KEY_PREFERENCES();
		
		PreferenceManager(QAndroidJniObject obj);
		// Constructors
		PreferenceManager() = default;
		
		// Methods
		static QAndroidJniObject getDefaultSharedPreferences(android::content::Context arg0);
		static jstring getDefaultSharedPreferencesName(android::content::Context arg0);
		static void setDefaultValues(android::content::Context arg0, jint arg1, jboolean arg2);
		static void setDefaultValues(android::content::Context arg0, jstring arg1, jint arg2, jint arg3, jboolean arg4);
		static void setDefaultValues(android::content::Context arg0, const QString &arg1, jint arg2, jint arg3, jboolean arg4);
		QAndroidJniObject createPreferenceScreen(android::content::Context arg0);
		QAndroidJniObject findPreference(jstring arg0);
		QAndroidJniObject findPreference(const QString &arg0);
		QAndroidJniObject getPreferenceDataStore();
		QAndroidJniObject getSharedPreferences();
		jint getSharedPreferencesMode();
		jstring getSharedPreferencesName();
		jboolean isStorageDefault();
		jboolean isStorageDeviceProtected();
		void setPreferenceDataStore(__JniBaseClass arg0);
		void setSharedPreferencesMode(jint arg0);
		void setSharedPreferencesName(jstring arg0);
		void setSharedPreferencesName(const QString &arg0);
		void setStorageDefault();
		void setStorageDeviceProtected();
	};
} // namespace android::preference


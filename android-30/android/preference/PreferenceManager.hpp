#pragma once

#include "../../JObject.hpp"

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
	class PreferenceManager : public JObject
	{
	public:
		// Fields
		static jstring KEY_HAS_SET_DEFAULT_VALUES();
		static jstring METADATA_KEY_PREFERENCES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PreferenceManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getDefaultSharedPreferences(android::content::Context arg0);
		static jstring getDefaultSharedPreferencesName(android::content::Context arg0);
		static void setDefaultValues(android::content::Context arg0, jint arg1, jboolean arg2);
		static void setDefaultValues(android::content::Context arg0, jstring arg1, jint arg2, jint arg3, jboolean arg4);
		android::preference::PreferenceScreen createPreferenceScreen(android::content::Context arg0);
		android::preference::Preference findPreference(jstring arg0);
		JObject getPreferenceDataStore();
		JObject getSharedPreferences();
		jint getSharedPreferencesMode();
		jstring getSharedPreferencesName();
		jboolean isStorageDefault();
		jboolean isStorageDeviceProtected();
		void setPreferenceDataStore(JObject arg0);
		void setSharedPreferencesMode(jint arg0);
		void setSharedPreferencesName(jstring arg0);
		void setStorageDefault();
		void setStorageDeviceProtected();
	};
} // namespace android::preference


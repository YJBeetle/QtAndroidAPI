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
class JString;
class JString;

namespace android::preference
{
	class PreferenceManager : public JObject
	{
	public:
		// Fields
		static JString KEY_HAS_SET_DEFAULT_VALUES();
		static JString METADATA_KEY_PREFERENCES();
		
		// QJniObject forward
		template<typename ...Ts> explicit PreferenceManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getDefaultSharedPreferences(android::content::Context arg0);
		static JString getDefaultSharedPreferencesName(android::content::Context arg0);
		static void setDefaultValues(android::content::Context arg0, jint arg1, jboolean arg2);
		static void setDefaultValues(android::content::Context arg0, JString arg1, jint arg2, jint arg3, jboolean arg4);
		android::preference::PreferenceScreen createPreferenceScreen(android::content::Context arg0) const;
		android::preference::Preference findPreference(JString arg0) const;
		JObject getPreferenceDataStore() const;
		JObject getSharedPreferences() const;
		jint getSharedPreferencesMode() const;
		JString getSharedPreferencesName() const;
		jboolean isStorageDefault() const;
		jboolean isStorageDeviceProtected() const;
		void setPreferenceDataStore(JObject arg0) const;
		void setSharedPreferencesMode(jint arg0) const;
		void setSharedPreferencesName(JString arg0) const;
		void setStorageDefault() const;
		void setStorageDeviceProtected() const;
	};
} // namespace android::preference


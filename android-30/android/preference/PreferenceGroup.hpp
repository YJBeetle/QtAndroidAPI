#pragma once

#include "./Preference.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
namespace android::preference
{
	class Preference;
}
class JString;

namespace android::preference
{
	class PreferenceGroup : public android::preference::Preference
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PreferenceGroup(const char *className, const char *sig, Ts...agv) : android::preference::Preference(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceGroup(QAndroidJniObject obj);
		
		// Constructors
		PreferenceGroup(android::content::Context arg0, JObject arg1);
		PreferenceGroup(android::content::Context arg0, JObject arg1, jint arg2);
		PreferenceGroup(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addItemFromInflater(android::preference::Preference arg0);
		jboolean addPreference(android::preference::Preference arg0);
		android::preference::Preference findPreference(JString arg0);
		android::preference::Preference getPreference(jint arg0);
		jint getPreferenceCount();
		jboolean isOrderingAsAdded();
		void notifyDependencyChange(jboolean arg0);
		void removeAll();
		jboolean removePreference(android::preference::Preference arg0);
		void setOrderingAsAdded(jboolean arg0);
	};
} // namespace android::preference


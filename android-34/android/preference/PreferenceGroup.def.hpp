#pragma once

#include "./Preference.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit PreferenceGroup(const char *className, const char *sig, Ts...agv) : android::preference::Preference(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceGroup(QJniObject obj) : android::preference::Preference(obj) {}
		
		// Constructors
		PreferenceGroup(android::content::Context arg0, JObject arg1);
		PreferenceGroup(android::content::Context arg0, JObject arg1, jint arg2);
		PreferenceGroup(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addItemFromInflater(android::preference::Preference arg0) const;
		jboolean addPreference(android::preference::Preference arg0) const;
		android::preference::Preference findPreference(JString arg0) const;
		android::preference::Preference getPreference(jint arg0) const;
		jint getPreferenceCount() const;
		jboolean isOrderingAsAdded() const;
		void notifyDependencyChange(jboolean arg0) const;
		void removeAll() const;
		jboolean removePreference(android::preference::Preference arg0) const;
		void setOrderingAsAdded(jboolean arg0) const;
	};
} // namespace android::preference


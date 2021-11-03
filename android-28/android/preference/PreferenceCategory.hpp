#pragma once

#include "../../JObject.hpp"
#include "./Preference.hpp"
#include "./PreferenceGroup.hpp"

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
	class PreferenceCategory : public android::preference::PreferenceGroup
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PreferenceCategory(const char *className, const char *sig, Ts...agv) : android::preference::PreferenceGroup(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceCategory(QAndroidJniObject obj);
		
		// Constructors
		PreferenceCategory(android::content::Context arg0);
		PreferenceCategory(android::content::Context arg0, JObject arg1);
		PreferenceCategory(android::content::Context arg0, JObject arg1, jint arg2);
		PreferenceCategory(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean isEnabled();
		jboolean shouldDisableDependents();
	};
} // namespace android::preference


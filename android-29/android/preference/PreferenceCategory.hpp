#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		PreferenceCategory(QAndroidJniObject obj);
		// Constructors
		PreferenceCategory(android::content::Context arg0);
		PreferenceCategory(android::content::Context arg0, __JniBaseClass arg1);
		PreferenceCategory(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		PreferenceCategory(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		PreferenceCategory() = default;
		
		// Methods
		jboolean isEnabled();
		jboolean shouldDisableDependents();
	};
} // namespace android::preference


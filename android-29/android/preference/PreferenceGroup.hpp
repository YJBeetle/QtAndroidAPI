#pragma once

#include "../../__JniBaseClass.hpp"
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

namespace android::preference
{
	class PreferenceGroup : public android::preference::Preference
	{
	public:
		// Fields
		
		PreferenceGroup(QAndroidJniObject obj);
		// Constructors
		PreferenceGroup(android::content::Context arg0, __JniBaseClass arg1);
		PreferenceGroup(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		PreferenceGroup(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		PreferenceGroup() = default;
		
		// Methods
		void addItemFromInflater(android::preference::Preference arg0);
		jboolean addPreference(android::preference::Preference arg0);
		QAndroidJniObject findPreference(jstring arg0);
		QAndroidJniObject getPreference(jint arg0);
		jint getPreferenceCount();
		jboolean isOrderingAsAdded();
		void notifyDependencyChange(jboolean arg0);
		void removeAll();
		jboolean removePreference(android::preference::Preference arg0);
		void setOrderingAsAdded(jboolean arg0);
	};
} // namespace android::preference


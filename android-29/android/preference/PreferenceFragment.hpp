#pragma once

#include "../../__JniBaseClass.hpp"
#include "../app/Fragment.hpp"

namespace android::content
{
	class Intent;
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
	class PreferenceManager;
}
namespace android::preference
{
	class PreferenceScreen;
}
namespace android::view
{
	class LayoutInflater;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::preference
{
	class PreferenceFragment : public android::app::Fragment
	{
	public:
		// Fields
		
		PreferenceFragment(QAndroidJniObject obj);
		// Constructors
		PreferenceFragment();
		
		// Methods
		void addPreferencesFromIntent(android::content::Intent arg0);
		void addPreferencesFromResource(jint arg0);
		QAndroidJniObject findPreference(jstring arg0);
		QAndroidJniObject findPreference(const QString &arg0);
		QAndroidJniObject getPreferenceManager();
		QAndroidJniObject getPreferenceScreen();
		void onActivityCreated(android::os::Bundle arg0);
		void onActivityResult(jint arg0, jint arg1, android::content::Intent arg2);
		void onCreate(android::os::Bundle arg0);
		QAndroidJniObject onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2);
		void onDestroy();
		void onDestroyView();
		jboolean onPreferenceTreeClick(android::preference::PreferenceScreen arg0, android::preference::Preference arg1);
		void onSaveInstanceState(android::os::Bundle arg0);
		void onStart();
		void onStop();
		void onViewCreated(android::view::View arg0, android::os::Bundle arg1);
		void setPreferenceScreen(android::preference::PreferenceScreen arg0);
	};
} // namespace android::preference


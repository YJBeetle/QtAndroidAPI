#pragma once

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
class JString;

namespace android::preference
{
	class PreferenceFragment : public android::app::Fragment
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PreferenceFragment(const char *className, const char *sig, Ts...agv) : android::app::Fragment(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceFragment(QJniObject obj);
		
		// Constructors
		PreferenceFragment();
		
		// Methods
		void addPreferencesFromIntent(android::content::Intent arg0);
		void addPreferencesFromResource(jint arg0);
		android::preference::Preference findPreference(JString arg0);
		android::preference::PreferenceManager getPreferenceManager();
		android::preference::PreferenceScreen getPreferenceScreen();
		void onActivityCreated(android::os::Bundle arg0);
		void onActivityResult(jint arg0, jint arg1, android::content::Intent arg2);
		void onCreate(android::os::Bundle arg0);
		android::view::View onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2);
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


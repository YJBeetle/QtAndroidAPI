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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PreferenceFragment(const char *className, const char *sig, Ts...agv) : android::app::Fragment(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceFragment(QAndroidJniObject obj) : android::app::Fragment(obj) {}
		
		// Constructors
		PreferenceFragment();
		
		// Methods
		void addPreferencesFromIntent(android::content::Intent arg0) const;
		void addPreferencesFromResource(jint arg0) const;
		android::preference::Preference findPreference(JString arg0) const;
		android::preference::PreferenceManager getPreferenceManager() const;
		android::preference::PreferenceScreen getPreferenceScreen() const;
		void onActivityCreated(android::os::Bundle arg0) const;
		void onActivityResult(jint arg0, jint arg1, android::content::Intent arg2) const;
		void onCreate(android::os::Bundle arg0) const;
		android::view::View onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2) const;
		void onDestroy() const;
		void onDestroyView() const;
		jboolean onPreferenceTreeClick(android::preference::PreferenceScreen arg0, android::preference::Preference arg1) const;
		void onSaveInstanceState(android::os::Bundle arg0) const;
		void onStart() const;
		void onStop() const;
		void onViewCreated(android::view::View arg0, android::os::Bundle arg1) const;
		void setPreferenceScreen(android::preference::PreferenceScreen arg0) const;
	};
} // namespace android::preference


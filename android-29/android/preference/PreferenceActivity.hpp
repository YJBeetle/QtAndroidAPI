#pragma once

#include "../app/ListActivity.hpp"

namespace android::app
{
	class Fragment;
}
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
	class PreferenceActivity_Header;
}
namespace android::preference
{
	class PreferenceFragment;
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
	class View;
}
namespace android::widget
{
	class ListView;
}
class JString;
class JString;

namespace android::preference
{
	class PreferenceActivity : public android::app::ListActivity
	{
	public:
		// Fields
		static JString EXTRA_NO_HEADERS();
		static JString EXTRA_SHOW_FRAGMENT();
		static JString EXTRA_SHOW_FRAGMENT_ARGUMENTS();
		static JString EXTRA_SHOW_FRAGMENT_SHORT_TITLE();
		static JString EXTRA_SHOW_FRAGMENT_TITLE();
		static jlong HEADER_ID_UNDEFINED();
		
		// QJniObject forward
		template<typename ...Ts> explicit PreferenceActivity(const char *className, const char *sig, Ts...agv) : android::app::ListActivity(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceActivity(QJniObject obj);
		
		// Constructors
		PreferenceActivity();
		
		// Methods
		void addPreferencesFromIntent(android::content::Intent arg0);
		void addPreferencesFromResource(jint arg0);
		android::preference::Preference findPreference(JString arg0);
		void finishPreferencePanel(android::app::Fragment arg0, jint arg1, android::content::Intent arg2);
		android::preference::PreferenceManager getPreferenceManager();
		android::preference::PreferenceScreen getPreferenceScreen();
		jboolean hasHeaders();
		void invalidateHeaders();
		jboolean isMultiPane();
		void loadHeadersFromResource(jint arg0, JObject arg1);
		void onBackPressed();
		void onBuildHeaders(JObject arg0);
		android::content::Intent onBuildStartFragmentIntent(JString arg0, android::os::Bundle arg1, jint arg2, jint arg3);
		void onContentChanged();
		android::preference::PreferenceActivity_Header onGetInitialHeader();
		android::preference::PreferenceActivity_Header onGetNewHeader();
		void onHeaderClick(android::preference::PreferenceActivity_Header arg0, jint arg1);
		jboolean onIsHidingHeaders();
		jboolean onIsMultiPane();
		jboolean onOptionsItemSelected(JObject arg0);
		jboolean onPreferenceStartFragment(android::preference::PreferenceFragment arg0, android::preference::Preference arg1);
		jboolean onPreferenceTreeClick(android::preference::PreferenceScreen arg0, android::preference::Preference arg1);
		void setListFooter(android::view::View arg0);
		void setParentTitle(JString arg0, JString arg1, JObject arg2);
		void setPreferenceScreen(android::preference::PreferenceScreen arg0);
		void showBreadCrumbs(JString arg0, JString arg1);
		void startPreferenceFragment(android::app::Fragment arg0, jboolean arg1);
		void startPreferencePanel(JString arg0, android::os::Bundle arg1, jint arg2, JString arg3, android::app::Fragment arg4, jint arg5);
		void startWithFragment(JString arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3);
		void startWithFragment(JString arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3, jint arg4, jint arg5);
		void switchToHeader(android::preference::PreferenceActivity_Header arg0);
		void switchToHeader(JString arg0, android::os::Bundle arg1);
	};
} // namespace android::preference


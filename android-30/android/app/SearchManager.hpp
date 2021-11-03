#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class SearchableInfo;
}
namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::app
{
	class SearchManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_KEY();
		static JString ACTION_MSG();
		static JString APP_DATA();
		static JString CURSOR_EXTRA_KEY_IN_PROGRESS();
		static JString EXTRA_DATA_KEY();
		static JString EXTRA_NEW_SEARCH();
		static JString EXTRA_SELECT_QUERY();
		static JString EXTRA_WEB_SEARCH_PENDINGINTENT();
		static jint FLAG_QUERY_REFINEMENT();
		static JString INTENT_ACTION_GLOBAL_SEARCH();
		static JString INTENT_ACTION_SEARCHABLES_CHANGED();
		static JString INTENT_ACTION_SEARCH_SETTINGS();
		static JString INTENT_ACTION_SEARCH_SETTINGS_CHANGED();
		static JString INTENT_ACTION_WEB_SEARCH_SETTINGS();
		static JString INTENT_GLOBAL_SEARCH_ACTIVITY_CHANGED();
		static jchar MENU_KEY();
		static jint MENU_KEYCODE();
		static JString QUERY();
		static JString SHORTCUT_MIME_TYPE();
		static JString SUGGEST_COLUMN_AUDIO_CHANNEL_CONFIG();
		static JString SUGGEST_COLUMN_CONTENT_TYPE();
		static JString SUGGEST_COLUMN_DURATION();
		static JString SUGGEST_COLUMN_FLAGS();
		static JString SUGGEST_COLUMN_FORMAT();
		static JString SUGGEST_COLUMN_ICON_1();
		static JString SUGGEST_COLUMN_ICON_2();
		static JString SUGGEST_COLUMN_INTENT_ACTION();
		static JString SUGGEST_COLUMN_INTENT_DATA();
		static JString SUGGEST_COLUMN_INTENT_DATA_ID();
		static JString SUGGEST_COLUMN_INTENT_EXTRA_DATA();
		static JString SUGGEST_COLUMN_IS_LIVE();
		static JString SUGGEST_COLUMN_LAST_ACCESS_HINT();
		static JString SUGGEST_COLUMN_PRODUCTION_YEAR();
		static JString SUGGEST_COLUMN_PURCHASE_PRICE();
		static JString SUGGEST_COLUMN_QUERY();
		static JString SUGGEST_COLUMN_RATING_SCORE();
		static JString SUGGEST_COLUMN_RATING_STYLE();
		static JString SUGGEST_COLUMN_RENTAL_PRICE();
		static JString SUGGEST_COLUMN_RESULT_CARD_IMAGE();
		static JString SUGGEST_COLUMN_SHORTCUT_ID();
		static JString SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING();
		static JString SUGGEST_COLUMN_TEXT_1();
		static JString SUGGEST_COLUMN_TEXT_2();
		static JString SUGGEST_COLUMN_TEXT_2_URL();
		static JString SUGGEST_COLUMN_VIDEO_HEIGHT();
		static JString SUGGEST_COLUMN_VIDEO_WIDTH();
		static JString SUGGEST_MIME_TYPE();
		static JString SUGGEST_NEVER_MAKE_SHORTCUT();
		static JString SUGGEST_PARAMETER_LIMIT();
		static JString SUGGEST_URI_PATH_QUERY();
		static JString SUGGEST_URI_PATH_SHORTCUT();
		static JString USER_QUERY();
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::ComponentName getGlobalSearchActivity();
		android::app::SearchableInfo getSearchableInfo(android::content::ComponentName arg0);
		JObject getSearchablesInGlobalSearch();
		void onCancel(JObject arg0);
		void onDismiss(JObject arg0);
		void setOnCancelListener(JObject arg0);
		void setOnDismissListener(JObject arg0);
		void startSearch(JString arg0, jboolean arg1, android::content::ComponentName arg2, android::os::Bundle arg3, jboolean arg4);
		void stopSearch();
		void triggerSearch(JString arg0, android::content::ComponentName arg1, android::os::Bundle arg2);
	};
} // namespace android::app


#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::app
{
	class SearchManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_KEY();
		static jstring ACTION_MSG();
		static jstring APP_DATA();
		static jstring CURSOR_EXTRA_KEY_IN_PROGRESS();
		static jstring EXTRA_DATA_KEY();
		static jstring EXTRA_NEW_SEARCH();
		static jstring EXTRA_SELECT_QUERY();
		static jstring EXTRA_WEB_SEARCH_PENDINGINTENT();
		static jint FLAG_QUERY_REFINEMENT();
		static jstring INTENT_ACTION_GLOBAL_SEARCH();
		static jstring INTENT_ACTION_SEARCHABLES_CHANGED();
		static jstring INTENT_ACTION_SEARCH_SETTINGS();
		static jstring INTENT_ACTION_SEARCH_SETTINGS_CHANGED();
		static jstring INTENT_ACTION_WEB_SEARCH_SETTINGS();
		static jstring INTENT_GLOBAL_SEARCH_ACTIVITY_CHANGED();
		static jchar MENU_KEY();
		static jint MENU_KEYCODE();
		static jstring QUERY();
		static jstring SHORTCUT_MIME_TYPE();
		static jstring SUGGEST_COLUMN_AUDIO_CHANNEL_CONFIG();
		static jstring SUGGEST_COLUMN_CONTENT_TYPE();
		static jstring SUGGEST_COLUMN_DURATION();
		static jstring SUGGEST_COLUMN_FLAGS();
		static jstring SUGGEST_COLUMN_FORMAT();
		static jstring SUGGEST_COLUMN_ICON_1();
		static jstring SUGGEST_COLUMN_ICON_2();
		static jstring SUGGEST_COLUMN_INTENT_ACTION();
		static jstring SUGGEST_COLUMN_INTENT_DATA();
		static jstring SUGGEST_COLUMN_INTENT_DATA_ID();
		static jstring SUGGEST_COLUMN_INTENT_EXTRA_DATA();
		static jstring SUGGEST_COLUMN_IS_LIVE();
		static jstring SUGGEST_COLUMN_LAST_ACCESS_HINT();
		static jstring SUGGEST_COLUMN_PRODUCTION_YEAR();
		static jstring SUGGEST_COLUMN_PURCHASE_PRICE();
		static jstring SUGGEST_COLUMN_QUERY();
		static jstring SUGGEST_COLUMN_RATING_SCORE();
		static jstring SUGGEST_COLUMN_RATING_STYLE();
		static jstring SUGGEST_COLUMN_RENTAL_PRICE();
		static jstring SUGGEST_COLUMN_RESULT_CARD_IMAGE();
		static jstring SUGGEST_COLUMN_SHORTCUT_ID();
		static jstring SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING();
		static jstring SUGGEST_COLUMN_TEXT_1();
		static jstring SUGGEST_COLUMN_TEXT_2();
		static jstring SUGGEST_COLUMN_TEXT_2_URL();
		static jstring SUGGEST_COLUMN_VIDEO_HEIGHT();
		static jstring SUGGEST_COLUMN_VIDEO_WIDTH();
		static jstring SUGGEST_MIME_TYPE();
		static jstring SUGGEST_NEVER_MAKE_SHORTCUT();
		static jstring SUGGEST_PARAMETER_LIMIT();
		static jstring SUGGEST_URI_PATH_QUERY();
		static jstring SUGGEST_URI_PATH_SHORTCUT();
		static jstring USER_QUERY();
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SearchManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::ComponentName getGlobalSearchActivity();
		android::app::SearchableInfo getSearchableInfo(android::content::ComponentName arg0);
		__JniBaseClass getSearchablesInGlobalSearch();
		void onCancel(__JniBaseClass arg0);
		void onDismiss(__JniBaseClass arg0);
		void setOnCancelListener(__JniBaseClass arg0);
		void setOnDismissListener(__JniBaseClass arg0);
		void startSearch(jstring arg0, jboolean arg1, android::content::ComponentName arg2, android::os::Bundle arg3, jboolean arg4);
		void stopSearch();
		void triggerSearch(jstring arg0, android::content::ComponentName arg1, android::os::Bundle arg2);
	};
} // namespace android::app


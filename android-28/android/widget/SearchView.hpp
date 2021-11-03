#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

namespace android::app
{
	class SearchableInfo;
}
namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::widget
{
	class CursorAdapter;
}

namespace android::widget
{
	class SearchView : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchView(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		SearchView(QAndroidJniObject obj);
		
		// Constructors
		SearchView(android::content::Context arg0);
		SearchView(android::content::Context arg0, JObject arg1);
		SearchView(android::content::Context arg0, JObject arg1, jint arg2);
		SearchView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void clearFocus();
		jstring getAccessibilityClassName();
		jint getImeOptions();
		jint getInputType();
		jint getMaxWidth();
		jstring getQuery();
		jstring getQueryHint();
		android::widget::CursorAdapter getSuggestionsAdapter();
		jboolean isIconfiedByDefault();
		jboolean isIconified();
		jboolean isQueryRefinementEnabled();
		jboolean isSubmitButtonEnabled();
		void onActionViewCollapsed();
		void onActionViewExpanded();
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		void onWindowFocusChanged(jboolean arg0);
		jboolean requestFocus(jint arg0, android::graphics::Rect arg1);
		void setIconified(jboolean arg0);
		void setIconifiedByDefault(jboolean arg0);
		void setImeOptions(jint arg0);
		void setInputType(jint arg0);
		void setMaxWidth(jint arg0);
		void setOnCloseListener(JObject arg0);
		void setOnQueryTextFocusChangeListener(JObject arg0);
		void setOnQueryTextListener(JObject arg0);
		void setOnSearchClickListener(JObject arg0);
		void setOnSuggestionListener(JObject arg0);
		void setQuery(jstring arg0, jboolean arg1);
		void setQueryHint(jstring arg0);
		void setQueryRefinementEnabled(jboolean arg0);
		void setSearchableInfo(android::app::SearchableInfo arg0);
		void setSubmitButtonEnabled(jboolean arg0);
		void setSuggestionsAdapter(android::widget::CursorAdapter arg0);
	};
} // namespace android::widget


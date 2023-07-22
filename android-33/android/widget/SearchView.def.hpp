#pragma once

#include "./LinearLayout.def.hpp"

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
class JString;

namespace android::widget
{
	class SearchView : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchView(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		SearchView(QJniObject obj) : android::widget::LinearLayout(obj) {}
		
		// Constructors
		SearchView(android::content::Context arg0);
		SearchView(android::content::Context arg0, JObject arg1);
		SearchView(android::content::Context arg0, JObject arg1, jint arg2);
		SearchView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void clearFocus() const;
		JString getAccessibilityClassName() const;
		jint getImeOptions() const;
		jint getInputType() const;
		jint getMaxWidth() const;
		JString getQuery() const;
		JString getQueryHint() const;
		android::widget::CursorAdapter getSuggestionsAdapter() const;
		jboolean isIconfiedByDefault() const;
		jboolean isIconified() const;
		jboolean isIconifiedByDefault() const;
		jboolean isQueryRefinementEnabled() const;
		jboolean isSubmitButtonEnabled() const;
		void onActionViewCollapsed() const;
		void onActionViewExpanded() const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		void onWindowFocusChanged(jboolean arg0) const;
		jboolean requestFocus(jint arg0, android::graphics::Rect arg1) const;
		void setIconified(jboolean arg0) const;
		void setIconifiedByDefault(jboolean arg0) const;
		void setImeOptions(jint arg0) const;
		void setInputType(jint arg0) const;
		void setMaxWidth(jint arg0) const;
		void setOnCloseListener(JObject arg0) const;
		void setOnQueryTextFocusChangeListener(JObject arg0) const;
		void setOnQueryTextListener(JObject arg0) const;
		void setOnSearchClickListener(JObject arg0) const;
		void setOnSuggestionListener(JObject arg0) const;
		void setQuery(JString arg0, jboolean arg1) const;
		void setQueryHint(JString arg0) const;
		void setQueryRefinementEnabled(jboolean arg0) const;
		void setSearchableInfo(android::app::SearchableInfo arg0) const;
		void setSubmitButtonEnabled(jboolean arg0) const;
		void setSuggestionsAdapter(android::widget::CursorAdapter arg0) const;
	};
} // namespace android::widget


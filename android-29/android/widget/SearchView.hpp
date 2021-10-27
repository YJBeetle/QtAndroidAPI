#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		SearchView(QAndroidJniObject obj);
		// Constructors
		SearchView(android::content::Context &arg0);
		SearchView(android::content::Context &arg0, __JniBaseClass &arg1);
		SearchView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		SearchView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		SearchView() = default;
		
		// Methods
		void clearFocus();
		jstring getAccessibilityClassName();
		jint getImeOptions();
		jint getInputType();
		jint getMaxWidth();
		jstring getQuery();
		jstring getQueryHint();
		QAndroidJniObject getSuggestionsAdapter();
		jboolean isIconfiedByDefault();
		jboolean isIconified();
		jboolean isIconifiedByDefault();
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
		void setOnCloseListener(__JniBaseClass arg0);
		void setOnQueryTextFocusChangeListener(__JniBaseClass arg0);
		void setOnQueryTextListener(__JniBaseClass arg0);
		void setOnSearchClickListener(__JniBaseClass arg0);
		void setOnSuggestionListener(__JniBaseClass arg0);
		void setQuery(jstring arg0, jboolean arg1);
		void setQuery(const QString &arg0, jboolean arg1);
		void setQueryHint(jstring arg0);
		void setQueryHint(const QString &arg0);
		void setQueryRefinementEnabled(jboolean arg0);
		void setSearchableInfo(android::app::SearchableInfo arg0);
		void setSubmitButtonEnabled(jboolean arg0);
		void setSuggestionsAdapter(android::widget::CursorAdapter arg0);
	};
} // namespace android::widget


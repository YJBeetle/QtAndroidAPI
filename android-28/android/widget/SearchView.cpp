#include "../app/SearchableInfo.hpp"
#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../view/KeyEvent.hpp"
#include "./CursorAdapter.hpp"
#include "../../JString.hpp"
#include "./SearchView.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	SearchView::SearchView(QJniObject obj) : android::widget::LinearLayout(obj) {}
	
	// Constructors
	SearchView::SearchView(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.SearchView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	SearchView::SearchView(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.SearchView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	SearchView::SearchView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::LinearLayout(
			"android.widget.SearchView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	SearchView::SearchView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::LinearLayout(
			"android.widget.SearchView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void SearchView::clearFocus() const
	{
		callMethod<void>(
			"clearFocus",
			"()V"
		);
	}
	JString SearchView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint SearchView::getImeOptions() const
	{
		return callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	jint SearchView::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jint SearchView::getMaxWidth() const
	{
		return callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	JString SearchView::getQuery() const
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString SearchView::getQueryHint() const
	{
		return callObjectMethod(
			"getQueryHint",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::widget::CursorAdapter SearchView::getSuggestionsAdapter() const
	{
		return callObjectMethod(
			"getSuggestionsAdapter",
			"()Landroid/widget/CursorAdapter;"
		);
	}
	jboolean SearchView::isIconfiedByDefault() const
	{
		return callMethod<jboolean>(
			"isIconfiedByDefault",
			"()Z"
		);
	}
	jboolean SearchView::isIconified() const
	{
		return callMethod<jboolean>(
			"isIconified",
			"()Z"
		);
	}
	jboolean SearchView::isQueryRefinementEnabled() const
	{
		return callMethod<jboolean>(
			"isQueryRefinementEnabled",
			"()Z"
		);
	}
	jboolean SearchView::isSubmitButtonEnabled() const
	{
		return callMethod<jboolean>(
			"isSubmitButtonEnabled",
			"()Z"
		);
	}
	void SearchView::onActionViewCollapsed() const
	{
		callMethod<void>(
			"onActionViewCollapsed",
			"()V"
		);
	}
	void SearchView::onActionViewExpanded() const
	{
		callMethod<void>(
			"onActionViewExpanded",
			"()V"
		);
	}
	jboolean SearchView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void SearchView::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean SearchView::requestFocus(jint arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.object()
		);
	}
	void SearchView::setIconified(jboolean arg0) const
	{
		callMethod<void>(
			"setIconified",
			"(Z)V",
			arg0
		);
	}
	void SearchView::setIconifiedByDefault(jboolean arg0) const
	{
		callMethod<void>(
			"setIconifiedByDefault",
			"(Z)V",
			arg0
		);
	}
	void SearchView::setImeOptions(jint arg0) const
	{
		callMethod<void>(
			"setImeOptions",
			"(I)V",
			arg0
		);
	}
	void SearchView::setInputType(jint arg0) const
	{
		callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	void SearchView::setMaxWidth(jint arg0) const
	{
		callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0
		);
	}
	void SearchView::setOnCloseListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCloseListener",
			"(Landroid/widget/SearchView$OnCloseListener;)V",
			arg0.object()
		);
	}
	void SearchView::setOnQueryTextFocusChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnQueryTextFocusChangeListener",
			"(Landroid/view/View$OnFocusChangeListener;)V",
			arg0.object()
		);
	}
	void SearchView::setOnQueryTextListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnQueryTextListener",
			"(Landroid/widget/SearchView$OnQueryTextListener;)V",
			arg0.object()
		);
	}
	void SearchView::setOnSearchClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnSearchClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void SearchView::setOnSuggestionListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnSuggestionListener",
			"(Landroid/widget/SearchView$OnSuggestionListener;)V",
			arg0.object()
		);
	}
	void SearchView::setQuery(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setQuery",
			"(Ljava/lang/CharSequence;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void SearchView::setQueryHint(JString arg0) const
	{
		callMethod<void>(
			"setQueryHint",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void SearchView::setQueryRefinementEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setQueryRefinementEnabled",
			"(Z)V",
			arg0
		);
	}
	void SearchView::setSearchableInfo(android::app::SearchableInfo arg0) const
	{
		callMethod<void>(
			"setSearchableInfo",
			"(Landroid/app/SearchableInfo;)V",
			arg0.object()
		);
	}
	void SearchView::setSubmitButtonEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSubmitButtonEnabled",
			"(Z)V",
			arg0
		);
	}
	void SearchView::setSuggestionsAdapter(android::widget::CursorAdapter arg0) const
	{
		callMethod<void>(
			"setSuggestionsAdapter",
			"(Landroid/widget/CursorAdapter;)V",
			arg0.object()
		);
	}
} // namespace android::widget


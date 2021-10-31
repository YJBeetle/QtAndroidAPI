#include "../app/SearchableInfo.hpp"
#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../view/KeyEvent.hpp"
#include "./CursorAdapter.hpp"
#include "./SearchView.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	SearchView::SearchView(QAndroidJniObject obj) : android::widget::LinearLayout(obj) {}
	
	// Constructors
	SearchView::SearchView(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.SearchView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	SearchView::SearchView(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::LinearLayout(
			"android.widget.SearchView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	SearchView::SearchView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::LinearLayout(
			"android.widget.SearchView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	SearchView::SearchView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::LinearLayout(
			"android.widget.SearchView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void SearchView::clearFocus()
	{
		callMethod<void>(
			"clearFocus",
			"()V"
		);
	}
	jstring SearchView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint SearchView::getImeOptions()
	{
		return callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	jint SearchView::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jint SearchView::getMaxWidth()
	{
		return callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	jstring SearchView::getQuery()
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring SearchView::getQueryHint()
	{
		return callObjectMethod(
			"getQueryHint",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::widget::CursorAdapter SearchView::getSuggestionsAdapter()
	{
		return callObjectMethod(
			"getSuggestionsAdapter",
			"()Landroid/widget/CursorAdapter;"
		);
	}
	jboolean SearchView::isIconfiedByDefault()
	{
		return callMethod<jboolean>(
			"isIconfiedByDefault",
			"()Z"
		);
	}
	jboolean SearchView::isIconified()
	{
		return callMethod<jboolean>(
			"isIconified",
			"()Z"
		);
	}
	jboolean SearchView::isQueryRefinementEnabled()
	{
		return callMethod<jboolean>(
			"isQueryRefinementEnabled",
			"()Z"
		);
	}
	jboolean SearchView::isSubmitButtonEnabled()
	{
		return callMethod<jboolean>(
			"isSubmitButtonEnabled",
			"()Z"
		);
	}
	void SearchView::onActionViewCollapsed()
	{
		callMethod<void>(
			"onActionViewCollapsed",
			"()V"
		);
	}
	void SearchView::onActionViewExpanded()
	{
		callMethod<void>(
			"onActionViewExpanded",
			"()V"
		);
	}
	jboolean SearchView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void SearchView::onWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean SearchView::requestFocus(jint arg0, android::graphics::Rect arg1)
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.object()
		);
	}
	void SearchView::setIconified(jboolean arg0)
	{
		callMethod<void>(
			"setIconified",
			"(Z)V",
			arg0
		);
	}
	void SearchView::setIconifiedByDefault(jboolean arg0)
	{
		callMethod<void>(
			"setIconifiedByDefault",
			"(Z)V",
			arg0
		);
	}
	void SearchView::setImeOptions(jint arg0)
	{
		callMethod<void>(
			"setImeOptions",
			"(I)V",
			arg0
		);
	}
	void SearchView::setInputType(jint arg0)
	{
		callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	void SearchView::setMaxWidth(jint arg0)
	{
		callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0
		);
	}
	void SearchView::setOnCloseListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnCloseListener",
			"(Landroid/widget/SearchView$OnCloseListener;)V",
			arg0.object()
		);
	}
	void SearchView::setOnQueryTextFocusChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnQueryTextFocusChangeListener",
			"(Landroid/view/View$OnFocusChangeListener;)V",
			arg0.object()
		);
	}
	void SearchView::setOnQueryTextListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnQueryTextListener",
			"(Landroid/widget/SearchView$OnQueryTextListener;)V",
			arg0.object()
		);
	}
	void SearchView::setOnSearchClickListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnSearchClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void SearchView::setOnSuggestionListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnSuggestionListener",
			"(Landroid/widget/SearchView$OnSuggestionListener;)V",
			arg0.object()
		);
	}
	void SearchView::setQuery(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setQuery",
			"(Ljava/lang/CharSequence;Z)V",
			arg0,
			arg1
		);
	}
	void SearchView::setQueryHint(jstring arg0)
	{
		callMethod<void>(
			"setQueryHint",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void SearchView::setQueryRefinementEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setQueryRefinementEnabled",
			"(Z)V",
			arg0
		);
	}
	void SearchView::setSearchableInfo(android::app::SearchableInfo arg0)
	{
		callMethod<void>(
			"setSearchableInfo",
			"(Landroid/app/SearchableInfo;)V",
			arg0.object()
		);
	}
	void SearchView::setSubmitButtonEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setSubmitButtonEnabled",
			"(Z)V",
			arg0
		);
	}
	void SearchView::setSuggestionsAdapter(android::widget::CursorAdapter arg0)
	{
		callMethod<void>(
			"setSuggestionsAdapter",
			"(Landroid/widget/CursorAdapter;)V",
			arg0.object()
		);
	}
} // namespace android::widget


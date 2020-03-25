#pragma once

#ifndef ANDROID_WIDGET_SEARCHVIEW
#define ANDROID_WIDGET_SEARCHVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "LinearLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::app
{
	class SearchableInfo;
}
namespace __jni_impl::android::widget
{
	class CursorAdapter;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}

namespace __jni_impl::android::widget
{
	class SearchView : public __jni_impl::android::widget::LinearLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject getQuery();
		void setMaxWidth(jint arg0);
		jint getMaxWidth();
		void setInputType(jint arg0);
		jint getInputType();
		void setImeOptions(jint arg0);
		jint getImeOptions();
		void setOnQueryTextListener(__jni_impl::__JniBaseClass arg0);
		void setOnCloseListener(__jni_impl::__JniBaseClass arg0);
		void setSearchableInfo(__jni_impl::android::app::SearchableInfo arg0);
		void setOnQueryTextFocusChangeListener(__jni_impl::__JniBaseClass arg0);
		void setOnSuggestionListener(__jni_impl::__JniBaseClass arg0);
		void setOnSearchClickListener(__jni_impl::__JniBaseClass arg0);
		void setQuery(jstring arg0, jboolean arg1);
		void setQueryHint(jstring arg0);
		QAndroidJniObject getQueryHint();
		void setIconifiedByDefault(jboolean arg0);
		jboolean isIconfiedByDefault();
		jboolean isIconifiedByDefault();
		void setIconified(jboolean arg0);
		jboolean isIconified();
		void setSubmitButtonEnabled(jboolean arg0);
		jboolean isSubmitButtonEnabled();
		void setQueryRefinementEnabled(jboolean arg0);
		jboolean isQueryRefinementEnabled();
		void setSuggestionsAdapter(__jni_impl::android::widget::CursorAdapter arg0);
		QAndroidJniObject getSuggestionsAdapter();
		void clearFocus();
		jboolean requestFocus(jint arg0, __jni_impl::android::graphics::Rect arg1);
		QAndroidJniObject getAccessibilityClassName();
		void onActionViewExpanded();
		void onActionViewCollapsed();
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		void onWindowFocusChanged(jboolean arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../app/SearchableInfo.hpp"
#include "CursorAdapter.hpp"
#include "../graphics/Rect.hpp"
#include "../view/KeyEvent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void SearchView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SearchView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void SearchView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SearchView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void SearchView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SearchView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void SearchView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SearchView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject SearchView::getQuery()
	{
		return __thiz.callObjectMethod(
			"getQuery",
			"()Ljava/lang/CharSequence;");
	}
	void SearchView::setMaxWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0);
	}
	jint SearchView::getMaxWidth()
	{
		return __thiz.callMethod<jint>(
			"getMaxWidth",
			"()I");
	}
	void SearchView::setInputType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputType",
			"(I)V",
			arg0);
	}
	jint SearchView::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I");
	}
	void SearchView::setImeOptions(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImeOptions",
			"(I)V",
			arg0);
	}
	jint SearchView::getImeOptions()
	{
		return __thiz.callMethod<jint>(
			"getImeOptions",
			"()I");
	}
	void SearchView::setOnQueryTextListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnQueryTextListener",
			"(Landroid/widget/SearchView$OnQueryTextListener;)V",
			arg0.__jniObject().object());
	}
	void SearchView::setOnCloseListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCloseListener",
			"(Landroid/widget/SearchView$OnCloseListener;)V",
			arg0.__jniObject().object());
	}
	void SearchView::setSearchableInfo(__jni_impl::android::app::SearchableInfo arg0)
	{
		__thiz.callMethod<void>(
			"setSearchableInfo",
			"(Landroid/app/SearchableInfo;)V",
			arg0.__jniObject().object());
	}
	void SearchView::setOnQueryTextFocusChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnQueryTextFocusChangeListener",
			"(Landroid/view/View$OnFocusChangeListener;)V",
			arg0.__jniObject().object());
	}
	void SearchView::setOnSuggestionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnSuggestionListener",
			"(Landroid/widget/SearchView$OnSuggestionListener;)V",
			arg0.__jniObject().object());
	}
	void SearchView::setOnSearchClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnSearchClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object());
	}
	void SearchView::setQuery(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setQuery",
			"(Ljava/lang/CharSequence;Z)V",
			arg0,
			arg1);
	}
	void SearchView::setQueryHint(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setQueryHint",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject SearchView::getQueryHint()
	{
		return __thiz.callObjectMethod(
			"getQueryHint",
			"()Ljava/lang/CharSequence;");
	}
	void SearchView::setIconifiedByDefault(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIconifiedByDefault",
			"(Z)V",
			arg0);
	}
	jboolean SearchView::isIconfiedByDefault()
	{
		return __thiz.callMethod<jboolean>(
			"isIconfiedByDefault",
			"()Z");
	}
	jboolean SearchView::isIconifiedByDefault()
	{
		return __thiz.callMethod<jboolean>(
			"isIconifiedByDefault",
			"()Z");
	}
	void SearchView::setIconified(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIconified",
			"(Z)V",
			arg0);
	}
	jboolean SearchView::isIconified()
	{
		return __thiz.callMethod<jboolean>(
			"isIconified",
			"()Z");
	}
	void SearchView::setSubmitButtonEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSubmitButtonEnabled",
			"(Z)V",
			arg0);
	}
	jboolean SearchView::isSubmitButtonEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSubmitButtonEnabled",
			"()Z");
	}
	void SearchView::setQueryRefinementEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setQueryRefinementEnabled",
			"(Z)V",
			arg0);
	}
	jboolean SearchView::isQueryRefinementEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isQueryRefinementEnabled",
			"()Z");
	}
	void SearchView::setSuggestionsAdapter(__jni_impl::android::widget::CursorAdapter arg0)
	{
		__thiz.callMethod<void>(
			"setSuggestionsAdapter",
			"(Landroid/widget/CursorAdapter;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SearchView::getSuggestionsAdapter()
	{
		return __thiz.callObjectMethod(
			"getSuggestionsAdapter",
			"()Landroid/widget/CursorAdapter;");
	}
	void SearchView::clearFocus()
	{
		__thiz.callMethod<void>(
			"clearFocus",
			"()V");
	}
	jboolean SearchView::requestFocus(jint arg0, __jni_impl::android::graphics::Rect arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject SearchView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void SearchView::onActionViewExpanded()
	{
		__thiz.callMethod<void>(
			"onActionViewExpanded",
			"()V");
	}
	void SearchView::onActionViewCollapsed()
	{
		__thiz.callMethod<void>(
			"onActionViewCollapsed",
			"()V");
	}
	jboolean SearchView::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	void SearchView::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class SearchView : public __jni_impl::android::widget::SearchView
	{
	public:
		SearchView(QAndroidJniObject obj) { __thiz = obj; }
		SearchView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SearchView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SearchView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SearchView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_SEARCHVIEW


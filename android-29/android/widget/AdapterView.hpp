#pragma once

#ifndef ANDROID_WIDGET_ADAPTERVIEW
#define ANDROID_WIDGET_ADAPTERVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::view
{
	class ViewStructure;
}

namespace __jni_impl::android::widget
{
	class AdapterView : public __jni_impl::android::view::ViewGroup
	{
	public:
		// Fields
		static jint INVALID_POSITION();
		static jlong INVALID_ROW_ID();
		static jint ITEM_VIEW_TYPE_HEADER_OR_FOOTER();
		static jint ITEM_VIEW_TYPE_IGNORE();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void addView(__jni_impl::android::view::View arg0);
		void addView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		void addView(__jni_impl::android::view::View arg0, jint arg1);
		void addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2);
		jstring getAccessibilityClassName();
		QAndroidJniObject getAdapter();
		jint getCount();
		QAndroidJniObject getEmptyView();
		jint getFirstVisiblePosition();
		jobject getItemAtPosition(jint arg0);
		jlong getItemIdAtPosition(jint arg0);
		jint getLastVisiblePosition();
		QAndroidJniObject getOnItemClickListener();
		QAndroidJniObject getOnItemLongClickListener();
		QAndroidJniObject getOnItemSelectedListener();
		jint getPositionForView(__jni_impl::android::view::View arg0);
		jobject getSelectedItem();
		jlong getSelectedItemId();
		jint getSelectedItemPosition();
		QAndroidJniObject getSelectedView();
		void onProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1);
		jboolean performItemClick(__jni_impl::android::view::View arg0, jint arg1, jlong arg2);
		void removeAllViews();
		void removeView(__jni_impl::android::view::View arg0);
		void removeViewAt(jint arg0);
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		void setEmptyView(__jni_impl::android::view::View arg0);
		void setFocusable(jint arg0);
		void setFocusableInTouchMode(jboolean arg0);
		void setOnClickListener(__jni_impl::__JniBaseClass arg0);
		void setOnItemClickListener(__jni_impl::__JniBaseClass arg0);
		void setOnItemLongClickListener(__jni_impl::__JniBaseClass arg0);
		void setOnItemSelectedListener(__jni_impl::__JniBaseClass arg0);
		void setSelection(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../util/SparseArray.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewStructure.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint AdapterView::INVALID_POSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AdapterView",
			"INVALID_POSITION"
		);
	}
	jlong AdapterView::INVALID_ROW_ID()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.widget.AdapterView",
			"INVALID_ROW_ID"
		);
	}
	jint AdapterView::ITEM_VIEW_TYPE_HEADER_OR_FOOTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AdapterView",
			"ITEM_VIEW_TYPE_HEADER_OR_FOOTER"
		);
	}
	jint AdapterView::ITEM_VIEW_TYPE_IGNORE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AdapterView",
			"ITEM_VIEW_TYPE_IGNORE"
		);
	}
	
	// Constructors
	void AdapterView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AdapterView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void AdapterView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void AdapterView::addView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterView::addView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AdapterView::addView(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AdapterView::addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jstring AdapterView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject AdapterView::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/widget/Adapter;"
		);
	}
	jint AdapterView::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	QAndroidJniObject AdapterView::getEmptyView()
	{
		return __thiz.callObjectMethod(
			"getEmptyView",
			"()Landroid/view/View;"
		);
	}
	jint AdapterView::getFirstVisiblePosition()
	{
		return __thiz.callMethod<jint>(
			"getFirstVisiblePosition",
			"()I"
		);
	}
	jobject AdapterView::getItemAtPosition(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItemAtPosition",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jlong AdapterView::getItemIdAtPosition(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getItemIdAtPosition",
			"(I)J",
			arg0
		);
	}
	jint AdapterView::getLastVisiblePosition()
	{
		return __thiz.callMethod<jint>(
			"getLastVisiblePosition",
			"()I"
		);
	}
	QAndroidJniObject AdapterView::getOnItemClickListener()
	{
		return __thiz.callObjectMethod(
			"getOnItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	QAndroidJniObject AdapterView::getOnItemLongClickListener()
	{
		return __thiz.callObjectMethod(
			"getOnItemLongClickListener",
			"()Landroid/widget/AdapterView$OnItemLongClickListener;"
		);
	}
	QAndroidJniObject AdapterView::getOnItemSelectedListener()
	{
		return __thiz.callObjectMethod(
			"getOnItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	jint AdapterView::getPositionForView(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jint>(
			"getPositionForView",
			"(Landroid/view/View;)I",
			arg0.__jniObject().object()
		);
	}
	jobject AdapterView::getSelectedItem()
	{
		return __thiz.callObjectMethod(
			"getSelectedItem",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jlong AdapterView::getSelectedItemId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	jint AdapterView::getSelectedItemPosition()
	{
		return __thiz.callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	QAndroidJniObject AdapterView::getSelectedView()
	{
		return __thiz.callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	void AdapterView::onProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean AdapterView::performItemClick(__jni_impl::android::view::View arg0, jint arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"performItemClick",
			"(Landroid/view/View;IJ)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AdapterView::removeAllViews()
	{
		__thiz.callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	void AdapterView::removeView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterView::removeViewAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0
		);
	}
	void AdapterView::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterView::setEmptyView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setEmptyView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterView::setFocusable(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFocusable",
			"(I)V",
			arg0
		);
	}
	void AdapterView::setFocusableInTouchMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocusableInTouchMode",
			"(Z)V",
			arg0
		);
	}
	void AdapterView::setOnClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterView::setOnItemClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterView::setOnItemLongClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemLongClickListener",
			"(Landroid/widget/AdapterView$OnItemLongClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterView::setOnItemSelectedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterView::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AdapterView : public __jni_impl::android::widget::AdapterView
	{
	public:
		AdapterView(QAndroidJniObject obj) { __thiz = obj; }
		AdapterView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		AdapterView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AdapterView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		AdapterView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ADAPTERVIEW


#pragma once

#ifndef ANDROID_WIDGET_EXPANDABLELISTVIEW
#define ANDROID_WIDGET_EXPANDABLELISTVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "AdapterView.hpp"
#include "AbsListView.hpp"
#include "ListView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::widget
{
	class ExpandableListView : public __jni_impl::android::widget::ListView
	{
	public:
		// Fields
		static jint CHILD_INDICATOR_INHERIT();
		static jint PACKED_POSITION_TYPE_CHILD();
		static jint PACKED_POSITION_TYPE_GROUP();
		static jint PACKED_POSITION_TYPE_NULL();
		static jlong PACKED_POSITION_VALUE_NULL();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject getAdapter();
		void setOnItemClickListener(__jni_impl::__JniBaseClass arg0);
		jboolean performItemClick(__jni_impl::android::view::View arg0, jint arg1, jlong arg2);
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		void setSelectedGroup(jint arg0);
		jlong getSelectedId();
		jboolean setSelectedChild(jint arg0, jint arg1, jboolean arg2);
		jlong getSelectedPosition();
		QAndroidJniObject getExpandableListAdapter();
		void setChildDivider(__jni_impl::android::graphics::drawable::Drawable arg0);
		jboolean expandGroup(jint arg0);
		jboolean expandGroup(jint arg0, jboolean arg1);
		jboolean collapseGroup(jint arg0);
		void setOnGroupCollapseListener(__jni_impl::__JniBaseClass arg0);
		void setOnGroupExpandListener(__jni_impl::__JniBaseClass arg0);
		void setOnGroupClickListener(__jni_impl::__JniBaseClass arg0);
		void setOnChildClickListener(__jni_impl::__JniBaseClass arg0);
		jlong getExpandableListPosition(jint arg0);
		jint getFlatListPosition(jlong arg0);
		jboolean isGroupExpanded(jint arg0);
		static jint getPackedPositionType(jlong arg0);
		static jint getPackedPositionGroup(jlong arg0);
		static jint getPackedPositionChild(jlong arg0);
		static jlong getPackedPositionForChild(jint arg0, jint arg1);
		static jlong getPackedPositionForGroup(jint arg0);
		void setChildIndicator(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setChildIndicatorBounds(jint arg0, jint arg1);
		void setChildIndicatorBoundsRelative(jint arg0, jint arg1);
		void setGroupIndicator(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setIndicatorBounds(jint arg0, jint arg1);
		void setIndicatorBoundsRelative(jint arg0, jint arg1);
		QAndroidJniObject getAccessibilityClassName();
		void onRtlPropertiesChanged(jint arg0);
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../graphics/Canvas.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint ExpandableListView::CHILD_INDICATOR_INHERIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ExpandableListView",
			"CHILD_INDICATOR_INHERIT");
	}
	jint ExpandableListView::PACKED_POSITION_TYPE_CHILD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_CHILD");
	}
	jint ExpandableListView::PACKED_POSITION_TYPE_GROUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_GROUP");
	}
	jint ExpandableListView::PACKED_POSITION_TYPE_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_NULL");
	}
	jlong ExpandableListView::PACKED_POSITION_VALUE_NULL()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_VALUE_NULL");
	}
	
	// Constructors
	void ExpandableListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void ExpandableListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ExpandableListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ExpandableListView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ExpandableListView::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;");
	}
	void ExpandableListView::setOnItemClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.__jniObject().object());
	}
	jboolean ExpandableListView::performItemClick(__jni_impl::android::view::View arg0, jint arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"performItemClick",
			"(Landroid/view/View;IJ)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void ExpandableListView::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ExpandableListAdapter;)V",
			arg0.__jniObject().object());
	}
	void ExpandableListView::setSelectedGroup(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedGroup",
			"(I)V",
			arg0);
	}
	jlong ExpandableListView::getSelectedId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedId",
			"()J");
	}
	jboolean ExpandableListView::setSelectedChild(jint arg0, jint arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setSelectedChild",
			"(IIZ)Z",
			arg0,
			arg1,
			arg2);
	}
	jlong ExpandableListView::getSelectedPosition()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedPosition",
			"()J");
	}
	QAndroidJniObject ExpandableListView::getExpandableListAdapter()
	{
		return __thiz.callObjectMethod(
			"getExpandableListAdapter",
			"()Landroid/widget/ExpandableListAdapter;");
	}
	void ExpandableListView::setChildDivider(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setChildDivider",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	jboolean ExpandableListView::expandGroup(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"expandGroup",
			"(I)Z",
			arg0);
	}
	jboolean ExpandableListView::expandGroup(jint arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"expandGroup",
			"(IZ)Z",
			arg0,
			arg1);
	}
	jboolean ExpandableListView::collapseGroup(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"collapseGroup",
			"(I)Z",
			arg0);
	}
	void ExpandableListView::setOnGroupCollapseListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnGroupCollapseListener",
			"(Landroid/widget/ExpandableListView$OnGroupCollapseListener;)V",
			arg0.__jniObject().object());
	}
	void ExpandableListView::setOnGroupExpandListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnGroupExpandListener",
			"(Landroid/widget/ExpandableListView$OnGroupExpandListener;)V",
			arg0.__jniObject().object());
	}
	void ExpandableListView::setOnGroupClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnGroupClickListener",
			"(Landroid/widget/ExpandableListView$OnGroupClickListener;)V",
			arg0.__jniObject().object());
	}
	void ExpandableListView::setOnChildClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnChildClickListener",
			"(Landroid/widget/ExpandableListView$OnChildClickListener;)V",
			arg0.__jniObject().object());
	}
	jlong ExpandableListView::getExpandableListPosition(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getExpandableListPosition",
			"(I)J",
			arg0);
	}
	jint ExpandableListView::getFlatListPosition(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"getFlatListPosition",
			"(J)I",
			arg0);
	}
	jboolean ExpandableListView::isGroupExpanded(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isGroupExpanded",
			"(I)Z",
			arg0);
	}
	jint ExpandableListView::getPackedPositionType(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionType",
			"(J)I",
			arg0);
	}
	jint ExpandableListView::getPackedPositionGroup(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionGroup",
			"(J)I",
			arg0);
	}
	jint ExpandableListView::getPackedPositionChild(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionChild",
			"(J)I",
			arg0);
	}
	jlong ExpandableListView::getPackedPositionForChild(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.widget.ExpandableListView",
			"getPackedPositionForChild",
			"(II)J",
			arg0,
			arg1);
	}
	jlong ExpandableListView::getPackedPositionForGroup(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.widget.ExpandableListView",
			"getPackedPositionForGroup",
			"(I)J",
			arg0);
	}
	void ExpandableListView::setChildIndicator(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setChildIndicator",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void ExpandableListView::setChildIndicatorBounds(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setChildIndicatorBounds",
			"(II)V",
			arg0,
			arg1);
	}
	void ExpandableListView::setChildIndicatorBoundsRelative(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setChildIndicatorBoundsRelative",
			"(II)V",
			arg0,
			arg1);
	}
	void ExpandableListView::setGroupIndicator(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setGroupIndicator",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void ExpandableListView::setIndicatorBounds(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setIndicatorBounds",
			"(II)V",
			arg0,
			arg1);
	}
	void ExpandableListView::setIndicatorBoundsRelative(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setIndicatorBoundsRelative",
			"(II)V",
			arg0,
			arg1);
	}
	QAndroidJniObject ExpandableListView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void ExpandableListView::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0);
	}
	void ExpandableListView::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ExpandableListView::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;");
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ExpandableListView : public __jni_impl::android::widget::ExpandableListView
	{
	public:
		ExpandableListView(QAndroidJniObject obj) { __thiz = obj; }
		ExpandableListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ExpandableListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ExpandableListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ExpandableListView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_EXPANDABLELISTVIEW


#pragma once

#ifndef ANDROID_APP_EXPANDABLELISTACTIVITY
#define ANDROID_APP_EXPANDABLELISTACTIVITY

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "Activity.hpp"

namespace __jni_impl::android::widget
{
	class ExpandableListView;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::app
{
	class ExpandableListActivity : public __jni_impl::android::app::Activity
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void setSelectedGroup(jint arg0);
		jlong getSelectedId();
		jboolean setSelectedChild(jint arg0, jint arg1, jboolean arg2);
		jlong getSelectedPosition();
		void onGroupCollapse(jint arg0);
		QAndroidJniObject getExpandableListView();
		jboolean onChildClick(__jni_impl::android::widget::ExpandableListView arg0, __jni_impl::android::view::View arg1, jint arg2, jint arg3, jlong arg4);
		void setListAdapter(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getExpandableListAdapter();
		void onGroupExpand(jint arg0);
		void onContentChanged();
		void onCreateContextMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2);
	};
} // namespace __jni_impl::android::app

#include "../widget/ExpandableListView.hpp"
#include "../view/View.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void ExpandableListActivity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ExpandableListActivity",
			"()V");
	}
	
	// Methods
	void ExpandableListActivity::setSelectedGroup(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedGroup",
			"(I)V",
			arg0);
	}
	jlong ExpandableListActivity::getSelectedId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedId",
			"()J");
	}
	jboolean ExpandableListActivity::setSelectedChild(jint arg0, jint arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setSelectedChild",
			"(IIZ)Z",
			arg0,
			arg1,
			arg2);
	}
	jlong ExpandableListActivity::getSelectedPosition()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedPosition",
			"()J");
	}
	void ExpandableListActivity::onGroupCollapse(jint arg0)
	{
		__thiz.callMethod<void>(
			"onGroupCollapse",
			"(I)V",
			arg0);
	}
	QAndroidJniObject ExpandableListActivity::getExpandableListView()
	{
		return __thiz.callObjectMethod(
			"getExpandableListView",
			"()Landroid/widget/ExpandableListView;");
	}
	jboolean ExpandableListActivity::onChildClick(__jni_impl::android::widget::ExpandableListView arg0, __jni_impl::android::view::View arg1, jint arg2, jint arg3, jlong arg4)
	{
		return __thiz.callMethod<jboolean>(
			"onChildClick",
			"(Landroid/widget/ExpandableListView;Landroid/view/View;IIJ)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4);
	}
	void ExpandableListActivity::setListAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ExpandableListAdapter;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ExpandableListActivity::getExpandableListAdapter()
	{
		return __thiz.callObjectMethod(
			"getExpandableListAdapter",
			"()Landroid/widget/ExpandableListAdapter;");
	}
	void ExpandableListActivity::onGroupExpand(jint arg0)
	{
		__thiz.callMethod<void>(
			"onGroupExpand",
			"(I)V",
			arg0);
	}
	void ExpandableListActivity::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V");
	}
	void ExpandableListActivity::onCreateContextMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ExpandableListActivity : public __jni_impl::android::app::ExpandableListActivity
	{
	public:
		ExpandableListActivity(QAndroidJniObject obj) { __thiz = obj; }
		ExpandableListActivity()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_EXPANDABLELISTACTIVITY


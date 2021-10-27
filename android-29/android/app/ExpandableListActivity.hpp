#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::widget
{
	class ExpandableListView;
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
		QAndroidJniObject getExpandableListAdapter();
		QAndroidJniObject getExpandableListView();
		jlong getSelectedId();
		jlong getSelectedPosition();
		jboolean onChildClick(__jni_impl::android::widget::ExpandableListView arg0, __jni_impl::android::view::View arg1, jint arg2, jint arg3, jlong arg4);
		void onContentChanged();
		void onCreateContextMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2);
		void onGroupCollapse(jint arg0);
		void onGroupExpand(jint arg0);
		void setListAdapter(__jni_impl::__JniBaseClass arg0);
		jboolean setSelectedChild(jint arg0, jint arg1, jboolean arg2);
		void setSelectedGroup(jint arg0);
	};
} // namespace __jni_impl::android::app

#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../widget/ExpandableListView.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void ExpandableListActivity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ExpandableListActivity",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ExpandableListActivity::getExpandableListAdapter()
	{
		return __thiz.callObjectMethod(
			"getExpandableListAdapter",
			"()Landroid/widget/ExpandableListAdapter;"
		);
	}
	QAndroidJniObject ExpandableListActivity::getExpandableListView()
	{
		return __thiz.callObjectMethod(
			"getExpandableListView",
			"()Landroid/widget/ExpandableListView;"
		);
	}
	jlong ExpandableListActivity::getSelectedId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedId",
			"()J"
		);
	}
	jlong ExpandableListActivity::getSelectedPosition()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedPosition",
			"()J"
		);
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
			arg4
		);
	}
	void ExpandableListActivity::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void ExpandableListActivity::onCreateContextMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ExpandableListActivity::onGroupCollapse(jint arg0)
	{
		__thiz.callMethod<void>(
			"onGroupCollapse",
			"(I)V",
			arg0
		);
	}
	void ExpandableListActivity::onGroupExpand(jint arg0)
	{
		__thiz.callMethod<void>(
			"onGroupExpand",
			"(I)V",
			arg0
		);
	}
	void ExpandableListActivity::setListAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ExpandableListAdapter;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ExpandableListActivity::setSelectedChild(jint arg0, jint arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setSelectedChild",
			"(IIZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	void ExpandableListActivity::setSelectedGroup(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedGroup",
			"(I)V",
			arg0
		);
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


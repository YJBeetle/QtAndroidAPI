#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "Activity.hpp"

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
	class ListView;
}

namespace __jni_impl::android::app
{
	class ListActivity : public __jni_impl::android::app::Activity
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getListAdapter();
		QAndroidJniObject getListView();
		jlong getSelectedItemId();
		jint getSelectedItemPosition();
		void onContentChanged();
		void setListAdapter(__jni_impl::__JniBaseClass arg0);
		void setSelection(jint arg0);
	};
} // namespace __jni_impl::android::app

#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../widget/ListView.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void ListActivity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ListActivity",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ListActivity::getListAdapter()
	{
		return __thiz.callObjectMethod(
			"getListAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	QAndroidJniObject ListActivity::getListView()
	{
		return __thiz.callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	jlong ListActivity::getSelectedItemId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	jint ListActivity::getSelectedItemPosition()
	{
		return __thiz.callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	void ListActivity::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void ListActivity::setListAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.__jniObject().object()
		);
	}
	void ListActivity::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ListActivity : public __jni_impl::android::app::ListActivity
	{
	public:
		ListActivity(QAndroidJniObject obj) { __thiz = obj; }
		ListActivity()
		{
			__constructor();
		}
	};
} // namespace android::app


#pragma once

#ifndef ANDROID_APP_LISTACTIVITY
#define ANDROID_APP_LISTACTIVITY

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "Activity.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::widget
{
	class ListView;
}
namespace __jni_impl::android::view
{
	class View;
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
		jint getSelectedItemPosition();
		jlong getSelectedItemId();
		void setSelection(jint arg0);
		void onContentChanged();
		void setListAdapter(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getListView();
		QAndroidJniObject getListAdapter();
	};
} // namespace __jni_impl::android::app

#include "../os/Bundle.hpp"
#include "../widget/ListView.hpp"
#include "../view/View.hpp"

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
	jint ListActivity::getSelectedItemPosition()
	{
		return __thiz.callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	jlong ListActivity::getSelectedItemId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedItemId",
			"()J"
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
	QAndroidJniObject ListActivity::getListView()
	{
		return __thiz.callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	QAndroidJniObject ListActivity::getListAdapter()
	{
		return __thiz.callObjectMethod(
			"getListAdapter",
			"()Landroid/widget/ListAdapter;"
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

#endif // ANDROID_APP_LISTACTIVITY


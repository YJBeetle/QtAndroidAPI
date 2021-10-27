#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Fragment.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class LayoutInflater;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::widget
{
	class ListView;
}

namespace __jni_impl::android::app
{
	class ListFragment : public __jni_impl::android::app::Fragment
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
		QAndroidJniObject onCreateView(__jni_impl::android::view::LayoutInflater arg0, __jni_impl::android::view::ViewGroup arg1, __jni_impl::android::os::Bundle arg2);
		void onDestroyView();
		void onListItemClick(__jni_impl::android::widget::ListView arg0, __jni_impl::android::view::View arg1, jint arg2, jlong arg3);
		void onViewCreated(__jni_impl::android::view::View arg0, __jni_impl::android::os::Bundle arg1);
		void setEmptyText(jstring arg0);
		void setEmptyText(const QString &arg0);
		void setListAdapter(__jni_impl::__JniBaseClass arg0);
		void setListShown(jboolean arg0);
		void setListShownNoAnimation(jboolean arg0);
		void setSelection(jint arg0);
	};
} // namespace __jni_impl::android::app

#include "../os/Bundle.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/ListView.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void ListFragment::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ListFragment",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ListFragment::getListAdapter()
	{
		return __thiz.callObjectMethod(
			"getListAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	QAndroidJniObject ListFragment::getListView()
	{
		return __thiz.callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	jlong ListFragment::getSelectedItemId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	jint ListFragment::getSelectedItemPosition()
	{
		return __thiz.callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	QAndroidJniObject ListFragment::onCreateView(__jni_impl::android::view::LayoutInflater arg0, __jni_impl::android::view::ViewGroup arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ListFragment::onDestroyView()
	{
		__thiz.callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	void ListFragment::onListItemClick(__jni_impl::android::widget::ListView arg0, __jni_impl::android::view::View arg1, jint arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"onListItemClick",
			"(Landroid/widget/ListView;Landroid/view/View;IJ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void ListFragment::onViewCreated(__jni_impl::android::view::View arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ListFragment::setEmptyText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEmptyText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ListFragment::setEmptyText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setEmptyText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ListFragment::setListAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.__jniObject().object()
		);
	}
	void ListFragment::setListShown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setListShown",
			"(Z)V",
			arg0
		);
	}
	void ListFragment::setListShownNoAnimation(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setListShownNoAnimation",
			"(Z)V",
			arg0
		);
	}
	void ListFragment::setSelection(jint arg0)
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
	class ListFragment : public __jni_impl::android::app::ListFragment
	{
	public:
		ListFragment(QAndroidJniObject obj) { __thiz = obj; }
		ListFragment()
		{
			__constructor();
		}
	};
} // namespace android::app


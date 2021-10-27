#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::database
{
	class DataSetObserver;
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
	class Filter;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::widget
{
	class HeaderViewListAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::ArrayList arg0, __jni_impl::java::util::ArrayList arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
		jboolean areAllItemsEnabled();
		jint getCount();
		QAndroidJniObject getFilter();
		jint getFootersCount();
		jint getHeadersCount();
		jobject getItem(jint arg0);
		jlong getItemId(jint arg0);
		jint getItemViewType(jint arg0);
		QAndroidJniObject getView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2);
		jint getViewTypeCount();
		QAndroidJniObject getWrappedAdapter();
		jboolean hasStableIds();
		jboolean isEmpty();
		jboolean isEnabled(jint arg0);
		void registerDataSetObserver(__jni_impl::android::database::DataSetObserver arg0);
		jboolean removeFooter(__jni_impl::android::view::View arg0);
		jboolean removeHeader(__jni_impl::android::view::View arg0);
		void unregisterDataSetObserver(__jni_impl::android::database::DataSetObserver arg0);
	};
} // namespace __jni_impl::android::widget

#include "../database/DataSetObserver.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Filter.hpp"
#include "../../java/util/ArrayList.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void HeaderViewListAdapter::__constructor(__jni_impl::java::util::ArrayList arg0, __jni_impl::java::util::ArrayList arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.HeaderViewListAdapter",
			"(Ljava/util/ArrayList;Ljava/util/ArrayList;Landroid/widget/ListAdapter;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jboolean HeaderViewListAdapter::areAllItemsEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"areAllItemsEnabled",
			"()Z"
		);
	}
	jint HeaderViewListAdapter::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	QAndroidJniObject HeaderViewListAdapter::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	jint HeaderViewListAdapter::getFootersCount()
	{
		return __thiz.callMethod<jint>(
			"getFootersCount",
			"()I"
		);
	}
	jint HeaderViewListAdapter::getHeadersCount()
	{
		return __thiz.callMethod<jint>(
			"getHeadersCount",
			"()I"
		);
	}
	jobject HeaderViewListAdapter::getItem(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jlong HeaderViewListAdapter::getItemId(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	jint HeaderViewListAdapter::getItemViewType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getItemViewType",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject HeaderViewListAdapter::getView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint HeaderViewListAdapter::getViewTypeCount()
	{
		return __thiz.callMethod<jint>(
			"getViewTypeCount",
			"()I"
		);
	}
	QAndroidJniObject HeaderViewListAdapter::getWrappedAdapter()
	{
		return __thiz.callObjectMethod(
			"getWrappedAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	jboolean HeaderViewListAdapter::hasStableIds()
	{
		return __thiz.callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	jboolean HeaderViewListAdapter::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean HeaderViewListAdapter::isEnabled(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"(I)Z",
			arg0
		);
	}
	void HeaderViewListAdapter::registerDataSetObserver(__jni_impl::android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean HeaderViewListAdapter::removeFooter(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeFooter",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean HeaderViewListAdapter::removeHeader(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeHeader",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	void HeaderViewListAdapter::unregisterDataSetObserver(__jni_impl::android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class HeaderViewListAdapter : public __jni_impl::android::widget::HeaderViewListAdapter
	{
	public:
		HeaderViewListAdapter(QAndroidJniObject obj) { __thiz = obj; }
		HeaderViewListAdapter(__jni_impl::java::util::ArrayList arg0, __jni_impl::java::util::ArrayList arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::widget


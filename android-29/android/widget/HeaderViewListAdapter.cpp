#include "../database/DataSetObserver.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Filter.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./HeaderViewListAdapter.hpp"

namespace android::widget
{
	// Fields
	
	HeaderViewListAdapter::HeaderViewListAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	HeaderViewListAdapter::HeaderViewListAdapter(java::util::ArrayList arg0, java::util::ArrayList arg1, __JniBaseClass arg2)
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
	QAndroidJniObject HeaderViewListAdapter::getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2)
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
	void HeaderViewListAdapter::registerDataSetObserver(android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean HeaderViewListAdapter::removeFooter(android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeFooter",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean HeaderViewListAdapter::removeHeader(android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeHeader",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	void HeaderViewListAdapter::unregisterDataSetObserver(android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget


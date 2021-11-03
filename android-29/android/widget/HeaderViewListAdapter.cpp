#include "../database/DataSetObserver.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Filter.hpp"
#include "../../JObject.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./HeaderViewListAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	HeaderViewListAdapter::HeaderViewListAdapter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	HeaderViewListAdapter::HeaderViewListAdapter(java::util::ArrayList arg0, java::util::ArrayList arg1, JObject arg2)
		: JObject(
			"android.widget.HeaderViewListAdapter",
			"(Ljava/util/ArrayList;Ljava/util/ArrayList;Landroid/widget/ListAdapter;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jboolean HeaderViewListAdapter::areAllItemsEnabled() const
	{
		return callMethod<jboolean>(
			"areAllItemsEnabled",
			"()Z"
		);
	}
	jint HeaderViewListAdapter::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	android::widget::Filter HeaderViewListAdapter::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	jint HeaderViewListAdapter::getFootersCount() const
	{
		return callMethod<jint>(
			"getFootersCount",
			"()I"
		);
	}
	jint HeaderViewListAdapter::getHeadersCount() const
	{
		return callMethod<jint>(
			"getHeadersCount",
			"()I"
		);
	}
	JObject HeaderViewListAdapter::getItem(jint arg0) const
	{
		return callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jlong HeaderViewListAdapter::getItemId(jint arg0) const
	{
		return callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	jint HeaderViewListAdapter::getItemViewType(jint arg0) const
	{
		return callMethod<jint>(
			"getItemViewType",
			"(I)I",
			arg0
		);
	}
	android::view::View HeaderViewListAdapter::getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jint HeaderViewListAdapter::getViewTypeCount() const
	{
		return callMethod<jint>(
			"getViewTypeCount",
			"()I"
		);
	}
	JObject HeaderViewListAdapter::getWrappedAdapter() const
	{
		return callObjectMethod(
			"getWrappedAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	jboolean HeaderViewListAdapter::hasStableIds() const
	{
		return callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	jboolean HeaderViewListAdapter::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean HeaderViewListAdapter::isEnabled(jint arg0) const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"(I)Z",
			arg0
		);
	}
	void HeaderViewListAdapter::registerDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	jboolean HeaderViewListAdapter::removeFooter(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"removeFooter",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	jboolean HeaderViewListAdapter::removeHeader(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"removeHeader",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	void HeaderViewListAdapter::unregisterDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::widget


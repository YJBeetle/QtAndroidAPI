#include "../database/DataSetObserver.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./BaseAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	BaseAdapter::BaseAdapter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	BaseAdapter::BaseAdapter()
		: JObject(
			"android.widget.BaseAdapter",
			"()V"
		) {}
	
	// Methods
	jboolean BaseAdapter::areAllItemsEnabled()
	{
		return callMethod<jboolean>(
			"areAllItemsEnabled",
			"()Z"
		);
	}
	jarray BaseAdapter::getAutofillOptions()
	{
		return callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	android::view::View BaseAdapter::getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2)
	{
		return callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jint BaseAdapter::getItemViewType(jint arg0)
	{
		return callMethod<jint>(
			"getItemViewType",
			"(I)I",
			arg0
		);
	}
	jint BaseAdapter::getViewTypeCount()
	{
		return callMethod<jint>(
			"getViewTypeCount",
			"()I"
		);
	}
	jboolean BaseAdapter::hasStableIds()
	{
		return callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	jboolean BaseAdapter::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean BaseAdapter::isEnabled(jint arg0)
	{
		return callMethod<jboolean>(
			"isEnabled",
			"(I)Z",
			arg0
		);
	}
	void BaseAdapter::notifyDataSetChanged()
	{
		callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	void BaseAdapter::notifyDataSetInvalidated()
	{
		callMethod<void>(
			"notifyDataSetInvalidated",
			"()V"
		);
	}
	void BaseAdapter::registerDataSetObserver(android::database::DataSetObserver arg0)
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	void BaseAdapter::setAutofillOptions(jarray arg0)
	{
		callMethod<void>(
			"setAutofillOptions",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void BaseAdapter::unregisterDataSetObserver(android::database::DataSetObserver arg0)
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::widget


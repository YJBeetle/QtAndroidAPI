#include "../view/View.hpp"
#include "./ListView.hpp"
#include "../../JObject.hpp"
#include "./ListView_FixedViewInfo.hpp"

namespace android::widget
{
	// Fields
	JObject ListView_FixedViewInfo::data()
	{
		return getObjectField(
			"data",
			"Ljava/lang/Object;"
		);
	}
	jboolean ListView_FixedViewInfo::isSelectable()
	{
		return getField<jboolean>(
			"isSelectable"
		);
	}
	android::view::View ListView_FixedViewInfo::view()
	{
		return getObjectField(
			"view",
			"Landroid/view/View;"
		);
	}
	
	// QJniObject forward
	ListView_FixedViewInfo::ListView_FixedViewInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ListView_FixedViewInfo::ListView_FixedViewInfo(android::widget::ListView arg0)
		: JObject(
			"android.widget.ListView$FixedViewInfo",
			"(Landroid/widget/ListView;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::widget


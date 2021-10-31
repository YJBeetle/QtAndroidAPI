#include "../view/View.hpp"
#include "./ListView.hpp"
#include "./ListView_FixedViewInfo.hpp"

namespace android::widget
{
	// Fields
	jobject ListView_FixedViewInfo::data()
	{
		return getObjectField(
			"data",
			"Ljava/lang/Object;"
		).object<jobject>();
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
	
	// QAndroidJniObject forward
	ListView_FixedViewInfo::ListView_FixedViewInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ListView_FixedViewInfo::ListView_FixedViewInfo(android::widget::ListView arg0)
		: __JniBaseClass(
			"android.widget.ListView$FixedViewInfo",
			"(Landroid/widget/ListView;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::widget


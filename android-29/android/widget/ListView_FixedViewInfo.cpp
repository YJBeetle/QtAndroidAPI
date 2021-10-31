#include "../view/View.hpp"
#include "./ListView.hpp"
#include "./ListView_FixedViewInfo.hpp"

namespace android::widget
{
	// Fields
	jobject ListView_FixedViewInfo::data()
	{
		return __thiz.getObjectField(
			"data",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ListView_FixedViewInfo::isSelectable()
	{
		return __thiz.getField<jboolean>(
			"isSelectable"
		);
	}
	QAndroidJniObject ListView_FixedViewInfo::view()
	{
		return __thiz.getObjectField(
			"view",
			"Landroid/view/View;"
		);
	}
	
	ListView_FixedViewInfo::ListView_FixedViewInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ListView_FixedViewInfo::ListView_FixedViewInfo(android::widget::ListView arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListView$FixedViewInfo",
			"(Landroid/widget/ListView;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::widget


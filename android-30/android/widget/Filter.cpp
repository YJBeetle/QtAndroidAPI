#include "./Filter_FilterResults.hpp"
#include "./Filter.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	Filter::Filter(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Filter::Filter()
		: __JniBaseClass(
			"android.widget.Filter",
			"()V"
		) {}
	
	// Methods
	jstring Filter::convertResultToString(jobject arg0)
	{
		return callObjectMethod(
			"convertResultToString",
			"(Ljava/lang/Object;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	void Filter::filter(jstring arg0)
	{
		callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Filter::filter(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;Landroid/widget/Filter$FilterListener;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::widget


#include "./Filter_FilterResults.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./Filter.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	Filter::Filter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Filter::Filter()
		: JObject(
			"android.widget.Filter",
			"()V"
		) {}
	
	// Methods
	JString Filter::convertResultToString(JObject arg0) const
	{
		return callObjectMethod(
			"convertResultToString",
			"(Ljava/lang/Object;)Ljava/lang/CharSequence;",
			arg0.object<jobject>()
		);
	}
	void Filter::filter(JString arg0) const
	{
		callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Filter::filter(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;Landroid/widget/Filter$FilterListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::widget


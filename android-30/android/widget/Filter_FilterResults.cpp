#include "../../JObject.hpp"
#include "./Filter_FilterResults.hpp"

namespace android::widget
{
	// Fields
	jint Filter_FilterResults::count()
	{
		return getField<jint>(
			"count"
		);
	}
	JObject Filter_FilterResults::values()
	{
		return getObjectField(
			"values",
			"Ljava/lang/Object;"
		);
	}
	
	// QAndroidJniObject forward
	Filter_FilterResults::Filter_FilterResults(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Filter_FilterResults::Filter_FilterResults()
		: JObject(
			"android.widget.Filter$FilterResults",
			"()V"
		) {}
	
	// Methods
} // namespace android::widget


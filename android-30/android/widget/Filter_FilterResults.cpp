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
	jobject Filter_FilterResults::values()
	{
		return getObjectField(
			"values",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// QJniObject forward
	Filter_FilterResults::Filter_FilterResults(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Filter_FilterResults::Filter_FilterResults()
		: __JniBaseClass(
			"android.widget.Filter$FilterResults",
			"()V"
		) {}
	
	// Methods
} // namespace android::widget


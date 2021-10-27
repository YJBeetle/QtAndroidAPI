#include "./Filter_FilterResults.hpp"

namespace android::widget
{
	// Fields
	jint Filter_FilterResults::count()
	{
		return __thiz.getField<jint>(
			"count"
		);
	}
	jobject Filter_FilterResults::values()
	{
		return __thiz.getObjectField(
			"values",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	Filter_FilterResults::Filter_FilterResults(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Filter_FilterResults::Filter_FilterResults()
	{
		__thiz = QAndroidJniObject(
			"android.widget.Filter$FilterResults",
			"()V"
		);
	}
	
	// Methods
} // namespace android::widget


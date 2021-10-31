#include "./Filter_FilterResults.hpp"
#include "./Filter.hpp"

namespace android::widget
{
	// Fields
	
	Filter::Filter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Filter::Filter()
	{
		__thiz = QAndroidJniObject(
			"android.widget.Filter",
			"()V"
		);
	}
	
	// Methods
	jstring Filter::convertResultToString(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"convertResultToString",
			"(Ljava/lang/Object;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	void Filter::filter(jstring arg0)
	{
		__thiz.callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Filter::filter(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;Landroid/widget/Filter$FilterListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::widget


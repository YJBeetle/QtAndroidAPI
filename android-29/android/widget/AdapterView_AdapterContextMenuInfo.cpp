#include "../view/View.hpp"
#include "./AdapterView_AdapterContextMenuInfo.hpp"

namespace android::widget
{
	// Fields
	jlong AdapterView_AdapterContextMenuInfo::id()
	{
		return __thiz.getField<jlong>(
			"id"
		);
	}
	jint AdapterView_AdapterContextMenuInfo::position()
	{
		return __thiz.getField<jint>(
			"position"
		);
	}
	QAndroidJniObject AdapterView_AdapterContextMenuInfo::targetView()
	{
		return __thiz.getObjectField(
			"targetView",
			"Landroid/view/View;"
		);
	}
	
	AdapterView_AdapterContextMenuInfo::AdapterView_AdapterContextMenuInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AdapterView_AdapterContextMenuInfo::AdapterView_AdapterContextMenuInfo(android::view::View &arg0, jint &arg1, jlong &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterView$AdapterContextMenuInfo",
			"(Landroid/view/View;IJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::widget


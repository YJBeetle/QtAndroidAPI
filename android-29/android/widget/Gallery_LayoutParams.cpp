#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./Gallery_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	
	Gallery_LayoutParams::Gallery_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Gallery_LayoutParams::Gallery_LayoutParams(android::view::ViewGroup_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Gallery$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	Gallery_LayoutParams::Gallery_LayoutParams(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Gallery$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Gallery_LayoutParams::Gallery_LayoutParams(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Gallery$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::widget


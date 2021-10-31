#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./TableLayout_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	
	TableLayout_LayoutParams::TableLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TableLayout_LayoutParams::TableLayout_LayoutParams()
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"()V"
		);
	}
	TableLayout_LayoutParams::TableLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	TableLayout_LayoutParams::TableLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	TableLayout_LayoutParams::TableLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	TableLayout_LayoutParams::TableLayout_LayoutParams(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	TableLayout_LayoutParams::TableLayout_LayoutParams(jint arg0, jint arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::widget


#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./TableRow_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	jint TableRow_LayoutParams::column()
	{
		return __thiz.getField<jint>(
			"column"
		);
	}
	jint TableRow_LayoutParams::span()
	{
		return __thiz.getField<jint>(
			"span"
		);
	}
	
	TableRow_LayoutParams::TableRow_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TableRow_LayoutParams::TableRow_LayoutParams()
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"()V"
		);
	}
	TableRow_LayoutParams::TableRow_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	TableRow_LayoutParams::TableRow_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	TableRow_LayoutParams::TableRow_LayoutParams(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"(I)V",
			arg0
		);
	}
	TableRow_LayoutParams::TableRow_LayoutParams(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	TableRow_LayoutParams::TableRow_LayoutParams(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	TableRow_LayoutParams::TableRow_LayoutParams(jint arg0, jint arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::widget


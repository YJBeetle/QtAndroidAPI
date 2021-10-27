#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./GridLayout_Alignment.hpp"
#include "./GridLayout_LayoutParams.hpp"
#include "./GridLayout_Spec.hpp"
#include "./GridLayout.hpp"

namespace android::widget
{
	// Fields
	jint GridLayout::ALIGN_BOUNDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.GridLayout",
			"ALIGN_BOUNDS"
		);
	}
	jint GridLayout::ALIGN_MARGINS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.GridLayout",
			"ALIGN_MARGINS"
		);
	}
	QAndroidJniObject GridLayout::BASELINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.GridLayout",
			"BASELINE",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	QAndroidJniObject GridLayout::BOTTOM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.GridLayout",
			"BOTTOM",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	QAndroidJniObject GridLayout::CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.GridLayout",
			"CENTER",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	QAndroidJniObject GridLayout::END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.GridLayout",
			"END",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	QAndroidJniObject GridLayout::FILL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.GridLayout",
			"FILL",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	jint GridLayout::HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.GridLayout",
			"HORIZONTAL"
		);
	}
	QAndroidJniObject GridLayout::LEFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.GridLayout",
			"LEFT",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	QAndroidJniObject GridLayout::RIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.GridLayout",
			"RIGHT",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	QAndroidJniObject GridLayout::START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.GridLayout",
			"START",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	QAndroidJniObject GridLayout::TOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.GridLayout",
			"TOP",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	jint GridLayout::UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.GridLayout",
			"UNDEFINED"
		);
	}
	jint GridLayout::VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.GridLayout",
			"VERTICAL"
		);
	}
	
	GridLayout::GridLayout(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GridLayout::GridLayout(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	GridLayout::GridLayout(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	GridLayout::GridLayout(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	GridLayout::GridLayout(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject GridLayout::spec(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(I)Landroid/widget/GridLayout$Spec;",
			arg0
		);
	}
	QAndroidJniObject GridLayout::spec(jint arg0, android::widget::GridLayout_Alignment arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(ILandroid/widget/GridLayout$Alignment;)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject GridLayout::spec(jint arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IF)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject GridLayout::spec(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(II)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject GridLayout::spec(jint arg0, android::widget::GridLayout_Alignment arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(ILandroid/widget/GridLayout$Alignment;F)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject GridLayout::spec(jint arg0, jint arg1, android::widget::GridLayout_Alignment arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IILandroid/widget/GridLayout$Alignment;)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject GridLayout::spec(jint arg0, jint arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IIF)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject GridLayout::spec(jint arg0, jint arg1, android::widget::GridLayout_Alignment arg2, jfloat arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IILandroid/widget/GridLayout$Alignment;F)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject GridLayout::generateLayoutParams(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/GridLayout$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring GridLayout::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint GridLayout::getAlignmentMode()
	{
		return __thiz.callMethod<jint>(
			"getAlignmentMode",
			"()I"
		);
	}
	jint GridLayout::getColumnCount()
	{
		return __thiz.callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	jint GridLayout::getOrientation()
	{
		return __thiz.callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	jint GridLayout::getRowCount()
	{
		return __thiz.callMethod<jint>(
			"getRowCount",
			"()I"
		);
	}
	jboolean GridLayout::getUseDefaultMargins()
	{
		return __thiz.callMethod<jboolean>(
			"getUseDefaultMargins",
			"()Z"
		);
	}
	jboolean GridLayout::isColumnOrderPreserved()
	{
		return __thiz.callMethod<jboolean>(
			"isColumnOrderPreserved",
			"()Z"
		);
	}
	jboolean GridLayout::isRowOrderPreserved()
	{
		return __thiz.callMethod<jboolean>(
			"isRowOrderPreserved",
			"()Z"
		);
	}
	void GridLayout::onViewAdded(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onViewAdded",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void GridLayout::onViewRemoved(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onViewRemoved",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void GridLayout::requestLayout()
	{
		__thiz.callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void GridLayout::setAlignmentMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlignmentMode",
			"(I)V",
			arg0
		);
	}
	void GridLayout::setColumnCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColumnCount",
			"(I)V",
			arg0
		);
	}
	void GridLayout::setColumnOrderPreserved(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setColumnOrderPreserved",
			"(Z)V",
			arg0
		);
	}
	void GridLayout::setOrientation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrientation",
			"(I)V",
			arg0
		);
	}
	void GridLayout::setRowCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRowCount",
			"(I)V",
			arg0
		);
	}
	void GridLayout::setRowOrderPreserved(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRowOrderPreserved",
			"(Z)V",
			arg0
		);
	}
	void GridLayout::setUseDefaultMargins(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseDefaultMargins",
			"(Z)V",
			arg0
		);
	}
} // namespace android::widget


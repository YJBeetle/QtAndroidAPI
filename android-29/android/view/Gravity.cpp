#include "../graphics/Rect.hpp"
#include "./Gravity.hpp"

namespace android::view
{
	// Fields
	jint Gravity::AXIS_CLIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_CLIP"
		);
	}
	jint Gravity::AXIS_PULL_AFTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_PULL_AFTER"
		);
	}
	jint Gravity::AXIS_PULL_BEFORE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_PULL_BEFORE"
		);
	}
	jint Gravity::AXIS_SPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_SPECIFIED"
		);
	}
	jint Gravity::AXIS_X_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_X_SHIFT"
		);
	}
	jint Gravity::AXIS_Y_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_Y_SHIFT"
		);
	}
	jint Gravity::BOTTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"BOTTOM"
		);
	}
	jint Gravity::CENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"CENTER"
		);
	}
	jint Gravity::CENTER_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"CENTER_HORIZONTAL"
		);
	}
	jint Gravity::CENTER_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"CENTER_VERTICAL"
		);
	}
	jint Gravity::CLIP_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"CLIP_HORIZONTAL"
		);
	}
	jint Gravity::CLIP_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"CLIP_VERTICAL"
		);
	}
	jint Gravity::DISPLAY_CLIP_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"DISPLAY_CLIP_HORIZONTAL"
		);
	}
	jint Gravity::DISPLAY_CLIP_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"DISPLAY_CLIP_VERTICAL"
		);
	}
	jint Gravity::END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"END"
		);
	}
	jint Gravity::FILL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"FILL"
		);
	}
	jint Gravity::FILL_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"FILL_HORIZONTAL"
		);
	}
	jint Gravity::FILL_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"FILL_VERTICAL"
		);
	}
	jint Gravity::HORIZONTAL_GRAVITY_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"HORIZONTAL_GRAVITY_MASK"
		);
	}
	jint Gravity::LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"LEFT"
		);
	}
	jint Gravity::NO_GRAVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"NO_GRAVITY"
		);
	}
	jint Gravity::RELATIVE_HORIZONTAL_GRAVITY_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"RELATIVE_HORIZONTAL_GRAVITY_MASK"
		);
	}
	jint Gravity::RELATIVE_LAYOUT_DIRECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"RELATIVE_LAYOUT_DIRECTION"
		);
	}
	jint Gravity::RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"RIGHT"
		);
	}
	jint Gravity::START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"START"
		);
	}
	jint Gravity::TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"TOP"
		);
	}
	jint Gravity::VERTICAL_GRAVITY_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Gravity",
			"VERTICAL_GRAVITY_MASK"
		);
	}
	
	Gravity::Gravity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Gravity::Gravity()
	{
		__thiz = QAndroidJniObject(
			"android.view.Gravity",
			"()V"
		);
	}
	
	// Methods
	void Gravity::apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, android::graphics::Rect arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.Gravity",
			"apply",
			"(IIILandroid/graphics/Rect;Landroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void Gravity::apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, android::graphics::Rect arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.Gravity",
			"apply",
			"(IIILandroid/graphics/Rect;Landroid/graphics/Rect;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5
		);
	}
	void Gravity::apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, jint arg4, jint arg5, android::graphics::Rect arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.Gravity",
			"apply",
			"(IIILandroid/graphics/Rect;IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void Gravity::apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, jint arg4, jint arg5, android::graphics::Rect arg6, jint arg7)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.Gravity",
			"apply",
			"(IIILandroid/graphics/Rect;IILandroid/graphics/Rect;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7
		);
	}
	void Gravity::applyDisplay(jint arg0, android::graphics::Rect arg1, android::graphics::Rect arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.Gravity",
			"applyDisplay",
			"(ILandroid/graphics/Rect;Landroid/graphics/Rect;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Gravity::applyDisplay(jint arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.Gravity",
			"applyDisplay",
			"(ILandroid/graphics/Rect;Landroid/graphics/Rect;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jint Gravity::getAbsoluteGravity(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.Gravity",
			"getAbsoluteGravity",
			"(II)I",
			arg0,
			arg1
		);
	}
	jboolean Gravity::isHorizontal(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.Gravity",
			"isHorizontal",
			"(I)Z",
			arg0
		);
	}
	jboolean Gravity::isVertical(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.Gravity",
			"isVertical",
			"(I)Z",
			arg0
		);
	}
} // namespace android::view


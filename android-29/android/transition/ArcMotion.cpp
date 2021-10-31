#include "../content/Context.hpp"
#include "../graphics/Path.hpp"
#include "./ArcMotion.hpp"

namespace android::transition
{
	// Fields
	
	ArcMotion::ArcMotion(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ArcMotion::ArcMotion()
	{
		__thiz = QAndroidJniObject(
			"android.transition.ArcMotion",
			"()V"
		);
	}
	ArcMotion::ArcMotion(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.ArcMotion",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jfloat ArcMotion::getMaximumAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getMaximumAngle",
			"()F"
		);
	}
	jfloat ArcMotion::getMinimumHorizontalAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getMinimumHorizontalAngle",
			"()F"
		);
	}
	jfloat ArcMotion::getMinimumVerticalAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getMinimumVerticalAngle",
			"()F"
		);
	}
	QAndroidJniObject ArcMotion::getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callObjectMethod(
			"getPath",
			"(FFFF)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ArcMotion::setMaximumAngle(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumAngle",
			"(F)V",
			arg0
		);
	}
	void ArcMotion::setMinimumHorizontalAngle(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumHorizontalAngle",
			"(F)V",
			arg0
		);
	}
	void ArcMotion::setMinimumVerticalAngle(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumVerticalAngle",
			"(F)V",
			arg0
		);
	}
} // namespace android::transition


#include "../content/Context.hpp"
#include "../graphics/Path.hpp"
#include "./ArcMotion.hpp"

namespace android::transition
{
	// Fields
	
	// QAndroidJniObject forward
	ArcMotion::ArcMotion(QAndroidJniObject obj) : android::transition::PathMotion(obj) {}
	
	// Constructors
	ArcMotion::ArcMotion()
		: android::transition::PathMotion(
			"android.transition.ArcMotion",
			"()V"
		) {}
	ArcMotion::ArcMotion(android::content::Context arg0, __JniBaseClass arg1)
		: android::transition::PathMotion(
			"android.transition.ArcMotion",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jfloat ArcMotion::getMaximumAngle()
	{
		return callMethod<jfloat>(
			"getMaximumAngle",
			"()F"
		);
	}
	jfloat ArcMotion::getMinimumHorizontalAngle()
	{
		return callMethod<jfloat>(
			"getMinimumHorizontalAngle",
			"()F"
		);
	}
	jfloat ArcMotion::getMinimumVerticalAngle()
	{
		return callMethod<jfloat>(
			"getMinimumVerticalAngle",
			"()F"
		);
	}
	QAndroidJniObject ArcMotion::getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return callObjectMethod(
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
		callMethod<void>(
			"setMaximumAngle",
			"(F)V",
			arg0
		);
	}
	void ArcMotion::setMinimumHorizontalAngle(jfloat arg0)
	{
		callMethod<void>(
			"setMinimumHorizontalAngle",
			"(F)V",
			arg0
		);
	}
	void ArcMotion::setMinimumVerticalAngle(jfloat arg0)
	{
		callMethod<void>(
			"setMinimumVerticalAngle",
			"(F)V",
			arg0
		);
	}
} // namespace android::transition


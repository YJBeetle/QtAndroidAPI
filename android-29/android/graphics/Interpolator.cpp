#include "./Interpolator_Result.hpp"
#include "./Interpolator.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	Interpolator::Interpolator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Interpolator::Interpolator(jint arg0)
		: __JniBaseClass(
			"android.graphics.Interpolator",
			"(I)V",
			arg0
		) {}
	Interpolator::Interpolator(jint arg0, jint arg1)
		: __JniBaseClass(
			"android.graphics.Interpolator",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint Interpolator::getKeyFrameCount()
	{
		return callMethod<jint>(
			"getKeyFrameCount",
			"()I"
		);
	}
	jint Interpolator::getValueCount()
	{
		return callMethod<jint>(
			"getValueCount",
			"()I"
		);
	}
	void Interpolator::reset(jint arg0)
	{
		callMethod<void>(
			"reset",
			"(I)V",
			arg0
		);
	}
	void Interpolator::reset(jint arg0, jint arg1)
	{
		callMethod<void>(
			"reset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Interpolator::setKeyFrame(jint arg0, jint arg1, jfloatArray arg2)
	{
		callMethod<void>(
			"setKeyFrame",
			"(II[F)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Interpolator::setKeyFrame(jint arg0, jint arg1, jfloatArray arg2, jfloatArray arg3)
	{
		callMethod<void>(
			"setKeyFrame",
			"(II[F[F)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Interpolator::setRepeatMirror(jfloat arg0, jboolean arg1)
	{
		callMethod<void>(
			"setRepeatMirror",
			"(FZ)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Interpolator::timeToValues(jfloatArray arg0)
	{
		return callObjectMethod(
			"timeToValues",
			"([F)Landroid/graphics/Interpolator$Result;",
			arg0
		);
	}
	QAndroidJniObject Interpolator::timeToValues(jint arg0, jfloatArray arg1)
	{
		return callObjectMethod(
			"timeToValues",
			"(I[F)Landroid/graphics/Interpolator$Result;",
			arg0,
			arg1
		);
	}
} // namespace android::graphics


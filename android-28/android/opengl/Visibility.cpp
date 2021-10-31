#include "./Visibility.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	Visibility::Visibility(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Visibility::Visibility()
		: __JniBaseClass(
			"android.opengl.Visibility",
			"()V"
		) {}
	
	// Methods
	void Visibility::computeBoundingSphere(jfloatArray arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.Visibility",
			"computeBoundingSphere",
			"([FII[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint Visibility::frustumCullSpheres(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4, jintArray arg5, jint arg6, jint arg7)
	{
		return callStaticMethod<jint>(
			"android.opengl.Visibility",
			"frustumCullSpheres",
			"([FI[FII[III)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	jint Visibility::visibilityTest(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jcharArray arg4, jint arg5, jint arg6)
	{
		return callStaticMethod<jint>(
			"android.opengl.Visibility",
			"visibilityTest",
			"([FI[FI[CII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
} // namespace android::opengl


#include "../../JCharArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "./Visibility.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	Visibility::Visibility()
		: JObject(
			"android.opengl.Visibility",
			"()V"
		) {}
	
	// Methods
	void Visibility::computeBoundingSphere(JFloatArray arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.Visibility",
			"computeBoundingSphere",
			"([FII[FI)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	jint Visibility::frustumCullSpheres(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4, JIntArray arg5, jint arg6, jint arg7)
	{
		return callStaticMethod<jint>(
			"android.opengl.Visibility",
			"frustumCullSpheres",
			"([FI[FII[III)I",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4,
			arg5.object<jintArray>(),
			arg6,
			arg7
		);
	}
	jint Visibility::visibilityTest(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, JCharArray arg4, jint arg5, jint arg6)
	{
		return callStaticMethod<jint>(
			"android.opengl.Visibility",
			"visibilityTest",
			"([FI[FI[CII)I",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4.object<jcharArray>(),
			arg5,
			arg6
		);
	}
} // namespace android::opengl


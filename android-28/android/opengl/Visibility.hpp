#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JFloatArray;
class JIntArray;

namespace android::opengl
{
	class Visibility : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Visibility(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Visibility(QAndroidJniObject obj);
		
		// Constructors
		Visibility();
		
		// Methods
		static void computeBoundingSphere(JFloatArray arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4);
		static jint frustumCullSpheres(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4, JIntArray arg5, jint arg6, jint arg7);
		static jint visibilityTest(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, JCharArray arg4, jint arg5, jint arg6);
	};
} // namespace android::opengl


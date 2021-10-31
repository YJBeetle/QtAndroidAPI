#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::opengl
{
	class Matrix : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Matrix(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Matrix(QAndroidJniObject obj);
		
		// Constructors
		Matrix();
		
		// Methods
		static void frustumM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		static jboolean invertM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3);
		static jfloat length(jfloat arg0, jfloat arg1, jfloat arg2);
		static void multiplyMM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5);
		static void multiplyMV(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5);
		static void orthoM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		static void perspectiveM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void rotateM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void rotateM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		static void scaleM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void scaleM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6);
		static void setIdentityM(jfloatArray arg0, jint arg1);
		static void setLookAtM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10);
		static void setRotateEulerM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void setRotateM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void translateM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void translateM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6);
		static void transposeM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3);
	};
} // namespace android::opengl


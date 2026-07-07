#pragma once

#include "../../JObject.hpp"

class JFloatArray;

namespace android::opengl
{
	class Matrix : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Matrix(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Matrix(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Matrix();
		
		// Methods
		static void frustumM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		static jboolean invertM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3);
		static jfloat length(jfloat arg0, jfloat arg1, jfloat arg2);
		static void multiplyMM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, JFloatArray arg4, jint arg5);
		static void multiplyMV(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, JFloatArray arg4, jint arg5);
		static void orthoM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		static void perspectiveM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void rotateM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void rotateM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		static void scaleM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void scaleM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6);
		static void setIdentityM(JFloatArray arg0, jint arg1);
		static void setLookAtM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10);
		static void setRotateEulerM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void setRotateEulerM2(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void setRotateM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void translateM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void translateM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6);
		static void transposeM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3);
	};
} // namespace android::opengl


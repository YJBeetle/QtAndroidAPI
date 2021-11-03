#pragma once

#include "../../JObject.hpp"

class JFloatArray;

namespace android::renderscript
{
	class Matrix4f : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Matrix4f(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Matrix4f(QAndroidJniObject obj);
		
		// Constructors
		Matrix4f();
		Matrix4f(JFloatArray arg0);
		
		// Methods
		jfloat get(jint arg0, jint arg1);
		JFloatArray getArray();
		jboolean inverse();
		jboolean inverseTranspose();
		void load(android::renderscript::Matrix4f arg0);
		void loadFrustum(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		void loadIdentity();
		void loadMultiply(android::renderscript::Matrix4f arg0, android::renderscript::Matrix4f arg1);
		void loadOrtho(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		void loadOrthoWindow(jint arg0, jint arg1);
		void loadPerspective(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void loadProjectionNormalized(jint arg0, jint arg1);
		void loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void loadScale(jfloat arg0, jfloat arg1, jfloat arg2);
		void loadTranslate(jfloat arg0, jfloat arg1, jfloat arg2);
		void multiply(android::renderscript::Matrix4f arg0);
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void scale(jfloat arg0, jfloat arg1, jfloat arg2);
		void set(jint arg0, jint arg1, jfloat arg2);
		void translate(jfloat arg0, jfloat arg1, jfloat arg2);
		void transpose();
	};
} // namespace android::renderscript


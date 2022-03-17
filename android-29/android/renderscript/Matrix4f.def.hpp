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
		Matrix4f(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Matrix4f();
		Matrix4f(JFloatArray arg0);
		
		// Methods
		jfloat get(jint arg0, jint arg1) const;
		JFloatArray getArray() const;
		jboolean inverse() const;
		jboolean inverseTranspose() const;
		void load(android::renderscript::Matrix4f arg0) const;
		void loadFrustum(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5) const;
		void loadIdentity() const;
		void loadMultiply(android::renderscript::Matrix4f arg0, android::renderscript::Matrix4f arg1) const;
		void loadOrtho(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5) const;
		void loadOrthoWindow(jint arg0, jint arg1) const;
		void loadPerspective(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void loadProjectionNormalized(jint arg0, jint arg1) const;
		void loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void loadScale(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void loadTranslate(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void multiply(android::renderscript::Matrix4f arg0) const;
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void scale(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void set(jint arg0, jint arg1, jfloat arg2) const;
		void translate(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void transpose() const;
	};
} // namespace android::renderscript


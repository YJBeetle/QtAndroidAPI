#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Matrix3f : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Matrix3f(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Matrix3f(QAndroidJniObject obj);
		
		// Constructors
		Matrix3f();
		Matrix3f(jfloatArray arg0);
		
		// Methods
		jfloat get(jint arg0, jint arg1);
		jfloatArray getArray();
		void load(android::renderscript::Matrix3f arg0);
		void loadIdentity();
		void loadMultiply(android::renderscript::Matrix3f arg0, android::renderscript::Matrix3f arg1);
		void loadRotate(jfloat arg0);
		void loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void loadScale(jfloat arg0, jfloat arg1);
		void loadScale(jfloat arg0, jfloat arg1, jfloat arg2);
		void loadTranslate(jfloat arg0, jfloat arg1);
		void multiply(android::renderscript::Matrix3f arg0);
		void rotate(jfloat arg0);
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void scale(jfloat arg0, jfloat arg1);
		void scale(jfloat arg0, jfloat arg1, jfloat arg2);
		void set(jint arg0, jint arg1, jfloat arg2);
		void translate(jfloat arg0, jfloat arg1);
		void transpose();
	};
} // namespace android::renderscript


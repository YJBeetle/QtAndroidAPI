#pragma once

#include "../../JObject.hpp"


namespace android::renderscript
{
	class Matrix2f : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Matrix2f(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Matrix2f(QAndroidJniObject obj);
		
		// Constructors
		Matrix2f();
		Matrix2f(jfloatArray arg0);
		
		// Methods
		jfloat get(jint arg0, jint arg1);
		jfloatArray getArray();
		void load(android::renderscript::Matrix2f arg0);
		void loadIdentity();
		void loadMultiply(android::renderscript::Matrix2f arg0, android::renderscript::Matrix2f arg1);
		void loadRotate(jfloat arg0);
		void loadScale(jfloat arg0, jfloat arg1);
		void multiply(android::renderscript::Matrix2f arg0);
		void rotate(jfloat arg0);
		void scale(jfloat arg0, jfloat arg1);
		void set(jint arg0, jint arg1, jfloat arg2);
		void transpose();
	};
} // namespace android::renderscript


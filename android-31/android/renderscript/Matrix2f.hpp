#pragma once

#include "../../JObject.hpp"

class JFloatArray;

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
		Matrix2f(JFloatArray arg0);
		
		// Methods
		jfloat get(jint arg0, jint arg1) const;
		JFloatArray getArray() const;
		void load(android::renderscript::Matrix2f arg0) const;
		void loadIdentity() const;
		void loadMultiply(android::renderscript::Matrix2f arg0, android::renderscript::Matrix2f arg1) const;
		void loadRotate(jfloat arg0) const;
		void loadScale(jfloat arg0, jfloat arg1) const;
		void multiply(android::renderscript::Matrix2f arg0) const;
		void rotate(jfloat arg0) const;
		void scale(jfloat arg0, jfloat arg1) const;
		void set(jint arg0, jint arg1, jfloat arg2) const;
		void transpose() const;
	};
} // namespace android::renderscript


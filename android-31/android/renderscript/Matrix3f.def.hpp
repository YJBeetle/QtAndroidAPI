#pragma once

#include "../../JObject.hpp"

class JFloatArray;

namespace android::renderscript
{
	class Matrix3f : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Matrix3f(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Matrix3f(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Matrix3f();
		Matrix3f(JFloatArray arg0);
		
		// Methods
		jfloat get(jint arg0, jint arg1) const;
		JFloatArray getArray() const;
		void load(android::renderscript::Matrix3f arg0) const;
		void loadIdentity() const;
		void loadMultiply(android::renderscript::Matrix3f arg0, android::renderscript::Matrix3f arg1) const;
		void loadRotate(jfloat arg0) const;
		void loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void loadScale(jfloat arg0, jfloat arg1) const;
		void loadScale(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void loadTranslate(jfloat arg0, jfloat arg1) const;
		void multiply(android::renderscript::Matrix3f arg0) const;
		void rotate(jfloat arg0) const;
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void scale(jfloat arg0, jfloat arg1) const;
		void scale(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void set(jint arg0, jint arg1, jfloat arg2) const;
		void translate(jfloat arg0, jfloat arg1) const;
		void transpose() const;
	};
} // namespace android::renderscript


#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::graphics
{
	class Matrix;
}
class JObject;
class JString;

namespace android::graphics
{
	class Matrix44 : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Matrix44(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Matrix44(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Matrix44();
		Matrix44(android::graphics::Matrix arg0);
		
		// Methods
		android::graphics::Matrix44 concat(android::graphics::Matrix44 arg0) const;
		jboolean equals(JObject arg0) const;
		jfloat get(jint arg0, jint arg1) const;
		void getValues(JFloatArray arg0) const;
		jint hashCode() const;
		jboolean invert() const;
		jboolean isIdentity() const;
		JFloatArray map(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void map(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, JFloatArray arg4) const;
		void reset() const;
		android::graphics::Matrix44 rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		android::graphics::Matrix44 scale(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void set(jint arg0, jint arg1, jfloat arg2) const;
		void setValues(JFloatArray arg0) const;
		JString toString() const;
		android::graphics::Matrix44 translate(jfloat arg0, jfloat arg1, jfloat arg2) const;
	};
} // namespace android::graphics


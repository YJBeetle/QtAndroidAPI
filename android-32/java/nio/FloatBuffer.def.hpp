#pragma once

#include "./Buffer.def.hpp"

class JFloatArray;
class JObject;
class JString;
namespace java::nio
{
	class Buffer;
}
namespace java::nio
{
	class ByteOrder;
}

namespace java::nio
{
	class FloatBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FloatBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		FloatBuffer(QAndroidJniObject obj) : java::nio::Buffer(obj) {}
		
		// Constructors
		
		// Methods
		static java::nio::FloatBuffer allocate(jint arg0);
		static java::nio::FloatBuffer wrap(JFloatArray arg0);
		static java::nio::FloatBuffer wrap(JFloatArray arg0, jint arg1, jint arg2);
		JFloatArray array() const;
		jint arrayOffset() const;
		java::nio::FloatBuffer asReadOnlyBuffer() const;
		java::nio::FloatBuffer clear() const;
		java::nio::FloatBuffer compact() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::nio::FloatBuffer arg0) const;
		java::nio::FloatBuffer duplicate() const;
		jboolean equals(JObject arg0) const;
		java::nio::FloatBuffer flip() const;
		jfloat get() const;
		jfloat get(jint arg0) const;
		java::nio::FloatBuffer get(JFloatArray arg0) const;
		java::nio::FloatBuffer get(jint arg0, JFloatArray arg1) const;
		java::nio::FloatBuffer get(JFloatArray arg0, jint arg1, jint arg2) const;
		java::nio::FloatBuffer get(jint arg0, JFloatArray arg1, jint arg2, jint arg3) const;
		jboolean hasArray() const;
		jint hashCode() const;
		jboolean isDirect() const;
		java::nio::FloatBuffer limit(jint arg0) const;
		java::nio::FloatBuffer mark() const;
		jint mismatch(java::nio::FloatBuffer arg0) const;
		java::nio::ByteOrder order() const;
		java::nio::FloatBuffer position(jint arg0) const;
		java::nio::FloatBuffer put(JFloatArray arg0) const;
		java::nio::FloatBuffer put(jfloat arg0) const;
		java::nio::FloatBuffer put(java::nio::FloatBuffer arg0) const;
		java::nio::FloatBuffer put(jint arg0, JFloatArray arg1) const;
		java::nio::FloatBuffer put(jint arg0, jfloat arg1) const;
		java::nio::FloatBuffer put(JFloatArray arg0, jint arg1, jint arg2) const;
		java::nio::FloatBuffer put(jint arg0, JFloatArray arg1, jint arg2, jint arg3) const;
		java::nio::FloatBuffer put(jint arg0, java::nio::FloatBuffer arg1, jint arg2, jint arg3) const;
		java::nio::FloatBuffer reset() const;
		java::nio::FloatBuffer rewind() const;
		java::nio::FloatBuffer slice() const;
		java::nio::FloatBuffer slice(jint arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace java::nio


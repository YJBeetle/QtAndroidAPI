#pragma once

#include "./Buffer.hpp"

class JIntArray;
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
	class IntBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		IntBuffer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::IntBuffer allocate(jint arg0);
		static java::nio::IntBuffer wrap(JIntArray arg0);
		static java::nio::IntBuffer wrap(JIntArray arg0, jint arg1, jint arg2);
		JIntArray array() const;
		jint arrayOffset() const;
		java::nio::IntBuffer asReadOnlyBuffer() const;
		java::nio::IntBuffer clear() const;
		java::nio::IntBuffer compact() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::nio::IntBuffer arg0) const;
		java::nio::IntBuffer duplicate() const;
		jboolean equals(JObject arg0) const;
		java::nio::IntBuffer flip() const;
		jint get() const;
		jint get(jint arg0) const;
		java::nio::IntBuffer get(JIntArray arg0) const;
		java::nio::IntBuffer get(jint arg0, JIntArray arg1) const;
		java::nio::IntBuffer get(JIntArray arg0, jint arg1, jint arg2) const;
		java::nio::IntBuffer get(jint arg0, JIntArray arg1, jint arg2, jint arg3) const;
		jboolean hasArray() const;
		jint hashCode() const;
		jboolean isDirect() const;
		java::nio::IntBuffer limit(jint arg0) const;
		java::nio::IntBuffer mark() const;
		jint mismatch(java::nio::IntBuffer arg0) const;
		java::nio::ByteOrder order() const;
		java::nio::IntBuffer position(jint arg0) const;
		java::nio::IntBuffer put(JIntArray arg0) const;
		java::nio::IntBuffer put(jint arg0) const;
		java::nio::IntBuffer put(java::nio::IntBuffer arg0) const;
		java::nio::IntBuffer put(jint arg0, JIntArray arg1) const;
		java::nio::IntBuffer put(jint arg0, jint arg1) const;
		java::nio::IntBuffer put(JIntArray arg0, jint arg1, jint arg2) const;
		java::nio::IntBuffer put(jint arg0, JIntArray arg1, jint arg2, jint arg3) const;
		java::nio::IntBuffer put(jint arg0, java::nio::IntBuffer arg1, jint arg2, jint arg3) const;
		java::nio::IntBuffer reset() const;
		java::nio::IntBuffer rewind() const;
		java::nio::IntBuffer slice() const;
		java::nio::IntBuffer slice(jint arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace java::nio


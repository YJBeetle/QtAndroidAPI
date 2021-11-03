#pragma once

#include "./Buffer.hpp"

class JLongArray;
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
	class LongBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LongBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		LongBuffer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::LongBuffer allocate(jint arg0);
		static java::nio::LongBuffer wrap(JLongArray arg0);
		static java::nio::LongBuffer wrap(JLongArray arg0, jint arg1, jint arg2);
		JLongArray array() const;
		jint arrayOffset() const;
		java::nio::LongBuffer asReadOnlyBuffer() const;
		java::nio::LongBuffer clear() const;
		java::nio::LongBuffer compact() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::nio::LongBuffer arg0) const;
		java::nio::LongBuffer duplicate() const;
		jboolean equals(JObject arg0) const;
		java::nio::LongBuffer flip() const;
		java::nio::LongBuffer get(JLongArray arg0) const;
		java::nio::LongBuffer get(jint arg0, JLongArray arg1) const;
		java::nio::LongBuffer get(JLongArray arg0, jint arg1, jint arg2) const;
		java::nio::LongBuffer get(jint arg0, JLongArray arg1, jint arg2, jint arg3) const;
		jlong get() const;
		jlong get(jint arg0) const;
		jboolean hasArray() const;
		jint hashCode() const;
		jboolean isDirect() const;
		java::nio::LongBuffer limit(jint arg0) const;
		java::nio::LongBuffer mark() const;
		jint mismatch(java::nio::LongBuffer arg0) const;
		java::nio::ByteOrder order() const;
		java::nio::LongBuffer position(jint arg0) const;
		java::nio::LongBuffer put(JLongArray arg0) const;
		java::nio::LongBuffer put(java::nio::LongBuffer arg0) const;
		java::nio::LongBuffer put(jlong arg0) const;
		java::nio::LongBuffer put(jint arg0, JLongArray arg1) const;
		java::nio::LongBuffer put(jint arg0, jlong arg1) const;
		java::nio::LongBuffer put(JLongArray arg0, jint arg1, jint arg2) const;
		java::nio::LongBuffer put(jint arg0, JLongArray arg1, jint arg2, jint arg3) const;
		java::nio::LongBuffer put(jint arg0, java::nio::LongBuffer arg1, jint arg2, jint arg3) const;
		java::nio::LongBuffer reset() const;
		java::nio::LongBuffer rewind() const;
		java::nio::LongBuffer slice() const;
		java::nio::LongBuffer slice(jint arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace java::nio


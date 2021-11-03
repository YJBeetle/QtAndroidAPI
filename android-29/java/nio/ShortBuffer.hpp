#pragma once

#include "./Buffer.hpp"

class JShortArray;
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
	class ShortBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShortBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		ShortBuffer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::ShortBuffer allocate(jint arg0);
		static java::nio::ShortBuffer wrap(JShortArray arg0);
		static java::nio::ShortBuffer wrap(JShortArray arg0, jint arg1, jint arg2);
		JShortArray array() const;
		jint arrayOffset() const;
		java::nio::ShortBuffer asReadOnlyBuffer() const;
		java::nio::ShortBuffer clear() const;
		java::nio::ShortBuffer compact() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::nio::ShortBuffer arg0) const;
		java::nio::ShortBuffer duplicate() const;
		jboolean equals(JObject arg0) const;
		java::nio::ShortBuffer flip() const;
		java::nio::ShortBuffer get(JShortArray arg0) const;
		java::nio::ShortBuffer get(jint arg0, JShortArray arg1) const;
		java::nio::ShortBuffer get(JShortArray arg0, jint arg1, jint arg2) const;
		java::nio::ShortBuffer get(jint arg0, JShortArray arg1, jint arg2, jint arg3) const;
		jshort get() const;
		jshort get(jint arg0) const;
		jboolean hasArray() const;
		jint hashCode() const;
		jboolean isDirect() const;
		java::nio::ShortBuffer limit(jint arg0) const;
		java::nio::ShortBuffer mark() const;
		jint mismatch(java::nio::ShortBuffer arg0) const;
		java::nio::ByteOrder order() const;
		java::nio::ShortBuffer position(jint arg0) const;
		java::nio::ShortBuffer put(JShortArray arg0) const;
		java::nio::ShortBuffer put(java::nio::ShortBuffer arg0) const;
		java::nio::ShortBuffer put(jshort arg0) const;
		java::nio::ShortBuffer put(jint arg0, JShortArray arg1) const;
		java::nio::ShortBuffer put(jint arg0, jshort arg1) const;
		java::nio::ShortBuffer put(JShortArray arg0, jint arg1, jint arg2) const;
		java::nio::ShortBuffer put(jint arg0, JShortArray arg1, jint arg2, jint arg3) const;
		java::nio::ShortBuffer put(jint arg0, java::nio::ShortBuffer arg1, jint arg2, jint arg3) const;
		java::nio::ShortBuffer reset() const;
		java::nio::ShortBuffer rewind() const;
		java::nio::ShortBuffer slice() const;
		java::nio::ShortBuffer slice(jint arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace java::nio


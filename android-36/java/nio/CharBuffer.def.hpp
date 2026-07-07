#pragma once

#include "./Buffer.def.hpp"

class JCharArray;
class JString;
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
	class CharBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CharBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		CharBuffer(QJniObject obj) : java::nio::Buffer(obj) {}
		
		// Constructors
		
		// Methods
		static java::nio::CharBuffer allocate(jint arg0);
		static java::nio::CharBuffer wrap(JCharArray arg0);
		static java::nio::CharBuffer wrap(JString arg0);
		static java::nio::CharBuffer wrap(JCharArray arg0, jint arg1, jint arg2);
		static java::nio::CharBuffer wrap(JString arg0, jint arg1, jint arg2);
		java::nio::CharBuffer append(jchar arg0) const;
		java::nio::CharBuffer append(JString arg0) const;
		java::nio::CharBuffer append(JString arg0, jint arg1, jint arg2) const;
		JCharArray array() const;
		jint arrayOffset() const;
		java::nio::CharBuffer asReadOnlyBuffer() const;
		jchar charAt(jint arg0) const;
		JObject chars() const;
		java::nio::CharBuffer clear() const;
		java::nio::CharBuffer compact() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::nio::CharBuffer arg0) const;
		java::nio::CharBuffer duplicate() const;
		jboolean equals(JObject arg0) const;
		java::nio::CharBuffer flip() const;
		jchar get() const;
		jchar get(jint arg0) const;
		java::nio::CharBuffer get(JCharArray arg0) const;
		java::nio::CharBuffer get(jint arg0, JCharArray arg1) const;
		java::nio::CharBuffer get(JCharArray arg0, jint arg1, jint arg2) const;
		java::nio::CharBuffer get(jint arg0, JCharArray arg1, jint arg2, jint arg3) const;
		jboolean hasArray() const;
		jint hashCode() const;
		jboolean isDirect() const;
		jboolean isEmpty() const;
		jint length() const;
		java::nio::CharBuffer limit(jint arg0) const;
		java::nio::CharBuffer mark() const;
		jint mismatch(java::nio::CharBuffer arg0) const;
		java::nio::ByteOrder order() const;
		java::nio::CharBuffer position(jint arg0) const;
		java::nio::CharBuffer put(JCharArray arg0) const;
		java::nio::CharBuffer put(jchar arg0) const;
		java::nio::CharBuffer put(JString arg0) const;
		java::nio::CharBuffer put(java::nio::CharBuffer arg0) const;
		java::nio::CharBuffer put(jint arg0, JCharArray arg1) const;
		java::nio::CharBuffer put(jint arg0, jchar arg1) const;
		java::nio::CharBuffer put(JCharArray arg0, jint arg1, jint arg2) const;
		java::nio::CharBuffer put(JString arg0, jint arg1, jint arg2) const;
		java::nio::CharBuffer put(jint arg0, JCharArray arg1, jint arg2, jint arg3) const;
		java::nio::CharBuffer put(jint arg0, java::nio::CharBuffer arg1, jint arg2, jint arg3) const;
		jint read(java::nio::CharBuffer arg0) const;
		java::nio::CharBuffer reset() const;
		java::nio::CharBuffer rewind() const;
		java::nio::CharBuffer slice() const;
		java::nio::CharBuffer slice(jint arg0, jint arg1) const;
		java::nio::CharBuffer subSequence(jint arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace java::nio


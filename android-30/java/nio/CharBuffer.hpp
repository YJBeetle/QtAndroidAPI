#pragma once

#include "./Buffer.hpp"

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
		CharBuffer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::CharBuffer allocate(jint arg0);
		static java::nio::CharBuffer wrap(JCharArray arg0);
		static java::nio::CharBuffer wrap(JString arg0);
		static java::nio::CharBuffer wrap(JCharArray arg0, jint arg1, jint arg2);
		static java::nio::CharBuffer wrap(JString arg0, jint arg1, jint arg2);
		java::nio::CharBuffer append(jchar arg0);
		java::nio::CharBuffer append(JString arg0);
		java::nio::CharBuffer append(JString arg0, jint arg1, jint arg2);
		JCharArray array();
		jint arrayOffset();
		java::nio::CharBuffer asReadOnlyBuffer();
		jchar charAt(jint arg0);
		JObject chars();
		java::nio::CharBuffer clear();
		java::nio::CharBuffer compact();
		jint compareTo(JObject arg0);
		jint compareTo(java::nio::CharBuffer arg0);
		java::nio::CharBuffer duplicate();
		jboolean equals(JObject arg0);
		java::nio::CharBuffer flip();
		jchar get();
		jchar get(jint arg0);
		java::nio::CharBuffer get(JCharArray arg0);
		java::nio::CharBuffer get(jint arg0, JCharArray arg1);
		java::nio::CharBuffer get(JCharArray arg0, jint arg1, jint arg2);
		java::nio::CharBuffer get(jint arg0, JCharArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		jboolean isEmpty();
		jint length();
		java::nio::CharBuffer limit(jint arg0);
		java::nio::CharBuffer mark();
		jint mismatch(java::nio::CharBuffer arg0);
		java::nio::ByteOrder order();
		java::nio::CharBuffer position(jint arg0);
		java::nio::CharBuffer put(JCharArray arg0);
		java::nio::CharBuffer put(jchar arg0);
		java::nio::CharBuffer put(JString arg0);
		java::nio::CharBuffer put(java::nio::CharBuffer arg0);
		java::nio::CharBuffer put(jint arg0, JCharArray arg1);
		java::nio::CharBuffer put(jint arg0, jchar arg1);
		java::nio::CharBuffer put(JCharArray arg0, jint arg1, jint arg2);
		java::nio::CharBuffer put(JString arg0, jint arg1, jint arg2);
		java::nio::CharBuffer put(jint arg0, JCharArray arg1, jint arg2, jint arg3);
		java::nio::CharBuffer put(jint arg0, java::nio::CharBuffer arg1, jint arg2, jint arg3);
		jint read(java::nio::CharBuffer arg0);
		java::nio::CharBuffer reset();
		java::nio::CharBuffer rewind();
		java::nio::CharBuffer slice();
		java::nio::CharBuffer slice(jint arg0, jint arg1);
		java::nio::CharBuffer subSequence(jint arg0, jint arg1);
		JString toString();
	};
} // namespace java::nio


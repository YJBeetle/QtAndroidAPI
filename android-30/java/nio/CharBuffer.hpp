#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Buffer.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		CharBuffer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::CharBuffer allocate(jint arg0);
		static java::nio::CharBuffer wrap(jcharArray arg0);
		static java::nio::CharBuffer wrap(jstring arg0);
		static java::nio::CharBuffer wrap(jcharArray arg0, jint arg1, jint arg2);
		static java::nio::CharBuffer wrap(jstring arg0, jint arg1, jint arg2);
		java::nio::CharBuffer append(jchar arg0);
		java::nio::CharBuffer append(jstring arg0);
		java::nio::CharBuffer append(jstring arg0, jint arg1, jint arg2);
		jcharArray array();
		jint arrayOffset();
		java::nio::CharBuffer asReadOnlyBuffer();
		jchar charAt(jint arg0);
		__JniBaseClass chars();
		java::nio::CharBuffer clear();
		java::nio::CharBuffer compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::CharBuffer arg0);
		java::nio::CharBuffer duplicate();
		jboolean equals(jobject arg0);
		java::nio::CharBuffer flip();
		jchar get();
		jchar get(jint arg0);
		java::nio::CharBuffer get(jcharArray arg0);
		java::nio::CharBuffer get(jint arg0, jcharArray arg1);
		java::nio::CharBuffer get(jcharArray arg0, jint arg1, jint arg2);
		java::nio::CharBuffer get(jint arg0, jcharArray arg1, jint arg2, jint arg3);
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
		java::nio::CharBuffer put(jcharArray arg0);
		java::nio::CharBuffer put(jchar arg0);
		java::nio::CharBuffer put(jstring arg0);
		java::nio::CharBuffer put(java::nio::CharBuffer arg0);
		java::nio::CharBuffer put(jint arg0, jcharArray arg1);
		java::nio::CharBuffer put(jint arg0, jchar arg1);
		java::nio::CharBuffer put(jcharArray arg0, jint arg1, jint arg2);
		java::nio::CharBuffer put(jstring arg0, jint arg1, jint arg2);
		java::nio::CharBuffer put(jint arg0, jcharArray arg1, jint arg2, jint arg3);
		java::nio::CharBuffer put(jint arg0, java::nio::CharBuffer arg1, jint arg2, jint arg3);
		jint read(java::nio::CharBuffer arg0);
		java::nio::CharBuffer reset();
		java::nio::CharBuffer rewind();
		java::nio::CharBuffer slice();
		java::nio::CharBuffer slice(jint arg0, jint arg1);
		java::nio::CharBuffer subSequence(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio


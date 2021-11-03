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
		JShortArray array();
		jint arrayOffset();
		java::nio::ShortBuffer asReadOnlyBuffer();
		java::nio::ShortBuffer clear();
		java::nio::ShortBuffer compact();
		jint compareTo(JObject arg0);
		jint compareTo(java::nio::ShortBuffer arg0);
		java::nio::ShortBuffer duplicate();
		jboolean equals(JObject arg0);
		java::nio::ShortBuffer flip();
		java::nio::ShortBuffer get(JShortArray arg0);
		java::nio::ShortBuffer get(jint arg0, JShortArray arg1);
		java::nio::ShortBuffer get(JShortArray arg0, jint arg1, jint arg2);
		java::nio::ShortBuffer get(jint arg0, JShortArray arg1, jint arg2, jint arg3);
		jshort get();
		jshort get(jint arg0);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		java::nio::ShortBuffer limit(jint arg0);
		java::nio::ShortBuffer mark();
		jint mismatch(java::nio::ShortBuffer arg0);
		java::nio::ByteOrder order();
		java::nio::ShortBuffer position(jint arg0);
		java::nio::ShortBuffer put(JShortArray arg0);
		java::nio::ShortBuffer put(java::nio::ShortBuffer arg0);
		java::nio::ShortBuffer put(jshort arg0);
		java::nio::ShortBuffer put(jint arg0, JShortArray arg1);
		java::nio::ShortBuffer put(jint arg0, jshort arg1);
		java::nio::ShortBuffer put(JShortArray arg0, jint arg1, jint arg2);
		java::nio::ShortBuffer put(jint arg0, JShortArray arg1, jint arg2, jint arg3);
		java::nio::ShortBuffer put(jint arg0, java::nio::ShortBuffer arg1, jint arg2, jint arg3);
		java::nio::ShortBuffer reset();
		java::nio::ShortBuffer rewind();
		java::nio::ShortBuffer slice();
		java::nio::ShortBuffer slice(jint arg0, jint arg1);
		JString toString();
	};
} // namespace java::nio


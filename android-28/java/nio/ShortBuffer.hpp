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
	class ShortBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ShortBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		ShortBuffer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::ShortBuffer allocate(jint arg0);
		static java::nio::ShortBuffer wrap(jshortArray arg0);
		static java::nio::ShortBuffer wrap(jshortArray arg0, jint arg1, jint arg2);
		jshortArray array();
		jint arrayOffset();
		java::nio::ShortBuffer asReadOnlyBuffer();
		java::nio::ShortBuffer clear();
		java::nio::ShortBuffer compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::ShortBuffer arg0);
		java::nio::ShortBuffer duplicate();
		jboolean equals(jobject arg0);
		java::nio::ShortBuffer flip();
		java::nio::ShortBuffer get(jshortArray arg0);
		java::nio::ShortBuffer get(jint arg0, jshortArray arg1);
		java::nio::ShortBuffer get(jshortArray arg0, jint arg1, jint arg2);
		java::nio::ShortBuffer get(jint arg0, jshortArray arg1, jint arg2, jint arg3);
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
		java::nio::ShortBuffer put(jshortArray arg0);
		java::nio::ShortBuffer put(java::nio::ShortBuffer arg0);
		java::nio::ShortBuffer put(jshort arg0);
		java::nio::ShortBuffer put(jint arg0, jshortArray arg1);
		java::nio::ShortBuffer put(jint arg0, jshort arg1);
		java::nio::ShortBuffer put(jshortArray arg0, jint arg1, jint arg2);
		java::nio::ShortBuffer put(jint arg0, jshortArray arg1, jint arg2, jint arg3);
		java::nio::ShortBuffer put(jint arg0, java::nio::ShortBuffer arg1, jint arg2, jint arg3);
		java::nio::ShortBuffer reset();
		java::nio::ShortBuffer rewind();
		java::nio::ShortBuffer slice();
		java::nio::ShortBuffer slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio


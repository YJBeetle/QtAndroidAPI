#pragma once

#include "../../JObject.hpp"
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
		static java::nio::LongBuffer wrap(jlongArray arg0);
		static java::nio::LongBuffer wrap(jlongArray arg0, jint arg1, jint arg2);
		jlongArray array();
		jint arrayOffset();
		java::nio::LongBuffer asReadOnlyBuffer();
		java::nio::LongBuffer clear();
		java::nio::LongBuffer compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::LongBuffer arg0);
		java::nio::LongBuffer duplicate();
		jboolean equals(jobject arg0);
		java::nio::LongBuffer flip();
		java::nio::LongBuffer get(jlongArray arg0);
		java::nio::LongBuffer get(jint arg0, jlongArray arg1);
		java::nio::LongBuffer get(jlongArray arg0, jint arg1, jint arg2);
		java::nio::LongBuffer get(jint arg0, jlongArray arg1, jint arg2, jint arg3);
		jlong get();
		jlong get(jint arg0);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		java::nio::LongBuffer limit(jint arg0);
		java::nio::LongBuffer mark();
		jint mismatch(java::nio::LongBuffer arg0);
		java::nio::ByteOrder order();
		java::nio::LongBuffer position(jint arg0);
		java::nio::LongBuffer put(jlongArray arg0);
		java::nio::LongBuffer put(java::nio::LongBuffer arg0);
		java::nio::LongBuffer put(jlong arg0);
		java::nio::LongBuffer put(jint arg0, jlongArray arg1);
		java::nio::LongBuffer put(jint arg0, jlong arg1);
		java::nio::LongBuffer put(jlongArray arg0, jint arg1, jint arg2);
		java::nio::LongBuffer put(jint arg0, jlongArray arg1, jint arg2, jint arg3);
		java::nio::LongBuffer put(jint arg0, java::nio::LongBuffer arg1, jint arg2, jint arg3);
		java::nio::LongBuffer reset();
		java::nio::LongBuffer rewind();
		java::nio::LongBuffer slice();
		java::nio::LongBuffer slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio


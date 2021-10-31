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
	class FloatBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FloatBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		FloatBuffer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::FloatBuffer allocate(jint arg0);
		static java::nio::FloatBuffer wrap(jfloatArray arg0);
		static java::nio::FloatBuffer wrap(jfloatArray arg0, jint arg1, jint arg2);
		jfloatArray array();
		jint arrayOffset();
		java::nio::FloatBuffer asReadOnlyBuffer();
		java::nio::FloatBuffer clear();
		java::nio::FloatBuffer compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::FloatBuffer arg0);
		java::nio::FloatBuffer duplicate();
		jboolean equals(jobject arg0);
		java::nio::FloatBuffer flip();
		jfloat get();
		jfloat get(jint arg0);
		java::nio::FloatBuffer get(jfloatArray arg0);
		java::nio::FloatBuffer get(jint arg0, jfloatArray arg1);
		java::nio::FloatBuffer get(jfloatArray arg0, jint arg1, jint arg2);
		java::nio::FloatBuffer get(jint arg0, jfloatArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		java::nio::FloatBuffer limit(jint arg0);
		java::nio::FloatBuffer mark();
		jint mismatch(java::nio::FloatBuffer arg0);
		java::nio::ByteOrder order();
		java::nio::FloatBuffer position(jint arg0);
		java::nio::FloatBuffer put(jfloatArray arg0);
		java::nio::FloatBuffer put(jfloat arg0);
		java::nio::FloatBuffer put(java::nio::FloatBuffer arg0);
		java::nio::FloatBuffer put(jint arg0, jfloatArray arg1);
		java::nio::FloatBuffer put(jint arg0, jfloat arg1);
		java::nio::FloatBuffer put(jfloatArray arg0, jint arg1, jint arg2);
		java::nio::FloatBuffer put(jint arg0, jfloatArray arg1, jint arg2, jint arg3);
		java::nio::FloatBuffer put(jint arg0, java::nio::FloatBuffer arg1, jint arg2, jint arg3);
		java::nio::FloatBuffer reset();
		java::nio::FloatBuffer rewind();
		java::nio::FloatBuffer slice();
		java::nio::FloatBuffer slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio


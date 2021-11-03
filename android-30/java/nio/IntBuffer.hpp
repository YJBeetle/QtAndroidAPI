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
		JIntArray array();
		jint arrayOffset();
		java::nio::IntBuffer asReadOnlyBuffer();
		java::nio::IntBuffer clear();
		java::nio::IntBuffer compact();
		jint compareTo(JObject arg0);
		jint compareTo(java::nio::IntBuffer arg0);
		java::nio::IntBuffer duplicate();
		jboolean equals(JObject arg0);
		java::nio::IntBuffer flip();
		jint get();
		jint get(jint arg0);
		java::nio::IntBuffer get(JIntArray arg0);
		java::nio::IntBuffer get(jint arg0, JIntArray arg1);
		java::nio::IntBuffer get(JIntArray arg0, jint arg1, jint arg2);
		java::nio::IntBuffer get(jint arg0, JIntArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		java::nio::IntBuffer limit(jint arg0);
		java::nio::IntBuffer mark();
		jint mismatch(java::nio::IntBuffer arg0);
		java::nio::ByteOrder order();
		java::nio::IntBuffer position(jint arg0);
		java::nio::IntBuffer put(JIntArray arg0);
		java::nio::IntBuffer put(jint arg0);
		java::nio::IntBuffer put(java::nio::IntBuffer arg0);
		java::nio::IntBuffer put(jint arg0, JIntArray arg1);
		java::nio::IntBuffer put(jint arg0, jint arg1);
		java::nio::IntBuffer put(JIntArray arg0, jint arg1, jint arg2);
		java::nio::IntBuffer put(jint arg0, JIntArray arg1, jint arg2, jint arg3);
		java::nio::IntBuffer put(jint arg0, java::nio::IntBuffer arg1, jint arg2, jint arg3);
		java::nio::IntBuffer reset();
		java::nio::IntBuffer rewind();
		java::nio::IntBuffer slice();
		java::nio::IntBuffer slice(jint arg0, jint arg1);
		JString toString();
	};
} // namespace java::nio


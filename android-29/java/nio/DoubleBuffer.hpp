#pragma once

#include "./Buffer.hpp"

class JDoubleArray;
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
	class DoubleBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DoubleBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		DoubleBuffer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::DoubleBuffer allocate(jint arg0);
		static java::nio::DoubleBuffer wrap(JDoubleArray arg0);
		static java::nio::DoubleBuffer wrap(JDoubleArray arg0, jint arg1, jint arg2);
		JDoubleArray array();
		jint arrayOffset();
		java::nio::DoubleBuffer asReadOnlyBuffer();
		java::nio::DoubleBuffer clear();
		java::nio::DoubleBuffer compact();
		jint compareTo(JObject arg0);
		jint compareTo(java::nio::DoubleBuffer arg0);
		java::nio::DoubleBuffer duplicate();
		jboolean equals(JObject arg0);
		java::nio::DoubleBuffer flip();
		jdouble get();
		jdouble get(jint arg0);
		java::nio::DoubleBuffer get(JDoubleArray arg0);
		java::nio::DoubleBuffer get(jint arg0, JDoubleArray arg1);
		java::nio::DoubleBuffer get(JDoubleArray arg0, jint arg1, jint arg2);
		java::nio::DoubleBuffer get(jint arg0, JDoubleArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		java::nio::DoubleBuffer limit(jint arg0);
		java::nio::DoubleBuffer mark();
		jint mismatch(java::nio::DoubleBuffer arg0);
		java::nio::ByteOrder order();
		java::nio::DoubleBuffer position(jint arg0);
		java::nio::DoubleBuffer put(JDoubleArray arg0);
		java::nio::DoubleBuffer put(jdouble arg0);
		java::nio::DoubleBuffer put(java::nio::DoubleBuffer arg0);
		java::nio::DoubleBuffer put(jint arg0, JDoubleArray arg1);
		java::nio::DoubleBuffer put(jint arg0, jdouble arg1);
		java::nio::DoubleBuffer put(JDoubleArray arg0, jint arg1, jint arg2);
		java::nio::DoubleBuffer put(jint arg0, JDoubleArray arg1, jint arg2, jint arg3);
		java::nio::DoubleBuffer put(jint arg0, java::nio::DoubleBuffer arg1, jint arg2, jint arg3);
		java::nio::DoubleBuffer reset();
		java::nio::DoubleBuffer rewind();
		java::nio::DoubleBuffer slice();
		java::nio::DoubleBuffer slice(jint arg0, jint arg1);
		JString toString();
	};
} // namespace java::nio


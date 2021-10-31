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
		static java::nio::DoubleBuffer wrap(jdoubleArray arg0);
		static java::nio::DoubleBuffer wrap(jdoubleArray arg0, jint arg1, jint arg2);
		jdoubleArray array();
		jint arrayOffset();
		java::nio::DoubleBuffer asReadOnlyBuffer();
		java::nio::DoubleBuffer clear();
		java::nio::DoubleBuffer compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::DoubleBuffer arg0);
		java::nio::DoubleBuffer duplicate();
		jboolean equals(jobject arg0);
		java::nio::DoubleBuffer flip();
		jdouble get();
		jdouble get(jint arg0);
		java::nio::DoubleBuffer get(jdoubleArray arg0);
		java::nio::DoubleBuffer get(jint arg0, jdoubleArray arg1);
		java::nio::DoubleBuffer get(jdoubleArray arg0, jint arg1, jint arg2);
		java::nio::DoubleBuffer get(jint arg0, jdoubleArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		java::nio::DoubleBuffer limit(jint arg0);
		java::nio::DoubleBuffer mark();
		jint mismatch(java::nio::DoubleBuffer arg0);
		java::nio::ByteOrder order();
		java::nio::DoubleBuffer position(jint arg0);
		java::nio::DoubleBuffer put(jdoubleArray arg0);
		java::nio::DoubleBuffer put(jdouble arg0);
		java::nio::DoubleBuffer put(java::nio::DoubleBuffer arg0);
		java::nio::DoubleBuffer put(jint arg0, jdoubleArray arg1);
		java::nio::DoubleBuffer put(jint arg0, jdouble arg1);
		java::nio::DoubleBuffer put(jdoubleArray arg0, jint arg1, jint arg2);
		java::nio::DoubleBuffer put(jint arg0, jdoubleArray arg1, jint arg2, jint arg3);
		java::nio::DoubleBuffer put(jint arg0, java::nio::DoubleBuffer arg1, jint arg2, jint arg3);
		java::nio::DoubleBuffer reset();
		java::nio::DoubleBuffer rewind();
		java::nio::DoubleBuffer slice();
		java::nio::DoubleBuffer slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio


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
		
		DoubleBuffer(QAndroidJniObject obj);
		// Constructors
		DoubleBuffer() = default;
		
		// Methods
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject wrap(jdoubleArray arg0);
		static QAndroidJniObject wrap(jdoubleArray arg0, jint arg1, jint arg2);
		jdoubleArray array();
		jint arrayOffset();
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::DoubleBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		jdouble get();
		jdouble get(jint arg0);
		QAndroidJniObject get(jdoubleArray arg0);
		QAndroidJniObject get(jint arg0, jdoubleArray arg1);
		QAndroidJniObject get(jdoubleArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jdoubleArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(java::nio::DoubleBuffer arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jdoubleArray arg0);
		QAndroidJniObject put(jdouble arg0);
		QAndroidJniObject put(java::nio::DoubleBuffer arg0);
		QAndroidJniObject put(jint arg0, jdoubleArray arg1);
		QAndroidJniObject put(jint arg0, jdouble arg1);
		QAndroidJniObject put(jdoubleArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jdoubleArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, java::nio::DoubleBuffer arg1, jint arg2, jint arg3);
		QAndroidJniObject reset();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio


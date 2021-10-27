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
	class LongBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		LongBuffer(QAndroidJniObject obj);
		// Constructors
		LongBuffer() = default;
		
		// Methods
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject wrap(jlongArray arg0);
		static QAndroidJniObject wrap(jlongArray arg0, jint arg1, jint arg2);
		jlongArray array();
		jint arrayOffset();
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::LongBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		QAndroidJniObject get(jlongArray arg0);
		QAndroidJniObject get(jint arg0, jlongArray arg1);
		QAndroidJniObject get(jlongArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jlongArray arg1, jint arg2, jint arg3);
		jlong get();
		jlong get(jint arg0);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(java::nio::LongBuffer arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jlongArray arg0);
		QAndroidJniObject put(java::nio::LongBuffer arg0);
		QAndroidJniObject put(jlong arg0);
		QAndroidJniObject put(jint arg0, jlongArray arg1);
		QAndroidJniObject put(jint arg0, jlong arg1);
		QAndroidJniObject put(jlongArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jlongArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, java::nio::LongBuffer arg1, jint arg2, jint arg3);
		QAndroidJniObject reset();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio


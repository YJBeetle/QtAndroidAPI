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
		
		FloatBuffer(QAndroidJniObject obj);
		// Constructors
		FloatBuffer() = default;
		
		// Methods
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject wrap(jfloatArray arg0);
		static QAndroidJniObject wrap(jfloatArray arg0, jint arg1, jint arg2);
		jfloatArray array();
		jint arrayOffset();
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::FloatBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		jfloat get();
		jfloat get(jint arg0);
		QAndroidJniObject get(jfloatArray arg0);
		QAndroidJniObject get(jint arg0, jfloatArray arg1);
		QAndroidJniObject get(jfloatArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jfloatArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(java::nio::FloatBuffer arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jfloatArray arg0);
		QAndroidJniObject put(jfloat arg0);
		QAndroidJniObject put(java::nio::FloatBuffer arg0);
		QAndroidJniObject put(jint arg0, jfloatArray arg1);
		QAndroidJniObject put(jint arg0, jfloat arg1);
		QAndroidJniObject put(jfloatArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jfloatArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, java::nio::FloatBuffer arg1, jint arg2, jint arg3);
		QAndroidJniObject reset();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio


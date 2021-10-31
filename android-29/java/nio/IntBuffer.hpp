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
	class IntBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		IntBuffer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject wrap(jintArray arg0);
		static QAndroidJniObject wrap(jintArray arg0, jint arg1, jint arg2);
		jintArray array();
		jint arrayOffset();
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::IntBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		jint get();
		jint get(jint arg0);
		QAndroidJniObject get(jintArray arg0);
		QAndroidJniObject get(jint arg0, jintArray arg1);
		QAndroidJniObject get(jintArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jintArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(java::nio::IntBuffer arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jintArray arg0);
		QAndroidJniObject put(jint arg0);
		QAndroidJniObject put(java::nio::IntBuffer arg0);
		QAndroidJniObject put(jint arg0, jintArray arg1);
		QAndroidJniObject put(jint arg0, jint arg1);
		QAndroidJniObject put(jintArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jintArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, java::nio::IntBuffer arg1, jint arg2, jint arg3);
		QAndroidJniObject reset();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio


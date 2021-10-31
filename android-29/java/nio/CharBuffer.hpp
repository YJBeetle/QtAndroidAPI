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
	class CharBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		CharBuffer(QAndroidJniObject obj);
		// Constructors
		CharBuffer() = default;
		
		// Methods
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject wrap(jcharArray arg0);
		static QAndroidJniObject wrap(jstring arg0);
		static QAndroidJniObject wrap(jcharArray arg0, jint arg1, jint arg2);
		static QAndroidJniObject wrap(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		jcharArray array();
		jint arrayOffset();
		QAndroidJniObject asReadOnlyBuffer();
		jchar charAt(jint arg0);
		QAndroidJniObject chars();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::CharBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		jchar get();
		jchar get(jint arg0);
		QAndroidJniObject get(jcharArray arg0);
		QAndroidJniObject get(jint arg0, jcharArray arg1);
		QAndroidJniObject get(jcharArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jcharArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		jboolean isEmpty();
		jint length();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(java::nio::CharBuffer arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jcharArray arg0);
		QAndroidJniObject put(jchar arg0);
		QAndroidJniObject put(jstring arg0);
		QAndroidJniObject put(java::nio::CharBuffer arg0);
		QAndroidJniObject put(jint arg0, jcharArray arg1);
		QAndroidJniObject put(jint arg0, jchar arg1);
		QAndroidJniObject put(jcharArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jcharArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, java::nio::CharBuffer arg1, jint arg2, jint arg3);
		jint read(java::nio::CharBuffer arg0);
		QAndroidJniObject reset();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		QAndroidJniObject subSequence(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio


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
	class ShortBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShortBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		ShortBuffer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject wrap(jshortArray arg0);
		static QAndroidJniObject wrap(jshortArray arg0, jint arg1, jint arg2);
		jshortArray array();
		jint arrayOffset();
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::ShortBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		QAndroidJniObject get(jshortArray arg0);
		QAndroidJniObject get(jint arg0, jshortArray arg1);
		QAndroidJniObject get(jshortArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jshortArray arg1, jint arg2, jint arg3);
		jshort get();
		jshort get(jint arg0);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(java::nio::ShortBuffer arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jshortArray arg0);
		QAndroidJniObject put(java::nio::ShortBuffer arg0);
		QAndroidJniObject put(jshort arg0);
		QAndroidJniObject put(jint arg0, jshortArray arg1);
		QAndroidJniObject put(jint arg0, jshort arg1);
		QAndroidJniObject put(jshortArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jshortArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, java::nio::ShortBuffer arg1, jint arg2, jint arg3);
		QAndroidJniObject reset();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio


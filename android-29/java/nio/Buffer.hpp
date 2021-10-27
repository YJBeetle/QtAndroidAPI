#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class IllegalArgumentException;
}

namespace java::nio
{
	class Buffer : public __JniBaseClass
	{
	public:
		// Fields
		
		Buffer(QAndroidJniObject obj);
		// Constructors
		Buffer() = default;
		
		// Methods
		jobject array();
		jint arrayOffset();
		jint capacity();
		QAndroidJniObject clear();
		QAndroidJniObject duplicate();
		QAndroidJniObject flip();
		jboolean hasArray();
		jboolean hasRemaining();
		jboolean isDirect();
		jboolean isReadOnly();
		jint limit();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint position();
		QAndroidJniObject position(jint arg0);
		jint remaining();
		QAndroidJniObject reset();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
	};
} // namespace java::nio


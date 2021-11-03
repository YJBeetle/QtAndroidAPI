#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class IllegalArgumentException;
}

namespace java::nio
{
	class Buffer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Buffer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Buffer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jobject array();
		jint arrayOffset();
		jint capacity();
		java::nio::Buffer clear();
		java::nio::Buffer duplicate();
		java::nio::Buffer flip();
		jboolean hasArray();
		jboolean hasRemaining();
		jboolean isDirect();
		jboolean isReadOnly();
		jint limit();
		java::nio::Buffer limit(jint arg0);
		java::nio::Buffer mark();
		jint position();
		java::nio::Buffer position(jint arg0);
		jint remaining();
		java::nio::Buffer reset();
		java::nio::Buffer rewind();
		java::nio::Buffer slice();
		java::nio::Buffer slice(jint arg0, jint arg1);
	};
} // namespace java::nio


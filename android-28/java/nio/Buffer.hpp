#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class IllegalArgumentException;
}
class JObject;

namespace java::nio
{
	class Buffer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Buffer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Buffer(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject array() const;
		jint arrayOffset() const;
		jint capacity() const;
		java::nio::Buffer clear() const;
		java::nio::Buffer duplicate() const;
		java::nio::Buffer flip() const;
		jboolean hasArray() const;
		jboolean hasRemaining() const;
		jboolean isDirect() const;
		jboolean isReadOnly() const;
		jint limit() const;
		java::nio::Buffer limit(jint arg0) const;
		java::nio::Buffer mark() const;
		jint position() const;
		java::nio::Buffer position(jint arg0) const;
		jint remaining() const;
		java::nio::Buffer reset() const;
		java::nio::Buffer rewind() const;
		java::nio::Buffer slice() const;
		java::nio::Buffer slice(jint arg0, jint arg1) const;
	};
} // namespace java::nio


#pragma once

#include "../../JObject.hpp"

namespace java::nio
{
	class ByteBuffer;
}

namespace java::security
{
	class MessageDigestSpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MessageDigestSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MessageDigestSpi(QJniObject obj);
		
		// Constructors
		MessageDigestSpi();
		
		// Methods
		jobject clone();
	};
} // namespace java::security


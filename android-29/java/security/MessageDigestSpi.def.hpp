#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessageDigestSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MessageDigestSpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MessageDigestSpi();
		
		// Methods
		JObject clone() const;
	};
} // namespace java::security


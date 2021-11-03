#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
class JString;
namespace java::nio
{
	class ByteBuffer;
}
namespace java::security
{
	class AlgorithmParameters;
}
namespace java::security
{
	class SecureRandom;
}

namespace java::security
{
	class SignatureSpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SignatureSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SignatureSpi(QJniObject obj);
		
		// Constructors
		SignatureSpi();
		
		// Methods
		JObject clone();
	};
} // namespace java::security


#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
namespace java::nio
{
	class ByteBuffer;
}

namespace javax::crypto
{
	class MacSpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MacSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MacSpi(QAndroidJniObject obj);
		
		// Constructors
		MacSpi();
		
		// Methods
		JObject clone() const;
	};
} // namespace javax::crypto


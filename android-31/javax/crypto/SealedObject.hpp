#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
namespace javax::crypto
{
	class Cipher;
}

namespace javax::crypto
{
	class SealedObject : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SealedObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SealedObject(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SealedObject(JObject arg0, javax::crypto::Cipher arg1);
		
		// Methods
		JString getAlgorithm() const;
		JObject getObject(JObject arg0) const;
		JObject getObject(javax::crypto::Cipher arg0) const;
		JObject getObject(JObject arg0, JString arg1) const;
	};
} // namespace javax::crypto


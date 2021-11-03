#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SealedObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SealedObject(QJniObject obj);
		
		// Constructors
		SealedObject(JObject arg0, javax::crypto::Cipher arg1);
		
		// Methods
		jstring getAlgorithm();
		jobject getObject(JObject arg0);
		jobject getObject(javax::crypto::Cipher arg0);
		jobject getObject(JObject arg0, jstring arg1);
	};
} // namespace javax::crypto


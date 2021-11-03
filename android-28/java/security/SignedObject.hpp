#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
namespace java::security
{
	class Signature;
}

namespace java::security
{
	class SignedObject : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SignedObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SignedObject(QJniObject obj);
		
		// Constructors
		SignedObject(JObject arg0, JObject arg1, java::security::Signature arg2);
		
		// Methods
		JString getAlgorithm();
		JObject getObject();
		JByteArray getSignature();
		jboolean verify(JObject arg0, java::security::Signature arg1);
	};
} // namespace java::security


#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace javax::security::cert
{
	class Certificate : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Certificate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Certificate(QJniObject obj);
		
		// Constructors
		Certificate();
		
		// Methods
		jboolean equals(JObject arg0);
		JByteArray getEncoded();
		JObject getPublicKey();
		jint hashCode();
		JString toString();
		void verify(JObject arg0);
		void verify(JObject arg0, JString arg1);
	};
} // namespace javax::security::cert


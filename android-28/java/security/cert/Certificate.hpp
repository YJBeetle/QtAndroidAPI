#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;
namespace java::security
{
	class Provider;
}

namespace java::security::cert
{
	class Certificate : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Certificate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Certificate(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JByteArray getEncoded();
		JObject getPublicKey();
		JString getType();
		jint hashCode();
		JString toString();
		void verify(JObject arg0);
		void verify(JObject arg0, JString arg1);
		void verify(JObject arg0, java::security::Provider arg1);
	};
} // namespace java::security::cert


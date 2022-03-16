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
		
		// QJniObject forward
		template<typename ...Ts> explicit Certificate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Certificate(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getEncoded() const;
		JObject getPublicKey() const;
		JString getType() const;
		jint hashCode() const;
		JString toString() const;
		void verify(JObject arg0) const;
		void verify(JObject arg0, JString arg1) const;
		void verify(JObject arg0, java::security::Provider arg1) const;
	};
} // namespace java::security::cert


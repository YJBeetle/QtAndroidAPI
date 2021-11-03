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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Certificate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Certificate(QAndroidJniObject obj);
		
		// Constructors
		Certificate();
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getEncoded() const;
		JObject getPublicKey() const;
		jint hashCode() const;
		JString toString() const;
		void verify(JObject arg0) const;
		void verify(JObject arg0, JString arg1) const;
	};
} // namespace javax::security::cert


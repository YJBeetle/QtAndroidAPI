#pragma once

#include "../../../JObject.hpp"


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
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		JObject getPublicKey();
		jint hashCode();
		jstring toString();
		void verify(JObject arg0);
		void verify(JObject arg0, jstring arg1);
	};
} // namespace javax::security::cert


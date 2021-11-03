#pragma once

#include "../../../JObject.hpp"

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
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		JObject getPublicKey();
		jstring getType();
		jint hashCode();
		jstring toString();
		void verify(JObject arg0);
		void verify(JObject arg0, jstring arg1);
		void verify(JObject arg0, java::security::Provider arg1);
	};
} // namespace java::security::cert


#pragma once

#include "../../../JObject.hpp"


namespace java::security::cert
{
	class PolicyQualifierInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PolicyQualifierInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PolicyQualifierInfo(QJniObject obj);
		
		// Constructors
		PolicyQualifierInfo(jbyteArray arg0);
		
		// Methods
		jbyteArray getEncoded();
		jbyteArray getPolicyQualifier();
		jstring getPolicyQualifierId();
		jstring toString();
	};
} // namespace java::security::cert


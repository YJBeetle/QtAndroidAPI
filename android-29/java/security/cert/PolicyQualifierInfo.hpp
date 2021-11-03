#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;

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
		PolicyQualifierInfo(JByteArray arg0);
		
		// Methods
		JByteArray getEncoded();
		JByteArray getPolicyQualifier();
		JString getPolicyQualifierId();
		JString toString();
	};
} // namespace java::security::cert


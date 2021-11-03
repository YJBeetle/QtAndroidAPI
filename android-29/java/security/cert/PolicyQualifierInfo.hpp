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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PolicyQualifierInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PolicyQualifierInfo(QAndroidJniObject obj);
		
		// Constructors
		PolicyQualifierInfo(JByteArray arg0);
		
		// Methods
		JByteArray getEncoded();
		JByteArray getPolicyQualifier();
		JString getPolicyQualifierId();
		JString toString();
	};
} // namespace java::security::cert


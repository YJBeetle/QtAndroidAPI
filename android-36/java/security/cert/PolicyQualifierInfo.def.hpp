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
		PolicyQualifierInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PolicyQualifierInfo(JByteArray arg0);
		
		// Methods
		JByteArray getEncoded() const;
		JByteArray getPolicyQualifier() const;
		JString getPolicyQualifierId() const;
		JString toString() const;
	};
} // namespace java::security::cert


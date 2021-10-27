#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class PolicyQualifierInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		PolicyQualifierInfo(QAndroidJniObject obj);
		// Constructors
		PolicyQualifierInfo(jbyteArray &arg0);
		PolicyQualifierInfo() = default;
		
		// Methods
		jbyteArray getEncoded();
		jbyteArray getPolicyQualifier();
		jstring getPolicyQualifierId();
		jstring toString();
	};
} // namespace java::security::cert


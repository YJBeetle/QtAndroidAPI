#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class PolicyQualifierInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PolicyQualifierInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PolicyQualifierInfo(QAndroidJniObject obj);
		
		// Constructors
		PolicyQualifierInfo(jbyteArray arg0);
		
		// Methods
		jbyteArray getEncoded();
		jbyteArray getPolicyQualifier();
		jstring getPolicyQualifierId();
		jstring toString();
	};
} // namespace java::security::cert


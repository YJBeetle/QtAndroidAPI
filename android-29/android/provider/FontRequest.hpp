#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class FontRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FontRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FontRequest(QAndroidJniObject obj);
		
		// Constructors
		FontRequest(jstring arg0, jstring arg1, jstring arg2);
		FontRequest(jstring arg0, jstring arg1, jstring arg2, __JniBaseClass arg3);
		
		// Methods
		QAndroidJniObject getCertificates();
		jstring getProviderAuthority();
		jstring getProviderPackage();
		jstring getQuery();
		jstring toString();
	};
} // namespace android::provider


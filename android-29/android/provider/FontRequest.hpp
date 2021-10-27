#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class FontRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		FontRequest(QAndroidJniObject obj);
		// Constructors
		FontRequest(jstring &arg0, jstring &arg1, jstring &arg2);
		FontRequest(const QString &arg0, const QString &arg1, const QString &arg2);
		FontRequest(jstring &arg0, jstring &arg1, jstring &arg2, __JniBaseClass &arg3);
		FontRequest(const QString &arg0, const QString &arg1, const QString &arg2, __JniBaseClass &arg3);
		FontRequest() = default;
		
		// Methods
		QAndroidJniObject getCertificates();
		jstring getProviderAuthority();
		jstring getProviderPackage();
		jstring getQuery();
		jstring toString();
	};
} // namespace android::provider


#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace java::nio::file::attribute
{
	class UserPrincipalLookupService : public __JniBaseClass
	{
	public:
		// Fields
		
		UserPrincipalLookupService(QAndroidJniObject obj);
		// Constructors
		UserPrincipalLookupService() = default;
		
		// Methods
		QAndroidJniObject lookupPrincipalByGroupName(jstring arg0);
		QAndroidJniObject lookupPrincipalByGroupName(const QString &arg0);
		QAndroidJniObject lookupPrincipalByName(jstring arg0);
		QAndroidJniObject lookupPrincipalByName(const QString &arg0);
	};
} // namespace java::nio::file::attribute


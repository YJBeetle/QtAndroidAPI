#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace java::nio::file::attribute
{
	class UserPrincipalLookupService : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UserPrincipalLookupService(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UserPrincipalLookupService(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass lookupPrincipalByGroupName(jstring arg0);
		__JniBaseClass lookupPrincipalByName(jstring arg0);
	};
} // namespace java::nio::file::attribute


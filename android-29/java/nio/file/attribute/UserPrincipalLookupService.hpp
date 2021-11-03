#pragma once

#include "../../../../JObject.hpp"


namespace java::nio::file::attribute
{
	class UserPrincipalLookupService : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UserPrincipalLookupService(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserPrincipalLookupService(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject lookupPrincipalByGroupName(jstring arg0);
		JObject lookupPrincipalByName(jstring arg0);
	};
} // namespace java::nio::file::attribute


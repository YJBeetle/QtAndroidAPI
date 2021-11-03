#pragma once

#include "../../../../JObject.hpp"

class JString;

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
		JObject lookupPrincipalByGroupName(JString arg0);
		JObject lookupPrincipalByName(JString arg0);
	};
} // namespace java::nio::file::attribute


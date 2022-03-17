#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace java::nio::file::attribute
{
	class UserPrincipalLookupService : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserPrincipalLookupService(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserPrincipalLookupService(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject lookupPrincipalByGroupName(JString arg0) const;
		JObject lookupPrincipalByName(JString arg0) const;
	};
} // namespace java::nio::file::attribute


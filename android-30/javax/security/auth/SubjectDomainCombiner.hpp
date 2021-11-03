#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
class JString;
namespace java::security
{
	class ProtectionDomain;
}
namespace javax::security::auth
{
	class Subject;
}

namespace javax::security::auth
{
	class SubjectDomainCombiner : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SubjectDomainCombiner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubjectDomainCombiner(QJniObject obj);
		
		// Constructors
		SubjectDomainCombiner(javax::security::auth::Subject arg0);
		
		// Methods
		JArray combine(JArray arg0, JArray arg1) const;
		javax::security::auth::Subject getSubject() const;
	};
} // namespace javax::security::auth


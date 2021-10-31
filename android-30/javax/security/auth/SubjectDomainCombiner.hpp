#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class SubjectDomainCombiner : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubjectDomainCombiner(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SubjectDomainCombiner(QAndroidJniObject obj);
		
		// Constructors
		SubjectDomainCombiner(javax::security::auth::Subject arg0);
		
		// Methods
		jarray combine(jarray arg0, jarray arg1);
		javax::security::auth::Subject getSubject();
	};
} // namespace javax::security::auth


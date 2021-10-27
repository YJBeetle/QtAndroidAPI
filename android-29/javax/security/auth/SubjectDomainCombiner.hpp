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
		
		SubjectDomainCombiner(QAndroidJniObject obj);
		// Constructors
		SubjectDomainCombiner(javax::security::auth::Subject &arg0);
		SubjectDomainCombiner() = default;
		
		// Methods
		jarray combine(jarray arg0, jarray arg1);
		QAndroidJniObject getSubject();
	};
} // namespace javax::security::auth


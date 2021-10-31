#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::nio::file::attribute
{
	class AclEntry;
}
namespace java::nio::file::attribute
{
	class AclEntryType;
}

namespace java::nio::file::attribute
{
	class AclEntry_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AclEntry_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AclEntry_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::file::attribute::AclEntry build();
		java::nio::file::attribute::AclEntry_Builder setFlags(jarray arg0);
		java::nio::file::attribute::AclEntry_Builder setFlags(__JniBaseClass arg0);
		java::nio::file::attribute::AclEntry_Builder setPermissions(jarray arg0);
		java::nio::file::attribute::AclEntry_Builder setPermissions(__JniBaseClass arg0);
		java::nio::file::attribute::AclEntry_Builder setPrincipal(__JniBaseClass arg0);
		java::nio::file::attribute::AclEntry_Builder setType(java::nio::file::attribute::AclEntryType arg0);
	};
} // namespace java::nio::file::attribute


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
		
		AclEntry_Builder(QAndroidJniObject obj);
		// Constructors
		AclEntry_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setFlags(jarray arg0);
		QAndroidJniObject setFlags(__JniBaseClass arg0);
		QAndroidJniObject setPermissions(jarray arg0);
		QAndroidJniObject setPermissions(__JniBaseClass arg0);
		QAndroidJniObject setPrincipal(__JniBaseClass arg0);
		QAndroidJniObject setType(java::nio::file::attribute::AclEntryType arg0);
	};
} // namespace java::nio::file::attribute


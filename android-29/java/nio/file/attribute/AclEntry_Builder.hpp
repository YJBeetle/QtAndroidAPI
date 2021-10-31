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
		QAndroidJniObject build();
		QAndroidJniObject setFlags(jarray arg0);
		QAndroidJniObject setFlags(__JniBaseClass arg0);
		QAndroidJniObject setPermissions(jarray arg0);
		QAndroidJniObject setPermissions(__JniBaseClass arg0);
		QAndroidJniObject setPrincipal(__JniBaseClass arg0);
		QAndroidJniObject setType(java::nio::file::attribute::AclEntryType arg0);
	};
} // namespace java::nio::file::attribute


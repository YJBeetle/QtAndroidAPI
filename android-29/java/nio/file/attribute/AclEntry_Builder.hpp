#pragma once

#include "../../../../JObject.hpp"

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
	class AclEntry_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AclEntry_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AclEntry_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::file::attribute::AclEntry build();
		java::nio::file::attribute::AclEntry_Builder setFlags(jarray arg0);
		java::nio::file::attribute::AclEntry_Builder setFlags(JObject arg0);
		java::nio::file::attribute::AclEntry_Builder setPermissions(jarray arg0);
		java::nio::file::attribute::AclEntry_Builder setPermissions(JObject arg0);
		java::nio::file::attribute::AclEntry_Builder setPrincipal(JObject arg0);
		java::nio::file::attribute::AclEntry_Builder setType(java::nio::file::attribute::AclEntryType arg0);
	};
} // namespace java::nio::file::attribute


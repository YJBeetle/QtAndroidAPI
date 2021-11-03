#pragma once

#include "../../../../JObject.hpp"

class JArray;
class JArray;
class JClass;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit AclEntry_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AclEntry_Builder(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::file::attribute::AclEntry build();
		java::nio::file::attribute::AclEntry_Builder setFlags(JArray arg0);
		java::nio::file::attribute::AclEntry_Builder setFlags(JObject arg0);
		java::nio::file::attribute::AclEntry_Builder setPermissions(JArray arg0);
		java::nio::file::attribute::AclEntry_Builder setPermissions(JObject arg0);
		java::nio::file::attribute::AclEntry_Builder setPrincipal(JObject arg0);
		java::nio::file::attribute::AclEntry_Builder setType(java::nio::file::attribute::AclEntryType arg0);
	};
} // namespace java::nio::file::attribute


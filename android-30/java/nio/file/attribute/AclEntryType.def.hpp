#pragma once

#include "../../../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::nio::file::attribute
{
	class AclEntryType : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::attribute::AclEntryType ALARM();
		static java::nio::file::attribute::AclEntryType ALLOW();
		static java::nio::file::attribute::AclEntryType AUDIT();
		static java::nio::file::attribute::AclEntryType DENY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AclEntryType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AclEntryType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::nio::file::attribute::AclEntryType valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::nio::file::attribute


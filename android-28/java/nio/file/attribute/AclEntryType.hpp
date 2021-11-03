#pragma once

#include "../../../../JObject.hpp"
#include "../../../lang/Enum.hpp"


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
		
		// QJniObject forward
		template<typename ...Ts> explicit AclEntryType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AclEntryType(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::attribute::AclEntryType valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file::attribute


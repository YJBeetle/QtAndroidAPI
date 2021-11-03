#pragma once

#include "../../../../JObject.hpp"
#include "../../../lang/Enum.hpp"


namespace java::nio::file::attribute
{
	class AclEntryFlag : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::attribute::AclEntryFlag DIRECTORY_INHERIT();
		static java::nio::file::attribute::AclEntryFlag FILE_INHERIT();
		static java::nio::file::attribute::AclEntryFlag INHERIT_ONLY();
		static java::nio::file::attribute::AclEntryFlag NO_PROPAGATE_INHERIT();
		
		// QJniObject forward
		template<typename ...Ts> explicit AclEntryFlag(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AclEntryFlag(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::attribute::AclEntryFlag valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file::attribute


#pragma once

#include "../../../lang/Enum.hpp"

class JArray;
class JString;

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AclEntryFlag(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AclEntryFlag(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::attribute::AclEntryFlag valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::nio::file::attribute


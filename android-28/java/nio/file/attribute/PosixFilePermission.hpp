#pragma once

#include "../../../lang/Enum.hpp"

class JArray;
class JString;

namespace java::nio::file::attribute
{
	class PosixFilePermission : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::attribute::PosixFilePermission GROUP_EXECUTE();
		static java::nio::file::attribute::PosixFilePermission GROUP_READ();
		static java::nio::file::attribute::PosixFilePermission GROUP_WRITE();
		static java::nio::file::attribute::PosixFilePermission OTHERS_EXECUTE();
		static java::nio::file::attribute::PosixFilePermission OTHERS_READ();
		static java::nio::file::attribute::PosixFilePermission OTHERS_WRITE();
		static java::nio::file::attribute::PosixFilePermission OWNER_EXECUTE();
		static java::nio::file::attribute::PosixFilePermission OWNER_READ();
		static java::nio::file::attribute::PosixFilePermission OWNER_WRITE();
		
		// QJniObject forward
		template<typename ...Ts> explicit PosixFilePermission(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PosixFilePermission(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::attribute::PosixFilePermission valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::nio::file::attribute


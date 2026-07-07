#pragma once

#include "../../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::nio::file
{
	class StandardCopyOption : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::StandardCopyOption ATOMIC_MOVE();
		static java::nio::file::StandardCopyOption COPY_ATTRIBUTES();
		static java::nio::file::StandardCopyOption REPLACE_EXISTING();
		
		// QJniObject forward
		template<typename ...Ts> explicit StandardCopyOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		StandardCopyOption(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::nio::file::StandardCopyOption valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::nio::file


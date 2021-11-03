#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JString;

namespace java::nio::file
{
	class StandardOpenOption : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::StandardOpenOption APPEND();
		static java::nio::file::StandardOpenOption CREATE();
		static java::nio::file::StandardOpenOption CREATE_NEW();
		static java::nio::file::StandardOpenOption DELETE_ON_CLOSE();
		static java::nio::file::StandardOpenOption DSYNC();
		static java::nio::file::StandardOpenOption READ();
		static java::nio::file::StandardOpenOption SPARSE();
		static java::nio::file::StandardOpenOption SYNC();
		static java::nio::file::StandardOpenOption TRUNCATE_EXISTING();
		static java::nio::file::StandardOpenOption WRITE();
		
		// QJniObject forward
		template<typename ...Ts> explicit StandardOpenOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		StandardOpenOption(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::StandardOpenOption valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::nio::file


#pragma once

#include "../../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::nio::file
{
	class FileVisitOption : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::FileVisitOption FOLLOW_LINKS();
		
		// QJniObject forward
		template<typename ...Ts> explicit FileVisitOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		FileVisitOption(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::nio::file::FileVisitOption valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::nio::file


#pragma once

#include "../../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::nio::file
{
	class FileVisitResult : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::FileVisitResult CONTINUE();
		static java::nio::file::FileVisitResult SKIP_SIBLINGS();
		static java::nio::file::FileVisitResult SKIP_SUBTREE();
		static java::nio::file::FileVisitResult TERMINATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit FileVisitResult(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		FileVisitResult(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::nio::file::FileVisitResult valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::nio::file


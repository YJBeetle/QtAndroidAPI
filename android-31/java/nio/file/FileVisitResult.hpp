#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


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
		FileVisitResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::FileVisitResult valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file


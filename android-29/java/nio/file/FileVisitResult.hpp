#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class FileVisitResult : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CONTINUE();
		static QAndroidJniObject SKIP_SIBLINGS();
		static QAndroidJniObject SKIP_SUBTREE();
		static QAndroidJniObject TERMINATE();
		
		FileVisitResult(QAndroidJniObject obj);
		// Constructors
		FileVisitResult() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file


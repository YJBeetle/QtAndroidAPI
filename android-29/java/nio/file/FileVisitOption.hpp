#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class FileVisitOption : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FOLLOW_LINKS();
		
		FileVisitOption(QAndroidJniObject obj);
		// Constructors
		FileVisitOption() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file


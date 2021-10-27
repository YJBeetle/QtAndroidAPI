#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class StringBuilder;
}

namespace java::nio::file::attribute
{
	class PosixFilePermissions : public __JniBaseClass
	{
	public:
		// Fields
		
		PosixFilePermissions(QAndroidJniObject obj);
		// Constructors
		PosixFilePermissions() = default;
		
		// Methods
		static QAndroidJniObject asFileAttribute(__JniBaseClass arg0);
		static QAndroidJniObject fromString(jstring arg0);
		static QAndroidJniObject fromString(const QString &arg0);
		static jstring toString(__JniBaseClass arg0);
	};
} // namespace java::nio::file::attribute


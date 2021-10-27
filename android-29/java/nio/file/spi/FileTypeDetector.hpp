#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Void;
}

namespace java::nio::file::spi
{
	class FileTypeDetector : public __JniBaseClass
	{
	public:
		// Fields
		
		FileTypeDetector(QAndroidJniObject obj);
		// Constructors
		FileTypeDetector() = default;
		
		// Methods
		jstring probeContentType(__JniBaseClass arg0);
	};
} // namespace java::nio::file::spi


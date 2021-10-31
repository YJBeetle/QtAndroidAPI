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
		
		// QJniObject forward
		template<typename ...Ts> explicit FileTypeDetector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileTypeDetector(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring probeContentType(__JniBaseClass arg0);
	};
} // namespace java::nio::file::spi


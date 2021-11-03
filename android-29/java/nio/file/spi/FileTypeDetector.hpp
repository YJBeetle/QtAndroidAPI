#pragma once

#include "../../../../JObject.hpp"

class JString;
namespace java::lang
{
	class Void;
}

namespace java::nio::file::spi
{
	class FileTypeDetector : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileTypeDetector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileTypeDetector(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString probeContentType(JObject arg0) const;
	};
} // namespace java::nio::file::spi


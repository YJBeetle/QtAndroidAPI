#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../zip/ZipEntry.hpp"

namespace java::util::jar
{
	class Attributes;
}
namespace java::util::zip
{
	class ZipEntry;
}

namespace java::util::jar
{
	class JarEntry : public java::util::zip::ZipEntry
	{
	public:
		// Fields
		
		JarEntry(QAndroidJniObject obj);
		// Constructors
		JarEntry(jstring arg0);
		JarEntry(java::util::jar::JarEntry &arg0);
		JarEntry(java::util::zip::ZipEntry arg0);
		JarEntry() = default;
		
		// Methods
		QAndroidJniObject getAttributes();
		jarray getCertificates();
		jarray getCodeSigners();
		jstring getRealName();
	};
} // namespace java::util::jar


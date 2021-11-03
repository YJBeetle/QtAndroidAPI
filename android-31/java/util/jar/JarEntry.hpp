#pragma once

#include "../../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit JarEntry(const char *className, const char *sig, Ts...agv) : java::util::zip::ZipEntry(className, sig, std::forward<Ts>(agv)...) {}
		JarEntry(QJniObject obj);
		
		// Constructors
		JarEntry(jstring arg0);
		JarEntry(java::util::jar::JarEntry &arg0);
		JarEntry(java::util::zip::ZipEntry arg0);
		
		// Methods
		java::util::jar::Attributes getAttributes();
		jarray getCertificates();
		jarray getCodeSigners();
		jstring getRealName();
	};
} // namespace java::util::jar


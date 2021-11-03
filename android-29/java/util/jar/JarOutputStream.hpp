#pragma once

#include "../zip/ZipOutputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
namespace java::util::jar
{
	class Manifest;
}
namespace java::util::zip
{
	class ZipEntry;
}

namespace java::util::jar
{
	class JarOutputStream : public java::util::zip::ZipOutputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JarOutputStream(const char *className, const char *sig, Ts...agv) : java::util::zip::ZipOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		JarOutputStream(QJniObject obj);
		
		// Constructors
		JarOutputStream(java::io::OutputStream arg0);
		JarOutputStream(java::io::OutputStream arg0, java::util::jar::Manifest arg1);
		
		// Methods
		void putNextEntry(java::util::zip::ZipEntry arg0);
	};
} // namespace java::util::jar


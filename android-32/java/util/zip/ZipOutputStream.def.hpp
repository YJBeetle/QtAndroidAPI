#pragma once

#include "./DeflaterOutputStream.def.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
class JString;
namespace java::nio::charset
{
	class Charset;
}
namespace java::util
{
	class HashSet;
}
namespace java::util
{
	class Vector;
}
namespace java::util::zip
{
	class CRC32;
}
namespace java::util::zip
{
	class ZipEntry;
}

namespace java::util::zip
{
	class ZipOutputStream : public java::util::zip::DeflaterOutputStream
	{
	public:
		// Fields
		static jint DEFLATED();
		static jint STORED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZipOutputStream(const char *className, const char *sig, Ts...agv) : java::util::zip::DeflaterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		ZipOutputStream(QAndroidJniObject obj) : java::util::zip::DeflaterOutputStream(obj) {}
		
		// Constructors
		ZipOutputStream(java::io::OutputStream arg0);
		ZipOutputStream(java::io::OutputStream arg0, java::nio::charset::Charset arg1);
		
		// Methods
		void close() const;
		void closeEntry() const;
		void finish() const;
		void putNextEntry(java::util::zip::ZipEntry arg0) const;
		void setComment(JString arg0) const;
		void setLevel(jint arg0) const;
		void setMethod(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::util::zip


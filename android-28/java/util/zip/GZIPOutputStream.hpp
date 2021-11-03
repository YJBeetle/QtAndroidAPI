#pragma once

#include "./DeflaterOutputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
namespace java::util::zip
{
	class CRC32;
}

namespace java::util::zip
{
	class GZIPOutputStream : public java::util::zip::DeflaterOutputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GZIPOutputStream(const char *className, const char *sig, Ts...agv) : java::util::zip::DeflaterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		GZIPOutputStream(QJniObject obj);
		
		// Constructors
		GZIPOutputStream(java::io::OutputStream arg0);
		GZIPOutputStream(java::io::OutputStream arg0, jboolean arg1);
		GZIPOutputStream(java::io::OutputStream arg0, jint arg1);
		GZIPOutputStream(java::io::OutputStream arg0, jint arg1, jboolean arg2);
		
		// Methods
		void finish() const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::util::zip


#pragma once

#include "../../io/FilterOutputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
namespace java::util::zip
{
	class Deflater;
}

namespace java::util::zip
{
	class DeflaterOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeflaterOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		DeflaterOutputStream(QJniObject obj);
		
		// Constructors
		DeflaterOutputStream(java::io::OutputStream arg0);
		DeflaterOutputStream(java::io::OutputStream arg0, jboolean arg1);
		DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1);
		DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jboolean arg2);
		DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jint arg2);
		DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jint arg2, jboolean arg3);
		
		// Methods
		void close() const;
		void finish() const;
		void flush() const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::util::zip


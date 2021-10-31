#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/FilterOutputStream.hpp"

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
		
		DeflaterOutputStream(QAndroidJniObject obj);
		// Constructors
		DeflaterOutputStream(java::io::OutputStream arg0);
		DeflaterOutputStream(java::io::OutputStream arg0, jboolean arg1);
		DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1);
		DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jboolean arg2);
		DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jint arg2);
		DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jint arg2, jboolean arg3);
		DeflaterOutputStream() = default;
		
		// Methods
		void close();
		void finish();
		void flush();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip


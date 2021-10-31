#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/FilterOutputStream.hpp"
#include "./DeflaterOutputStream.hpp"

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
		
		GZIPOutputStream(QAndroidJniObject obj);
		// Constructors
		GZIPOutputStream(java::io::OutputStream arg0);
		GZIPOutputStream(java::io::OutputStream arg0, jboolean arg1);
		GZIPOutputStream(java::io::OutputStream arg0, jint arg1);
		GZIPOutputStream(java::io::OutputStream arg0, jint arg1, jboolean arg2);
		GZIPOutputStream() = default;
		
		// Methods
		void finish();
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip


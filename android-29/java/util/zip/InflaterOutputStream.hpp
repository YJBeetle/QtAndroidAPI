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
	class Inflater;
}

namespace java::util::zip
{
	class InflaterOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		InflaterOutputStream(QAndroidJniObject obj);
		// Constructors
		InflaterOutputStream(java::io::OutputStream arg0);
		InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1);
		InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1, jint arg2);
		InflaterOutputStream() = default;
		
		// Methods
		void close();
		void finish();
		void flush();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip


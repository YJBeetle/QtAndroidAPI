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
	class CheckedOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		CheckedOutputStream(QAndroidJniObject obj);
		// Constructors
		CheckedOutputStream(java::io::OutputStream arg0, __JniBaseClass arg1);
		CheckedOutputStream() = default;
		
		// Methods
		QAndroidJniObject getChecksum();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip


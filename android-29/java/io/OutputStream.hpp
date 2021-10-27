#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::io
{
	class OutputStream : public __JniBaseClass
	{
	public:
		// Fields
		
		OutputStream(QAndroidJniObject obj);
		// Constructors
		OutputStream();
		
		// Methods
		static QAndroidJniObject nullOutputStream();
		void close();
		void flush();
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io


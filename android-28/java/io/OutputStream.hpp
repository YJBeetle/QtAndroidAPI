#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::io
{
	class OutputStream : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OutputStream(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OutputStream(QAndroidJniObject obj);
		
		// Constructors
		OutputStream();
		
		// Methods
		static java::io::OutputStream nullOutputStream();
		void close();
		void flush();
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io


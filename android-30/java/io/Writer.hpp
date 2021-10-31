#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::io
{
	class Writer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Writer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Writer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::io::Writer nullWriter();
		java::io::Writer append(jchar arg0);
		java::io::Writer append(jstring arg0);
		java::io::Writer append(jstring arg0, jint arg1, jint arg2);
		void close();
		void flush();
		void write(jcharArray arg0);
		void write(jint arg0);
		void write(jstring arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0, jint arg1, jint arg2);
	};
} // namespace java::io


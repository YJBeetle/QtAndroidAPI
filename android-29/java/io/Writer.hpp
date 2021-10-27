#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::io
{
	class Writer : public __JniBaseClass
	{
	public:
		// Fields
		
		Writer(QAndroidJniObject obj);
		// Constructors
		Writer() = default;
		
		// Methods
		static QAndroidJniObject nullWriter();
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(const QString &arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(const QString &arg0, jint arg1, jint arg2);
		void close();
		void flush();
		void write(jcharArray arg0);
		void write(jint arg0);
		void write(jstring arg0);
		void write(const QString &arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0, jint arg1, jint arg2);
		void write(const QString &arg0, jint arg1, jint arg2);
	};
} // namespace java::io


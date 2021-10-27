#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::lang
{
	class StringBuffer;
}
namespace java::util::jar
{
	class Attributes;
}

namespace java::util::jar
{
	class Manifest : public __JniBaseClass
	{
	public:
		// Fields
		
		Manifest(QAndroidJniObject obj);
		// Constructors
		Manifest();
		Manifest(java::io::InputStream &arg0);
		Manifest(java::util::jar::Manifest &arg0);
		
		// Methods
		void clear();
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject getAttributes(jstring arg0);
		QAndroidJniObject getAttributes(const QString &arg0);
		QAndroidJniObject getEntries();
		QAndroidJniObject getMainAttributes();
		jint hashCode();
		void read(java::io::InputStream arg0);
		void write(java::io::OutputStream arg0);
	};
} // namespace java::util::jar


#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class Reader;
}

namespace javax::xml::transform::stream
{
	class StreamSource : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		StreamSource(QAndroidJniObject obj);
		// Constructors
		StreamSource();
		StreamSource(java::io::File &arg0);
		StreamSource(java::io::InputStream &arg0);
		StreamSource(java::io::Reader &arg0);
		StreamSource(jstring &arg0);
		StreamSource(const QString &arg0);
		StreamSource(java::io::InputStream &arg0, jstring &arg1);
		StreamSource(java::io::InputStream &arg0, const QString &arg1);
		StreamSource(java::io::Reader &arg0, jstring &arg1);
		StreamSource(java::io::Reader &arg0, const QString &arg1);
		
		// Methods
		QAndroidJniObject getInputStream();
		jstring getPublicId();
		QAndroidJniObject getReader();
		jstring getSystemId();
		jboolean isEmpty();
		void setInputStream(java::io::InputStream arg0);
		void setPublicId(jstring arg0);
		void setPublicId(const QString &arg0);
		void setReader(java::io::Reader arg0);
		void setSystemId(java::io::File arg0);
		void setSystemId(jstring arg0);
		void setSystemId(const QString &arg0);
	};
} // namespace javax::xml::transform::stream


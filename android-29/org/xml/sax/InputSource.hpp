#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class Reader;
}

namespace org::xml::sax
{
	class InputSource : public __JniBaseClass
	{
	public:
		// Fields
		
		InputSource(QAndroidJniObject obj);
		// Constructors
		InputSource();
		InputSource(java::io::InputStream &arg0);
		InputSource(java::io::Reader &arg0);
		InputSource(jstring &arg0);
		InputSource(const QString &arg0);
		
		// Methods
		QAndroidJniObject getByteStream();
		QAndroidJniObject getCharacterStream();
		jstring getEncoding();
		jstring getPublicId();
		jstring getSystemId();
		jboolean isEmpty();
		void setByteStream(java::io::InputStream arg0);
		void setCharacterStream(java::io::Reader arg0);
		void setEncoding(jstring arg0);
		void setEncoding(const QString &arg0);
		void setPublicId(jstring arg0);
		void setPublicId(const QString &arg0);
		void setSystemId(jstring arg0);
		void setSystemId(const QString &arg0);
	};
} // namespace org::xml::sax


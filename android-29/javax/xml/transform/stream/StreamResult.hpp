#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class Writer;
}

namespace javax::xml::transform::stream
{
	class StreamResult : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		StreamResult(QAndroidJniObject obj);
		// Constructors
		StreamResult();
		StreamResult(java::io::File &arg0);
		StreamResult(java::io::OutputStream &arg0);
		StreamResult(java::io::Writer &arg0);
		StreamResult(jstring &arg0);
		StreamResult(const QString &arg0);
		
		// Methods
		QAndroidJniObject getOutputStream();
		jstring getSystemId();
		QAndroidJniObject getWriter();
		void setOutputStream(java::io::OutputStream arg0);
		void setSystemId(java::io::File arg0);
		void setSystemId(jstring arg0);
		void setSystemId(const QString &arg0);
		void setWriter(java::io::Writer arg0);
	};
} // namespace javax::xml::transform::stream


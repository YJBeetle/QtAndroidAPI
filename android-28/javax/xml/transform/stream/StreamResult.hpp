#pragma once

#include "../../../../JObject.hpp"

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
class JString;

namespace javax::xml::transform::stream
{
	class StreamResult : public JObject
	{
	public:
		// Fields
		static JString FEATURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StreamResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StreamResult(QAndroidJniObject obj);
		
		// Constructors
		StreamResult();
		StreamResult(java::io::File arg0);
		StreamResult(java::io::OutputStream arg0);
		StreamResult(java::io::Writer arg0);
		StreamResult(JString arg0);
		
		// Methods
		java::io::OutputStream getOutputStream() const;
		JString getSystemId() const;
		java::io::Writer getWriter() const;
		void setOutputStream(java::io::OutputStream arg0) const;
		void setSystemId(java::io::File arg0) const;
		void setSystemId(JString arg0) const;
		void setWriter(java::io::Writer arg0) const;
	};
} // namespace javax::xml::transform::stream


#pragma once

#include "../../../../JObject.hpp"

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
class JString;

namespace javax::xml::transform::stream
{
	class StreamSource : public JObject
	{
	public:
		// Fields
		static JString FEATURE();
		
		// QJniObject forward
		template<typename ...Ts> explicit StreamSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StreamSource(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		StreamSource();
		StreamSource(java::io::File arg0);
		StreamSource(java::io::InputStream arg0);
		StreamSource(java::io::Reader arg0);
		StreamSource(JString arg0);
		StreamSource(java::io::InputStream arg0, JString arg1);
		StreamSource(java::io::Reader arg0, JString arg1);
		
		// Methods
		java::io::InputStream getInputStream() const;
		JString getPublicId() const;
		java::io::Reader getReader() const;
		JString getSystemId() const;
		jboolean isEmpty() const;
		void setInputStream(java::io::InputStream arg0) const;
		void setPublicId(JString arg0) const;
		void setReader(java::io::Reader arg0) const;
		void setSystemId(java::io::File arg0) const;
		void setSystemId(JString arg0) const;
	};
} // namespace javax::xml::transform::stream


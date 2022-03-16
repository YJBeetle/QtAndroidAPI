#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class Reader;
}
class JString;

namespace org::xml::sax
{
	class InputSource : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputSource(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		InputSource();
		InputSource(java::io::InputStream arg0);
		InputSource(java::io::Reader arg0);
		InputSource(JString arg0);
		
		// Methods
		java::io::InputStream getByteStream() const;
		java::io::Reader getCharacterStream() const;
		JString getEncoding() const;
		JString getPublicId() const;
		JString getSystemId() const;
		jboolean isEmpty() const;
		void setByteStream(java::io::InputStream arg0) const;
		void setCharacterStream(java::io::Reader arg0) const;
		void setEncoding(JString arg0) const;
		void setPublicId(JString arg0) const;
		void setSystemId(JString arg0) const;
	};
} // namespace org::xml::sax


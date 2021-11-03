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
		InputSource(QAndroidJniObject obj);
		
		// Constructors
		InputSource();
		InputSource(java::io::InputStream arg0);
		InputSource(java::io::Reader arg0);
		InputSource(JString arg0);
		
		// Methods
		java::io::InputStream getByteStream();
		java::io::Reader getCharacterStream();
		JString getEncoding();
		JString getPublicId();
		JString getSystemId();
		jboolean isEmpty();
		void setByteStream(java::io::InputStream arg0);
		void setCharacterStream(java::io::Reader arg0);
		void setEncoding(JString arg0);
		void setPublicId(JString arg0);
		void setSystemId(JString arg0);
	};
} // namespace org::xml::sax


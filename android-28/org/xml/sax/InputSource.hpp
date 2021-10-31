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
		
		// QJniObject forward
		template<typename ...Ts> explicit InputSource(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InputSource(QJniObject obj);
		
		// Constructors
		InputSource();
		InputSource(java::io::InputStream arg0);
		InputSource(java::io::Reader arg0);
		InputSource(jstring arg0);
		
		// Methods
		java::io::InputStream getByteStream();
		java::io::Reader getCharacterStream();
		jstring getEncoding();
		jstring getPublicId();
		jstring getSystemId();
		jboolean isEmpty();
		void setByteStream(java::io::InputStream arg0);
		void setCharacterStream(java::io::Reader arg0);
		void setEncoding(jstring arg0);
		void setPublicId(jstring arg0);
		void setSystemId(jstring arg0);
	};
} // namespace org::xml::sax


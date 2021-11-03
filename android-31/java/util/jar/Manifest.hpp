#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JObject;
class JString;
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
	class Manifest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Manifest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Manifest(QJniObject obj);
		
		// Constructors
		Manifest();
		Manifest(java::io::InputStream arg0);
		Manifest(java::util::jar::Manifest &arg0);
		
		// Methods
		void clear() const;
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		java::util::jar::Attributes getAttributes(JString arg0) const;
		JObject getEntries() const;
		java::util::jar::Attributes getMainAttributes() const;
		jint hashCode() const;
		void read(java::io::InputStream arg0) const;
		void write(java::io::OutputStream arg0) const;
	};
} // namespace java::util::jar


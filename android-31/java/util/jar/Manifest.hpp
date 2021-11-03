#pragma once

#include "../../../JObject.hpp"

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
	class Manifest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Manifest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Manifest(QAndroidJniObject obj);
		
		// Constructors
		Manifest();
		Manifest(java::io::InputStream arg0);
		Manifest(java::util::jar::Manifest &arg0);
		
		// Methods
		void clear();
		jobject clone();
		jboolean equals(jobject arg0);
		java::util::jar::Attributes getAttributes(jstring arg0);
		JObject getEntries();
		java::util::jar::Attributes getMainAttributes();
		jint hashCode();
		void read(java::io::InputStream arg0);
		void write(java::io::OutputStream arg0);
	};
} // namespace java::util::jar


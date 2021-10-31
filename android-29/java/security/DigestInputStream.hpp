#pragma once

#include "../../__JniBaseClass.hpp"
#include "../io/InputStream.hpp"
#include "../io/FilterInputStream.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::security
{
	class MessageDigest;
}

namespace java::security
{
	class DigestInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DigestInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		DigestInputStream(QAndroidJniObject obj);
		
		// Constructors
		DigestInputStream(java::io::InputStream arg0, java::security::MessageDigest arg1);
		
		// Methods
		QAndroidJniObject getMessageDigest();
		void on(jboolean arg0);
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void setMessageDigest(java::security::MessageDigest arg0);
		jstring toString();
	};
} // namespace java::security


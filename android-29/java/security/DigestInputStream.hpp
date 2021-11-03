#pragma once

#include "../io/FilterInputStream.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit DigestInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		DigestInputStream(QJniObject obj);
		
		// Constructors
		DigestInputStream(java::io::InputStream arg0, java::security::MessageDigest arg1);
		
		// Methods
		java::security::MessageDigest getMessageDigest();
		void on(jboolean arg0);
		jint read();
		jint read(JByteArray arg0, jint arg1, jint arg2);
		void setMessageDigest(java::security::MessageDigest arg0);
		JString toString();
	};
} // namespace java::security


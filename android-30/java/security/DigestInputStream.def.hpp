#pragma once

#include "../io/FilterInputStream.def.hpp"

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
		DigestInputStream(QJniObject obj) : java::io::FilterInputStream(obj) {}
		
		// Constructors
		DigestInputStream(java::io::InputStream arg0, java::security::MessageDigest arg1);
		
		// Methods
		java::security::MessageDigest getMessageDigest() const;
		void on(jboolean arg0) const;
		jint read() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		void setMessageDigest(java::security::MessageDigest arg0) const;
		JString toString() const;
	};
} // namespace java::security


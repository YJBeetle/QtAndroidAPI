#pragma once

#include "../io/FilterOutputStream.def.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
class JString;
namespace java::security
{
	class MessageDigest;
}

namespace java::security
{
	class DigestOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DigestOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		DigestOutputStream(QAndroidJniObject obj) : java::io::FilterOutputStream(obj) {}
		
		// Constructors
		DigestOutputStream(java::io::OutputStream arg0, java::security::MessageDigest arg1);
		
		// Methods
		java::security::MessageDigest getMessageDigest() const;
		void on(jboolean arg0) const;
		void setMessageDigest(java::security::MessageDigest arg0) const;
		JString toString() const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::security


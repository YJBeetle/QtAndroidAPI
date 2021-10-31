#pragma once

#include "../../__JniBaseClass.hpp"
#include "../io/OutputStream.hpp"
#include "../io/FilterOutputStream.hpp"

namespace java::io
{
	class OutputStream;
}
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
		DigestOutputStream(QAndroidJniObject obj);
		
		// Constructors
		DigestOutputStream(java::io::OutputStream arg0, java::security::MessageDigest arg1);
		
		// Methods
		QAndroidJniObject getMessageDigest();
		void on(jboolean arg0);
		void setMessageDigest(java::security::MessageDigest arg0);
		jstring toString();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::security


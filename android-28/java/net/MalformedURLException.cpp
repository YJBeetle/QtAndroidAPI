#include "./MalformedURLException.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	MalformedURLException::MalformedURLException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	MalformedURLException::MalformedURLException()
		: java::io::IOException(
			"java.net.MalformedURLException",
			"()V"
		) {}
	MalformedURLException::MalformedURLException(jstring arg0)
		: java::io::IOException(
			"java.net.MalformedURLException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::net


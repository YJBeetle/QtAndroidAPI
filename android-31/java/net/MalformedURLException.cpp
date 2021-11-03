#include "../../JString.hpp"
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
	MalformedURLException::MalformedURLException(JString arg0)
		: java::io::IOException(
			"java.net.MalformedURLException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net


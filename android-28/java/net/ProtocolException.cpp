#include "../../JString.hpp"
#include "./ProtocolException.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	ProtocolException::ProtocolException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	ProtocolException::ProtocolException()
		: java::io::IOException(
			"java.net.ProtocolException",
			"()V"
		) {}
	ProtocolException::ProtocolException(JString arg0)
		: java::io::IOException(
			"java.net.ProtocolException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net


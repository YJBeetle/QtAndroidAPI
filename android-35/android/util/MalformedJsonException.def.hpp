#pragma once

#include "../../java/io/IOException.def.hpp"

class JString;

namespace android::util
{
	class MalformedJsonException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MalformedJsonException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		MalformedJsonException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		MalformedJsonException(JString arg0);
		
		// Methods
	};
} // namespace android::util


#pragma once

#include "../../java/io/IOException.def.hpp"

class JString;

namespace android::util
{
	class Base64DataException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Base64DataException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		Base64DataException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		Base64DataException(JString arg0);
		
		// Methods
	};
} // namespace android::util


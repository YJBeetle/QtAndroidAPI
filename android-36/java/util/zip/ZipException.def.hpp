#pragma once

#include "../../io/IOException.def.hpp"

class JString;

namespace java::util::zip
{
	class ZipException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZipException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		ZipException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		ZipException();
		ZipException(JString arg0);
		
		// Methods
	};
} // namespace java::util::zip


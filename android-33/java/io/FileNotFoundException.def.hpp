#pragma once

#include "./IOException.def.hpp"

class JString;

namespace java::io
{
	class FileNotFoundException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileNotFoundException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		FileNotFoundException(QAndroidJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		FileNotFoundException();
		FileNotFoundException(JString arg0);
		
		// Methods
	};
} // namespace java::io


#pragma once

#include "./IOException.hpp"

class JString;

namespace java::io
{
	class FileNotFoundException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileNotFoundException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		FileNotFoundException(QJniObject obj);
		
		// Constructors
		FileNotFoundException();
		FileNotFoundException(JString arg0);
		
		// Methods
	};
} // namespace java::io


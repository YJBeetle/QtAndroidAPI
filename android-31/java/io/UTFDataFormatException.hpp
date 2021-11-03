#pragma once

#include "./IOException.hpp"

class JString;

namespace java::io
{
	class UTFDataFormatException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UTFDataFormatException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		UTFDataFormatException(QAndroidJniObject obj);
		
		// Constructors
		UTFDataFormatException();
		UTFDataFormatException(JString arg0);
		
		// Methods
	};
} // namespace java::io


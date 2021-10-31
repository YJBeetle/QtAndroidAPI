#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"


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
		UTFDataFormatException(jstring arg0);
		
		// Methods
	};
} // namespace java::io


#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::zip
{
	class DataFormatException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DataFormatException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		DataFormatException(QAndroidJniObject obj);
		
		// Constructors
		DataFormatException();
		DataFormatException(jstring arg0);
		
		// Methods
	};
} // namespace java::util::zip


#pragma once

#include "../../lang/Exception.def.hpp"

class JString;

namespace java::util::zip
{
	class DataFormatException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DataFormatException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		DataFormatException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		DataFormatException();
		DataFormatException(JString arg0);
		
		// Methods
	};
} // namespace java::util::zip


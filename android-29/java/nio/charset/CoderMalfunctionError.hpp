#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Error.hpp"

namespace java::lang
{
	class Exception;
}

namespace java::nio::charset
{
	class CoderMalfunctionError : public java::lang::Error
	{
	public:
		// Fields
		
		CoderMalfunctionError(QAndroidJniObject obj);
		// Constructors
		CoderMalfunctionError(java::lang::Exception arg0);
		CoderMalfunctionError() = default;
		
		// Methods
	};
} // namespace java::nio::charset


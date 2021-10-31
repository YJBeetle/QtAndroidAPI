#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Error.hpp"
#include "../../lang/VirtualMachineError.hpp"
#include "../../lang/InternalError.hpp"


namespace java::util::zip
{
	class ZipError : public java::lang::InternalError
	{
	public:
		// Fields
		
		ZipError(QAndroidJniObject obj);
		// Constructors
		ZipError(jstring arg0);
		ZipError() = default;
		
		// Methods
	};
} // namespace java::util::zip


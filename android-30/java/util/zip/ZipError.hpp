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
		
		// QJniObject forward
		template<typename ...Ts> explicit ZipError(const char *className, const char *sig, Ts...agv) : java::lang::InternalError(className, sig, std::forward<Ts>(agv)...) {}
		ZipError(QJniObject obj);
		
		// Constructors
		ZipError(jstring arg0);
		
		// Methods
	};
} // namespace java::util::zip


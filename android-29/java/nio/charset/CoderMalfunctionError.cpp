#include "../../lang/Exception.hpp"
#include "./CoderMalfunctionError.hpp"

namespace java::nio::charset
{
	// Fields
	
	// QJniObject forward
	CoderMalfunctionError::CoderMalfunctionError(QJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	CoderMalfunctionError::CoderMalfunctionError(java::lang::Exception arg0)
		: java::lang::Error(
			"java.nio.charset.CoderMalfunctionError",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace java::nio::charset


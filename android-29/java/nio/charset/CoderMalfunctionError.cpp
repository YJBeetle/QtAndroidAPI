#include "../../lang/Exception.hpp"
#include "./CoderMalfunctionError.hpp"

namespace java::nio::charset
{
	// Fields
	
	CoderMalfunctionError::CoderMalfunctionError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CoderMalfunctionError::CoderMalfunctionError(java::lang::Exception &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.CoderMalfunctionError",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
} // namespace java::nio::charset


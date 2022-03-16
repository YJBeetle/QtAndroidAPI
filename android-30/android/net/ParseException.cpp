#include "../../JString.hpp"
#include "./ParseException.hpp"

namespace android::net
{
	// Fields
	JString ParseException::response()
	{
		return getObjectField(
			"response",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net


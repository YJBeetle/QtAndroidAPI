#include "../../JString.hpp"
#include "./Prediction.hpp"

namespace android::gesture
{
	// Fields
	JString Prediction::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	jdouble Prediction::score()
	{
		return getField<jdouble>(
			"score"
		);
	}
	
	// Constructors
	
	// Methods
	JString Prediction::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::gesture


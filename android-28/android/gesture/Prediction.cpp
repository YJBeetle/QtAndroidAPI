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
	
	// QJniObject forward
	Prediction::Prediction(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString Prediction::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::gesture


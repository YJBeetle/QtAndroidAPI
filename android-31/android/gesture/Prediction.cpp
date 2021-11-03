#include "./Prediction.hpp"

namespace android::gesture
{
	// Fields
	jstring Prediction::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble Prediction::score()
	{
		return getField<jdouble>(
			"score"
		);
	}
	
	// QAndroidJniObject forward
	Prediction::Prediction(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring Prediction::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::gesture


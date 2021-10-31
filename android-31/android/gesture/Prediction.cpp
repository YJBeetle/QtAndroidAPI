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
	
	// QJniObject forward
	Prediction::Prediction(QJniObject obj) : __JniBaseClass(obj) {}
	
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


#include "./Prediction.hpp"

namespace android::gesture
{
	// Fields
	jstring Prediction::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble Prediction::score()
	{
		return __thiz.getField<jdouble>(
			"score"
		);
	}
	
	Prediction::Prediction(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring Prediction::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::gesture


#pragma once

#ifndef ANDROID_GESTURE_PREDICTION
#define ANDROID_GESTURE_PREDICTION

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::gesture
{
	class Prediction : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject name();
		jdouble score();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
	};
} // namespace __jni_impl::android::gesture


namespace __jni_impl::android::gesture
{
	// Fields
	QAndroidJniObject Prediction::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;");
	}
	jdouble Prediction::score()
	{
		return __thiz.getField<jdouble>(
			"score");
	}
	
	// Constructors
	void Prediction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.gesture.Prediction",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Prediction::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::gesture

namespace android::gesture
{
	class Prediction : public __jni_impl::android::gesture::Prediction
	{
	public:
		Prediction(QAndroidJniObject obj) { __thiz = obj; }
		Prediction()
		{
			__constructor();
		}
	};
} // namespace android::gesture

#endif // ANDROID_GESTURE_PREDICTION


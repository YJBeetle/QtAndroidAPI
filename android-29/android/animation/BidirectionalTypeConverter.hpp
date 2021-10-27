#pragma once

#include "../../__JniBaseClass.hpp"
#include "./TypeConverter.hpp"


namespace __jni_impl::android::animation
{
	class BidirectionalTypeConverter : public __jni_impl::android::animation::TypeConverter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jclass arg0, jclass arg1);
		
		// Methods
		jobject convertBack(jobject arg0);
		QAndroidJniObject invert();
	};
} // namespace __jni_impl::android::animation


namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void BidirectionalTypeConverter::__constructor(jclass arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.animation.BidirectionalTypeConverter",
			"(Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jobject BidirectionalTypeConverter::convertBack(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"convertBack",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject BidirectionalTypeConverter::invert()
	{
		return __thiz.callObjectMethod(
			"invert",
			"()Landroid/animation/BidirectionalTypeConverter;"
		);
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class BidirectionalTypeConverter : public __jni_impl::android::animation::BidirectionalTypeConverter
	{
	public:
		BidirectionalTypeConverter(QAndroidJniObject obj) { __thiz = obj; }
		BidirectionalTypeConverter(jclass arg0, jclass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::animation


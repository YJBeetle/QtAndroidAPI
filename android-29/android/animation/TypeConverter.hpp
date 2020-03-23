#pragma once

#ifndef ANDROID_ANIMATION_TYPECONVERTER
#define ANDROID_ANIMATION_TYPECONVERTER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::animation
{
	class TypeConverter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jclass arg0, jclass arg1);
		
		// Methods
		QAndroidJniObject convert(jobject arg0);
	};
} // namespace __jni_impl::android::animation


namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void TypeConverter::__constructor(jclass arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.animation.TypeConverter",
			"(Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject TypeConverter::convert(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"convert",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class TypeConverter : public __jni_impl::android::animation::TypeConverter
	{
	public:
		TypeConverter(QAndroidJniObject obj) { __thiz = obj; }
		TypeConverter(jclass arg0, jclass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_TYPECONVERTER


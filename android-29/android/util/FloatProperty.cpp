#include "../../java/lang/Float.hpp"
#include "./FloatProperty.hpp"

namespace android::util
{
	// Fields
	
	FloatProperty::FloatProperty(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FloatProperty::FloatProperty(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.FloatProperty",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	void FloatProperty::set(jobject arg0, java::lang::Float arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Float;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void FloatProperty::set(jobject arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void FloatProperty::setValue(jobject arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;F)V",
			arg0,
			arg1
		);
	}
} // namespace android::util


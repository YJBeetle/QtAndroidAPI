#include "../../java/lang/Integer.hpp"
#include "./IntProperty.hpp"

namespace android::util
{
	// Fields
	
	IntProperty::IntProperty(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IntProperty::IntProperty(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.IntProperty",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IntProperty::IntProperty(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.IntProperty",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	void IntProperty::set(jobject arg0, java::lang::Integer arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Integer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void IntProperty::set(jobject arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void IntProperty::setValue(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
} // namespace android::util


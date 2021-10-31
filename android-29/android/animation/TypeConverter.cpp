#include "./TypeConverter.hpp"

namespace android::animation
{
	// Fields
	
	TypeConverter::TypeConverter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TypeConverter::TypeConverter(jclass arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.animation.TypeConverter",
			"(Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jobject TypeConverter::convert(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"convert",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
} // namespace android::animation


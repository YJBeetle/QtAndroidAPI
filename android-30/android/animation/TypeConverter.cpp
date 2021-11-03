#include "./TypeConverter.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	TypeConverter::TypeConverter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TypeConverter::TypeConverter(jclass arg0, jclass arg1)
		: JObject(
			"android.animation.TypeConverter",
			"(Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jobject TypeConverter::convert(jobject arg0)
	{
		return callObjectMethod(
			"convert",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
} // namespace android::animation


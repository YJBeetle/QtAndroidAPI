#include "./TypeConverter.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	TypeConverter::TypeConverter(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TypeConverter::TypeConverter(jclass arg0, jclass arg1)
		: __JniBaseClass(
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


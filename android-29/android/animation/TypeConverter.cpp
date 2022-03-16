#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./TypeConverter.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	TypeConverter::TypeConverter(JClass arg0, JClass arg1)
		: JObject(
			"android.animation.TypeConverter",
			"(Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0.object<jclass>(),
			arg1.object<jclass>()
		) {}
	
	// Methods
	JObject TypeConverter::convert(JObject arg0) const
	{
		return callObjectMethod(
			"convert",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
} // namespace android::animation


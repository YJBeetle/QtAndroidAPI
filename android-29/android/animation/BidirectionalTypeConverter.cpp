#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./BidirectionalTypeConverter.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	BidirectionalTypeConverter::BidirectionalTypeConverter(QAndroidJniObject obj) : android::animation::TypeConverter(obj) {}
	
	// Constructors
	BidirectionalTypeConverter::BidirectionalTypeConverter(JClass arg0, JClass arg1)
		: android::animation::TypeConverter(
			"android.animation.BidirectionalTypeConverter",
			"(Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0.object<jclass>(),
			arg1.object<jclass>()
		) {}
	
	// Methods
	JObject BidirectionalTypeConverter::convertBack(JObject arg0)
	{
		return callObjectMethod(
			"convertBack",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	android::animation::BidirectionalTypeConverter BidirectionalTypeConverter::invert()
	{
		return callObjectMethod(
			"invert",
			"()Landroid/animation/BidirectionalTypeConverter;"
		);
	}
} // namespace android::animation


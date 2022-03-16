#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./BidirectionalTypeConverter.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	BidirectionalTypeConverter::BidirectionalTypeConverter(JClass arg0, JClass arg1)
		: android::animation::TypeConverter(
			"android.animation.BidirectionalTypeConverter",
			"(Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0.object<jclass>(),
			arg1.object<jclass>()
		) {}
	
	// Methods
	JObject BidirectionalTypeConverter::convertBack(JObject arg0) const
	{
		return callObjectMethod(
			"convertBack",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	android::animation::BidirectionalTypeConverter BidirectionalTypeConverter::invert() const
	{
		return callObjectMethod(
			"invert",
			"()Landroid/animation/BidirectionalTypeConverter;"
		);
	}
} // namespace android::animation


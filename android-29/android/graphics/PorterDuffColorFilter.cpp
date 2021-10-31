#include "./PorterDuff_Mode.hpp"
#include "./PorterDuffColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	PorterDuffColorFilter::PorterDuffColorFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PorterDuffColorFilter::PorterDuffColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PorterDuffColorFilter",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean PorterDuffColorFilter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PorterDuffColorFilter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics


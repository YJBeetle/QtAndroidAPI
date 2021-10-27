#include "./Rect.hpp"
#include "./Region.hpp"
#include "./RegionIterator.hpp"

namespace android::graphics
{
	// Fields
	
	RegionIterator::RegionIterator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RegionIterator::RegionIterator(android::graphics::Region &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RegionIterator",
			"(Landroid/graphics/Region;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean RegionIterator::next(android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"next",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics


#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Region;
}

namespace __jni_impl::android::graphics
{
	class RegionIterator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Region arg0);
		
		// Methods
		jboolean next(__jni_impl::android::graphics::Rect arg0);
	};
} // namespace __jni_impl::android::graphics

#include "Rect.hpp"
#include "Region.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void RegionIterator::__constructor(__jni_impl::android::graphics::Region arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RegionIterator",
			"(Landroid/graphics/Region;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean RegionIterator::next(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"next",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class RegionIterator : public __jni_impl::android::graphics::RegionIterator
	{
	public:
		RegionIterator(QAndroidJniObject obj) { __thiz = obj; }
		RegionIterator(__jni_impl::android::graphics::Region arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics


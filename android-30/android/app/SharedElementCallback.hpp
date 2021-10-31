#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class RectF;
}
namespace android::view
{
	class View;
}

namespace android::app
{
	class SharedElementCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SharedElementCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SharedElementCallback(QAndroidJniObject obj);
		
		// Constructors
		SharedElementCallback();
		
		// Methods
		__JniBaseClass onCaptureSharedElementSnapshot(android::view::View arg0, android::graphics::Matrix arg1, android::graphics::RectF arg2);
		android::view::View onCreateSnapshotView(android::content::Context arg0, __JniBaseClass arg1);
		void onMapSharedElements(__JniBaseClass arg0, __JniBaseClass arg1);
		void onRejectSharedElements(__JniBaseClass arg0);
		void onSharedElementEnd(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void onSharedElementStart(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void onSharedElementsArrived(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
	};
} // namespace android::app


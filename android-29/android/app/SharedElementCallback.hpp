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
		
		SharedElementCallback(QAndroidJniObject obj);
		// Constructors
		SharedElementCallback();
		
		// Methods
		QAndroidJniObject onCaptureSharedElementSnapshot(android::view::View arg0, android::graphics::Matrix arg1, android::graphics::RectF arg2);
		QAndroidJniObject onCreateSnapshotView(android::content::Context arg0, __JniBaseClass arg1);
		void onMapSharedElements(__JniBaseClass arg0, __JniBaseClass arg1);
		void onRejectSharedElements(__JniBaseClass arg0);
		void onSharedElementEnd(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void onSharedElementStart(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void onSharedElementsArrived(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
	};
} // namespace android::app


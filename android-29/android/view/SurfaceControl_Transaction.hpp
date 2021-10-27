#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class SurfaceControl;
}

namespace android::view
{
	class SurfaceControl_Transaction : public __JniBaseClass
	{
	public:
		// Fields
		
		SurfaceControl_Transaction(QAndroidJniObject obj);
		// Constructors
		SurfaceControl_Transaction();
		
		// Methods
		void apply();
		void close();
		QAndroidJniObject merge(android::view::SurfaceControl_Transaction arg0);
		QAndroidJniObject reparent(android::view::SurfaceControl arg0, android::view::SurfaceControl arg1);
		QAndroidJniObject setAlpha(android::view::SurfaceControl arg0, jfloat arg1);
		QAndroidJniObject setBufferSize(android::view::SurfaceControl arg0, jint arg1, jint arg2);
		QAndroidJniObject setGeometry(android::view::SurfaceControl arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, jint arg3);
		QAndroidJniObject setLayer(android::view::SurfaceControl arg0, jint arg1);
		QAndroidJniObject setVisibility(android::view::SurfaceControl arg0, jboolean arg1);
	};
} // namespace android::view


#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class SurfaceControl;
}

namespace android::view
{
	class SurfaceControl_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		SurfaceControl_Builder(QAndroidJniObject obj);
		// Constructors
		SurfaceControl_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBufferSize(jint arg0, jint arg1);
		QAndroidJniObject setFormat(jint arg0);
		QAndroidJniObject setName(jstring arg0);
		QAndroidJniObject setName(const QString &arg0);
		QAndroidJniObject setOpaque(jboolean arg0);
		QAndroidJniObject setParent(android::view::SurfaceControl arg0);
	};
} // namespace android::view


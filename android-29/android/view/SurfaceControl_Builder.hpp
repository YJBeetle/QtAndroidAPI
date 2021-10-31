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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SurfaceControl_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl_Builder(QAndroidJniObject obj);
		
		// Constructors
		SurfaceControl_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBufferSize(jint arg0, jint arg1);
		QAndroidJniObject setFormat(jint arg0);
		QAndroidJniObject setName(jstring arg0);
		QAndroidJniObject setOpaque(jboolean arg0);
		QAndroidJniObject setParent(android::view::SurfaceControl arg0);
	};
} // namespace android::view


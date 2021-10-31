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
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControl_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl_Builder(QJniObject obj);
		
		// Constructors
		SurfaceControl_Builder();
		
		// Methods
		android::view::SurfaceControl build();
		android::view::SurfaceControl_Builder setBufferSize(jint arg0, jint arg1);
		android::view::SurfaceControl_Builder setFormat(jint arg0);
		android::view::SurfaceControl_Builder setName(jstring arg0);
		android::view::SurfaceControl_Builder setOpaque(jboolean arg0);
		android::view::SurfaceControl_Builder setParent(android::view::SurfaceControl arg0);
	};
} // namespace android::view


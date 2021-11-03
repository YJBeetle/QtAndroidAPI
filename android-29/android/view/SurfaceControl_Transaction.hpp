#pragma once

#include "../../JObject.hpp"

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
	class SurfaceControl_Transaction : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SurfaceControl_Transaction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl_Transaction(QAndroidJniObject obj);
		
		// Constructors
		SurfaceControl_Transaction();
		
		// Methods
		void apply();
		void close();
		android::view::SurfaceControl_Transaction merge(android::view::SurfaceControl_Transaction arg0);
		android::view::SurfaceControl_Transaction reparent(android::view::SurfaceControl arg0, android::view::SurfaceControl arg1);
		android::view::SurfaceControl_Transaction setAlpha(android::view::SurfaceControl arg0, jfloat arg1);
		android::view::SurfaceControl_Transaction setBufferSize(android::view::SurfaceControl arg0, jint arg1, jint arg2);
		android::view::SurfaceControl_Transaction setGeometry(android::view::SurfaceControl arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, jint arg3);
		android::view::SurfaceControl_Transaction setLayer(android::view::SurfaceControl arg0, jint arg1);
		android::view::SurfaceControl_Transaction setVisibility(android::view::SurfaceControl arg0, jboolean arg1);
	};
} // namespace android::view


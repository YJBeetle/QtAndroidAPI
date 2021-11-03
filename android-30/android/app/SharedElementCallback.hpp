#pragma once

#include "../../JObject.hpp"

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
	class SharedElementCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SharedElementCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SharedElementCallback(QAndroidJniObject obj);
		
		// Constructors
		SharedElementCallback();
		
		// Methods
		JObject onCaptureSharedElementSnapshot(android::view::View arg0, android::graphics::Matrix arg1, android::graphics::RectF arg2);
		android::view::View onCreateSnapshotView(android::content::Context arg0, JObject arg1);
		void onMapSharedElements(JObject arg0, JObject arg1);
		void onRejectSharedElements(JObject arg0);
		void onSharedElementEnd(JObject arg0, JObject arg1, JObject arg2);
		void onSharedElementStart(JObject arg0, JObject arg1, JObject arg2);
		void onSharedElementsArrived(JObject arg0, JObject arg1, JObject arg2);
	};
} // namespace android::app


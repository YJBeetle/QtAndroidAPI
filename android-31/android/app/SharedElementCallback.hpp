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
		
		// QJniObject forward
		template<typename ...Ts> explicit SharedElementCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SharedElementCallback(QJniObject obj);
		
		// Constructors
		SharedElementCallback();
		
		// Methods
		JObject onCaptureSharedElementSnapshot(android::view::View arg0, android::graphics::Matrix arg1, android::graphics::RectF arg2) const;
		android::view::View onCreateSnapshotView(android::content::Context arg0, JObject arg1) const;
		void onMapSharedElements(JObject arg0, JObject arg1) const;
		void onRejectSharedElements(JObject arg0) const;
		void onSharedElementEnd(JObject arg0, JObject arg1, JObject arg2) const;
		void onSharedElementStart(JObject arg0, JObject arg1, JObject arg2) const;
		void onSharedElementsArrived(JObject arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::app


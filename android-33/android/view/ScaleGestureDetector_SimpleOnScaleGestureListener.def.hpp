#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class ScaleGestureDetector;
}

namespace android::view
{
	class ScaleGestureDetector_SimpleOnScaleGestureListener : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScaleGestureDetector_SimpleOnScaleGestureListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScaleGestureDetector_SimpleOnScaleGestureListener(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScaleGestureDetector_SimpleOnScaleGestureListener();
		
		// Methods
		jboolean onScale(android::view::ScaleGestureDetector arg0) const;
		jboolean onScaleBegin(android::view::ScaleGestureDetector arg0) const;
		void onScaleEnd(android::view::ScaleGestureDetector arg0) const;
	};
} // namespace android::view


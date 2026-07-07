#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class InputDevice_ViewBehavior : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputDevice_ViewBehavior(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputDevice_ViewBehavior(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean shouldSmoothScroll(jint arg0, jint arg1) const;
	};
} // namespace android::view


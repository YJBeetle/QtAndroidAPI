#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Insets;
}
class JString;

namespace android::view
{
	class WindowInsetsAnimation_Bounds : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowInsetsAnimation_Bounds(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsetsAnimation_Bounds(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WindowInsetsAnimation_Bounds(android::graphics::Insets arg0, android::graphics::Insets arg1);
		
		// Methods
		android::graphics::Insets getLowerBound() const;
		android::graphics::Insets getUpperBound() const;
		android::view::WindowInsetsAnimation_Bounds inset(android::graphics::Insets arg0) const;
		JString toString() const;
	};
} // namespace android::view


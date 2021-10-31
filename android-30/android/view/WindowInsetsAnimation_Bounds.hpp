#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Insets;
}

namespace android::view
{
	class WindowInsetsAnimation_Bounds : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowInsetsAnimation_Bounds(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsetsAnimation_Bounds(QJniObject obj);
		
		// Constructors
		WindowInsetsAnimation_Bounds(android::graphics::Insets arg0, android::graphics::Insets arg1);
		
		// Methods
		android::graphics::Insets getLowerBound();
		android::graphics::Insets getUpperBound();
		android::view::WindowInsetsAnimation_Bounds inset(android::graphics::Insets arg0);
		jstring toString();
	};
} // namespace android::view


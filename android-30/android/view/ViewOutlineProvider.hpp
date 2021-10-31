#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Outline;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class ViewOutlineProvider : public __JniBaseClass
	{
	public:
		// Fields
		static android::view::ViewOutlineProvider BACKGROUND();
		static android::view::ViewOutlineProvider BOUNDS();
		static android::view::ViewOutlineProvider PADDED_BOUNDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewOutlineProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewOutlineProvider(QAndroidJniObject obj);
		
		// Constructors
		ViewOutlineProvider();
		
		// Methods
		void getOutline(android::view::View arg0, android::graphics::Outline arg1);
	};
} // namespace android::view


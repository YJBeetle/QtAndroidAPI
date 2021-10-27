#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ViewOverlay.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class ViewGroupOverlay : public android::view::ViewOverlay
	{
	public:
		// Fields
		
		ViewGroupOverlay(QAndroidJniObject obj);
		// Constructors
		ViewGroupOverlay() = default;
		
		// Methods
		void add(android::view::View arg0);
		void remove(android::view::View arg0);
	};
} // namespace android::view


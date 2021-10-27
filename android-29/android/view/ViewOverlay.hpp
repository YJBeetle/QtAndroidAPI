#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class ViewOverlay : public __JniBaseClass
	{
	public:
		// Fields
		
		ViewOverlay(QAndroidJniObject obj);
		// Constructors
		ViewOverlay() = default;
		
		// Methods
		void add(android::graphics::drawable::Drawable arg0);
		void clear();
		void remove(android::graphics::drawable::Drawable arg0);
	};
} // namespace android::view


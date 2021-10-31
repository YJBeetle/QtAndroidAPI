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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewOverlay(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewOverlay(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void add(android::graphics::drawable::Drawable arg0);
		void clear();
		void remove(android::graphics::drawable::Drawable arg0);
	};
} // namespace android::view


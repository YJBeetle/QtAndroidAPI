#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::view
{
	class ViewOverlay : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewOverlay(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewOverlay(QJniObject obj);
		
		// Constructors
		
		// Methods
		void add(android::graphics::drawable::Drawable arg0);
		void clear();
		void remove(android::graphics::drawable::Drawable arg0);
	};
} // namespace android::view


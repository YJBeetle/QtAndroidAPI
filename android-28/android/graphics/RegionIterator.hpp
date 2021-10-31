#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Region;
}

namespace android::graphics
{
	class RegionIterator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RegionIterator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RegionIterator(QAndroidJniObject obj);
		
		// Constructors
		RegionIterator(android::graphics::Region arg0);
		
		// Methods
		jboolean next(android::graphics::Rect arg0);
	};
} // namespace android::graphics


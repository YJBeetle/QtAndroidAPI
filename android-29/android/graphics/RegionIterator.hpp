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
		
		RegionIterator(QAndroidJniObject obj);
		// Constructors
		RegionIterator(android::graphics::Region &arg0);
		RegionIterator() = default;
		
		// Methods
		jboolean next(android::graphics::Rect arg0);
	};
} // namespace android::graphics


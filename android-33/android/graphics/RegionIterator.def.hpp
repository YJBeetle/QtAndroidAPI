#pragma once

#include "../../JObject.hpp"

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
	class RegionIterator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RegionIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RegionIterator(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		RegionIterator(android::graphics::Region arg0);
		
		// Methods
		jboolean next(android::graphics::Rect arg0) const;
	};
} // namespace android::graphics


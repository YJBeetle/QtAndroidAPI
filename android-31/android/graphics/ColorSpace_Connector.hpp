#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class ColorSpace;
}
namespace android::graphics
{
	class ColorSpace_RenderIntent;
}

namespace android::graphics
{
	class ColorSpace_Connector : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ColorSpace_Connector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Connector(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::ColorSpace getDestination();
		android::graphics::ColorSpace_RenderIntent getRenderIntent();
		android::graphics::ColorSpace getSource();
		jfloatArray transform(jfloatArray arg0);
		jfloatArray transform(jfloat arg0, jfloat arg1, jfloat arg2);
	};
} // namespace android::graphics


#pragma once

#include "../../JObject.hpp"

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
	class ColorSpace_Connector : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace_Connector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Connector(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::ColorSpace getDestination();
		android::graphics::ColorSpace_RenderIntent getRenderIntent();
		android::graphics::ColorSpace getSource();
		jfloatArray transform(jfloatArray arg0);
		jfloatArray transform(jfloat arg0, jfloat arg1, jfloat arg2);
	};
} // namespace android::graphics


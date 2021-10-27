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
		
		ColorSpace_Connector(QAndroidJniObject obj);
		// Constructors
		ColorSpace_Connector() = default;
		
		// Methods
		QAndroidJniObject getDestination();
		QAndroidJniObject getRenderIntent();
		QAndroidJniObject getSource();
		jfloatArray transform(jfloatArray arg0);
		jfloatArray transform(jfloat arg0, jfloat arg1, jfloat arg2);
	};
} // namespace android::graphics


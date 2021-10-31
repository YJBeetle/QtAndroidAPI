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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace_Connector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Connector(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getDestination();
		QAndroidJniObject getRenderIntent();
		QAndroidJniObject getSource();
		jfloatArray transform(jfloatArray arg0);
		jfloatArray transform(jfloat arg0, jfloat arg1, jfloat arg2);
	};
} // namespace android::graphics


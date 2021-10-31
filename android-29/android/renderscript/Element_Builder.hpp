#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::renderscript
{
	class Element;
}
namespace android::renderscript
{
	class RenderScript;
}

namespace android::renderscript
{
	class Element_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		Element_Builder(QAndroidJniObject obj);
		// Constructors
		Element_Builder(android::renderscript::RenderScript arg0);
		Element_Builder() = default;
		
		// Methods
		QAndroidJniObject add(android::renderscript::Element arg0, jstring arg1);
		QAndroidJniObject add(android::renderscript::Element arg0, jstring arg1, jint arg2);
		QAndroidJniObject create();
	};
} // namespace android::renderscript


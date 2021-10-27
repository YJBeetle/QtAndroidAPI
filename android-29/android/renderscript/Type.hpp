#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"

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
	class Type : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		Type(QAndroidJniObject obj);
		// Constructors
		Type() = default;
		
		// Methods
		static QAndroidJniObject createX(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2);
		static QAndroidJniObject createXY(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3);
		static QAndroidJniObject createXYZ(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3, jint arg4);
		jint getCount();
		QAndroidJniObject getElement();
		jint getX();
		jint getY();
		jint getYuv();
		jint getZ();
		jboolean hasFaces();
		jboolean hasMipmaps();
	};
} // namespace android::renderscript


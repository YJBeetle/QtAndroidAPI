#pragma once

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Type(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		Type(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::Type createX(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2);
		static android::renderscript::Type createXY(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3);
		static android::renderscript::Type createXYZ(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3, jint arg4);
		jint getCount() const;
		android::renderscript::Element getElement() const;
		jint getX() const;
		jint getY() const;
		jint getYuv() const;
		jint getZ() const;
		jboolean hasFaces() const;
		jboolean hasMipmaps() const;
	};
} // namespace android::renderscript


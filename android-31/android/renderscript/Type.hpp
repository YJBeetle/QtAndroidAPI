#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Type(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		Type(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::Type createX(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2);
		static android::renderscript::Type createXY(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3);
		static android::renderscript::Type createXYZ(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3, jint arg4);
		jint getCount();
		android::renderscript::Element getElement();
		jint getX();
		jint getY();
		jint getYuv();
		jint getZ();
		jboolean hasFaces();
		jboolean hasMipmaps();
	};
} // namespace android::renderscript


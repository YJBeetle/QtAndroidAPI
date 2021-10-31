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
	class Type;
}

namespace android::renderscript
{
	class Type_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Type_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Type_Builder(QAndroidJniObject obj);
		
		// Constructors
		Type_Builder(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		
		// Methods
		QAndroidJniObject create();
		QAndroidJniObject setFaces(jboolean arg0);
		QAndroidJniObject setMipmaps(jboolean arg0);
		QAndroidJniObject setX(jint arg0);
		QAndroidJniObject setY(jint arg0);
		QAndroidJniObject setYuvFormat(jint arg0);
		QAndroidJniObject setZ(jint arg0);
	};
} // namespace android::renderscript


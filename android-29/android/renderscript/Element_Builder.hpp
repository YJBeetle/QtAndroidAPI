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
		
		// QJniObject forward
		template<typename ...Ts> explicit Element_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Element_Builder(QJniObject obj);
		
		// Constructors
		Element_Builder(android::renderscript::RenderScript arg0);
		
		// Methods
		android::renderscript::Element_Builder add(android::renderscript::Element arg0, jstring arg1);
		android::renderscript::Element_Builder add(android::renderscript::Element arg0, jstring arg1, jint arg2);
		android::renderscript::Element create();
	};
} // namespace android::renderscript


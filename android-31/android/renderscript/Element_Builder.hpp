#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Element;
}
namespace android::renderscript
{
	class RenderScript;
}
class JString;

namespace android::renderscript
{
	class Element_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Element_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Element_Builder(QAndroidJniObject obj);
		
		// Constructors
		Element_Builder(android::renderscript::RenderScript arg0);
		
		// Methods
		android::renderscript::Element_Builder add(android::renderscript::Element arg0, JString arg1) const;
		android::renderscript::Element_Builder add(android::renderscript::Element arg0, JString arg1, jint arg2) const;
		android::renderscript::Element create() const;
	};
} // namespace android::renderscript


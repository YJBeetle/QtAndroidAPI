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
namespace android::renderscript
{
	class Type;
}

namespace android::renderscript
{
	class Type_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Type_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Type_Builder(QJniObject obj);
		
		// Constructors
		Type_Builder(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		
		// Methods
		android::renderscript::Type create() const;
		android::renderscript::Type_Builder setFaces(jboolean arg0) const;
		android::renderscript::Type_Builder setMipmaps(jboolean arg0) const;
		android::renderscript::Type_Builder setX(jint arg0) const;
		android::renderscript::Type_Builder setY(jint arg0) const;
		android::renderscript::Type_Builder setYuvFormat(jint arg0) const;
		android::renderscript::Type_Builder setZ(jint arg0) const;
	};
} // namespace android::renderscript


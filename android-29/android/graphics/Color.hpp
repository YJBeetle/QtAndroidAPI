#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::graphics
{
	class ColorSpace;
}
namespace android::graphics
{
	class ColorSpace_Connector;
}
namespace android::graphics
{
	class ColorSpace_Model;
}
class JObject;
class JString;

namespace android::graphics
{
	class Color : public JObject
	{
	public:
		// Fields
		static jint BLACK();
		static jint BLUE();
		static jint CYAN();
		static jint DKGRAY();
		static jint GRAY();
		static jint GREEN();
		static jint LTGRAY();
		static jint MAGENTA();
		static jint RED();
		static jint TRANSPARENT();
		static jint WHITE();
		static jint YELLOW();
		
		// QJniObject forward
		template<typename ...Ts> explicit Color(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Color(QJniObject obj);
		
		// Constructors
		Color();
		
		// Methods
		static jint HSVToColor(JFloatArray arg0);
		static jint HSVToColor(jint arg0, JFloatArray arg1);
		static void RGBToHSV(jint arg0, jint arg1, jint arg2, JFloatArray arg3);
		static jfloat alpha(jlong arg0);
		static jint alpha(jint arg0);
		static jint argb(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static jint argb(jint arg0, jint arg1, jint arg2, jint arg3);
		static jfloat blue(jlong arg0);
		static jint blue(jint arg0);
		static android::graphics::ColorSpace colorSpace(jlong arg0);
		static void colorToHSV(jint arg0, JFloatArray arg1);
		static jlong convert(jint arg0, android::graphics::ColorSpace arg1);
		static jlong convert(jlong arg0, android::graphics::ColorSpace arg1);
		static jlong convert(jlong arg0, android::graphics::ColorSpace_Connector arg1);
		static jlong convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace_Connector arg4);
		static jlong convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4, android::graphics::ColorSpace arg5);
		static jfloat green(jlong arg0);
		static jint green(jint arg0);
		static jboolean isInColorSpace(jlong arg0, android::graphics::ColorSpace arg1);
		static jboolean isSrgb(jlong arg0);
		static jboolean isWideGamut(jlong arg0);
		static jfloat luminance(jint arg0);
		static jfloat luminance(jlong arg0);
		static jlong pack(jint arg0);
		static jlong pack(jfloat arg0, jfloat arg1, jfloat arg2);
		static jlong pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static jlong pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4);
		static jint parseColor(JString arg0);
		static jfloat red(jlong arg0);
		static jint red(jint arg0);
		static jint rgb(jfloat arg0, jfloat arg1, jfloat arg2);
		static jint rgb(jint arg0, jint arg1, jint arg2);
		static jint toArgb(jlong arg0);
		static android::graphics::Color valueOf(jint arg0);
		static android::graphics::Color valueOf(jlong arg0);
		static android::graphics::Color valueOf(JFloatArray arg0, android::graphics::ColorSpace arg1);
		static android::graphics::Color valueOf(jfloat arg0, jfloat arg1, jfloat arg2);
		static android::graphics::Color valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static android::graphics::Color valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4);
		jfloat alpha() const;
		jfloat blue() const;
		android::graphics::Color convert(android::graphics::ColorSpace arg0) const;
		jboolean equals(JObject arg0) const;
		android::graphics::ColorSpace getColorSpace() const;
		jfloat getComponent(jint arg0) const;
		jint getComponentCount() const;
		JFloatArray getComponents() const;
		JFloatArray getComponents(JFloatArray arg0) const;
		android::graphics::ColorSpace_Model getModel() const;
		jfloat green() const;
		jint hashCode() const;
		jboolean isSrgb() const;
		jboolean isWideGamut() const;
		jfloat luminance() const;
		jlong pack() const;
		jfloat red() const;
		jint toArgb() const;
		JString toString() const;
	};
} // namespace android::graphics


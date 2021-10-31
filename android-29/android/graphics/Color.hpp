#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::graphics
{
	class Color : public __JniBaseClass
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
		
		Color(QAndroidJniObject obj);
		// Constructors
		Color();
		
		// Methods
		static jint HSVToColor(jfloatArray arg0);
		static jint HSVToColor(jint arg0, jfloatArray arg1);
		static void RGBToHSV(jint arg0, jint arg1, jint arg2, jfloatArray arg3);
		static jfloat alpha(jlong arg0);
		static jint alpha(jint arg0);
		static jint argb(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static jint argb(jint arg0, jint arg1, jint arg2, jint arg3);
		static jfloat blue(jlong arg0);
		static jint blue(jint arg0);
		static QAndroidJniObject colorSpace(jlong arg0);
		static void colorToHSV(jint arg0, jfloatArray arg1);
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
		static jint parseColor(jstring arg0);
		static jfloat red(jlong arg0);
		static jint red(jint arg0);
		static jint rgb(jfloat arg0, jfloat arg1, jfloat arg2);
		static jint rgb(jint arg0, jint arg1, jint arg2);
		static jint toArgb(jlong arg0);
		static QAndroidJniObject valueOf(jint arg0);
		static QAndroidJniObject valueOf(jlong arg0);
		static QAndroidJniObject valueOf(jfloatArray arg0, android::graphics::ColorSpace arg1);
		static QAndroidJniObject valueOf(jfloat arg0, jfloat arg1, jfloat arg2);
		static QAndroidJniObject valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static QAndroidJniObject valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4);
		jfloat alpha();
		jfloat blue();
		QAndroidJniObject convert(android::graphics::ColorSpace arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getColorSpace();
		jfloat getComponent(jint arg0);
		jint getComponentCount();
		jfloatArray getComponents();
		jfloatArray getComponents(jfloatArray arg0);
		QAndroidJniObject getModel();
		jfloat green();
		jint hashCode();
		jboolean isSrgb();
		jboolean isWideGamut();
		jfloat luminance();
		jlong pack();
		jfloat red();
		jint toArgb();
		jstring toString();
	};
} // namespace android::graphics


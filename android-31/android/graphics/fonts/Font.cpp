#include "../Paint.hpp"
#include "../Paint_FontMetrics.hpp"
#include "../RectF.hpp"
#include "./FontStyle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/nio/ByteBuffer.hpp"
#include "./Font.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// QAndroidJniObject forward
	Font::Font(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Font::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray Font::getAxes()
	{
		return callObjectMethod(
			"getAxes",
			"()[Landroid/graphics/fonts/FontVariationAxis;"
		).object<jarray>();
	}
	java::nio::ByteBuffer Font::getBuffer()
	{
		return callObjectMethod(
			"getBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::io::File Font::getFile()
	{
		return callObjectMethod(
			"getFile",
			"()Ljava/io/File;"
		);
	}
	jfloat Font::getGlyphBounds(jint arg0, android::graphics::Paint arg1, android::graphics::RectF arg2)
	{
		return callMethod<jfloat>(
			"getGlyphBounds",
			"(ILandroid/graphics/Paint;Landroid/graphics/RectF;)F",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	android::os::LocaleList Font::getLocaleList()
	{
		return callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	void Font::getMetrics(android::graphics::Paint arg0, android::graphics::Paint_FontMetrics arg1)
	{
		callMethod<void>(
			"getMetrics",
			"(Landroid/graphics/Paint;Landroid/graphics/Paint$FontMetrics;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint Font::getSourceIdentifier()
	{
		return callMethod<jint>(
			"getSourceIdentifier",
			"()I"
		);
	}
	android::graphics::fonts::FontStyle Font::getStyle()
	{
		return callObjectMethod(
			"getStyle",
			"()Landroid/graphics/fonts/FontStyle;"
		);
	}
	jint Font::getTtcIndex()
	{
		return callMethod<jint>(
			"getTtcIndex",
			"()I"
		);
	}
	jint Font::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Font::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::graphics::fonts


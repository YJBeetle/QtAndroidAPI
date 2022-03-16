#include "../../../JArray.hpp"
#include "../Paint.hpp"
#include "../Paint_FontMetrics.hpp"
#include "../RectF.hpp"
#include "./FontStyle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../../java/io/File.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/nio/ByteBuffer.hpp"
#include "./Font.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean Font::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JArray Font::getAxes() const
	{
		return callObjectMethod(
			"getAxes",
			"()[Landroid/graphics/fonts/FontVariationAxis;"
		);
	}
	java::nio::ByteBuffer Font::getBuffer() const
	{
		return callObjectMethod(
			"getBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::io::File Font::getFile() const
	{
		return callObjectMethod(
			"getFile",
			"()Ljava/io/File;"
		);
	}
	jfloat Font::getGlyphBounds(jint arg0, android::graphics::Paint arg1, android::graphics::RectF arg2) const
	{
		return callMethod<jfloat>(
			"getGlyphBounds",
			"(ILandroid/graphics/Paint;Landroid/graphics/RectF;)F",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	android::os::LocaleList Font::getLocaleList() const
	{
		return callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	void Font::getMetrics(android::graphics::Paint arg0, android::graphics::Paint_FontMetrics arg1) const
	{
		callMethod<void>(
			"getMetrics",
			"(Landroid/graphics/Paint;Landroid/graphics/Paint$FontMetrics;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint Font::getSourceIdentifier() const
	{
		return callMethod<jint>(
			"getSourceIdentifier",
			"()I"
		);
	}
	android::graphics::fonts::FontStyle Font::getStyle() const
	{
		return callObjectMethod(
			"getStyle",
			"()Landroid/graphics/fonts/FontStyle;"
		);
	}
	jint Font::getTtcIndex() const
	{
		return callMethod<jint>(
			"getTtcIndex",
			"()I"
		);
	}
	jint Font::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Font::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics::fonts


#include "../../../JArray.hpp"
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
	
	// QAndroidJniObject forward
	Font::Font(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Font::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JArray Font::getAxes()
	{
		return callObjectMethod(
			"getAxes",
			"()[Landroid/graphics/fonts/FontVariationAxis;"
		);
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
	android::os::LocaleList Font::getLocaleList()
	{
		return callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;"
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
	JString Font::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics::fonts


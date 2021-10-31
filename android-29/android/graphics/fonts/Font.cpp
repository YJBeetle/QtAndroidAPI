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
	QAndroidJniObject Font::getBuffer()
	{
		return callObjectMethod(
			"getBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	QAndroidJniObject Font::getFile()
	{
		return callObjectMethod(
			"getFile",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject Font::getLocaleList()
	{
		return callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	QAndroidJniObject Font::getStyle()
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


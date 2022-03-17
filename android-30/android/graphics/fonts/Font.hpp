#pragma once

#include "../../../JArray.hpp"
#include "./FontStyle.def.hpp"
#include "../../os/LocaleList.def.hpp"
#include "../../../java/io/File.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/nio/ByteBuffer.def.hpp"
#include "./Font.def.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean Font::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JArray Font::getAxes() const
	{
		return callObjectMethod(
			"getAxes",
			"()[Landroid/graphics/fonts/FontVariationAxis;"
		);
	}
	inline java::nio::ByteBuffer Font::getBuffer() const
	{
		return callObjectMethod(
			"getBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline java::io::File Font::getFile() const
	{
		return callObjectMethod(
			"getFile",
			"()Ljava/io/File;"
		);
	}
	inline android::os::LocaleList Font::getLocaleList() const
	{
		return callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	inline android::graphics::fonts::FontStyle Font::getStyle() const
	{
		return callObjectMethod(
			"getStyle",
			"()Landroid/graphics/fonts/FontStyle;"
		);
	}
	inline jint Font::getTtcIndex() const
	{
		return callMethod<jint>(
			"getTtcIndex",
			"()I"
		);
	}
	inline jint Font::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Font::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics::fonts

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::fonts;
#endif

#include "../../../JArray.hpp"
#include "../../content/res/AssetManager.hpp"
#include "../../content/res/Resources.hpp"
#include "./Font.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "../../../java/io/File.hpp"
#include "../../../JString.hpp"
#include "../../../java/nio/ByteBuffer.hpp"
#include "./Font_Builder.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// Constructors
	Font_Builder::Font_Builder(android::graphics::fonts::Font arg0)
		: JObject(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/graphics/fonts/Font;)V",
			arg0.object()
		) {}
	Font_Builder::Font_Builder(android::os::ParcelFileDescriptor arg0)
		: JObject(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	Font_Builder::Font_Builder(java::io::File arg0)
		: JObject(
			"android.graphics.fonts.Font$Builder",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	Font_Builder::Font_Builder(java::nio::ByteBuffer arg0)
		: JObject(
			"android.graphics.fonts.Font$Builder",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		) {}
	Font_Builder::Font_Builder(android::content::res::AssetManager arg0, JString arg1)
		: JObject(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	Font_Builder::Font_Builder(android::content::res::Resources arg0, jint arg1)
		: JObject(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/content/res/Resources;I)V",
			arg0.object(),
			arg1
		) {}
	Font_Builder::Font_Builder(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/os/ParcelFileDescriptor;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	android::graphics::fonts::Font Font_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/fonts/Font;"
		);
	}
	android::graphics::fonts::Font_Builder Font_Builder::setFontVariationSettings(JArray arg0) const
	{
		return callObjectMethod(
			"setFontVariationSettings",
			"([Landroid/graphics/fonts/FontVariationAxis;)Landroid/graphics/fonts/Font$Builder;",
			arg0.object<jarray>()
		);
	}
	android::graphics::fonts::Font_Builder Font_Builder::setFontVariationSettings(JString arg0) const
	{
		return callObjectMethod(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Landroid/graphics/fonts/Font$Builder;",
			arg0.object<jstring>()
		);
	}
	android::graphics::fonts::Font_Builder Font_Builder::setSlant(jint arg0) const
	{
		return callObjectMethod(
			"setSlant",
			"(I)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
	android::graphics::fonts::Font_Builder Font_Builder::setTtcIndex(jint arg0) const
	{
		return callObjectMethod(
			"setTtcIndex",
			"(I)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
	android::graphics::fonts::Font_Builder Font_Builder::setWeight(jint arg0) const
	{
		return callObjectMethod(
			"setWeight",
			"(I)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
} // namespace android::graphics::fonts


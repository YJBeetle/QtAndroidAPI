#include "../../content/res/AssetManager.hpp"
#include "../../content/res/Resources.hpp"
#include "./Font.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/nio/ByteBuffer.hpp"
#include "./Font_Builder.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// QAndroidJniObject forward
	Font_Builder::Font_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Font_Builder::Font_Builder(android::os::ParcelFileDescriptor arg0)
		: __JniBaseClass(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	Font_Builder::Font_Builder(java::io::File arg0)
		: __JniBaseClass(
			"android.graphics.fonts.Font$Builder",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	Font_Builder::Font_Builder(java::nio::ByteBuffer arg0)
		: __JniBaseClass(
			"android.graphics.fonts.Font$Builder",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		) {}
	Font_Builder::Font_Builder(android::content::res::AssetManager arg0, jstring arg1)
		: __JniBaseClass(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	Font_Builder::Font_Builder(android::content::res::Resources arg0, jint arg1)
		: __JniBaseClass(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/content/res/Resources;I)V",
			arg0.object(),
			arg1
		) {}
	Font_Builder::Font_Builder(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2)
		: __JniBaseClass(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/os/ParcelFileDescriptor;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	android::graphics::fonts::Font Font_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/fonts/Font;"
		);
	}
	android::graphics::fonts::Font_Builder Font_Builder::setFontVariationSettings(jarray arg0)
	{
		return callObjectMethod(
			"setFontVariationSettings",
			"([Landroid/graphics/fonts/FontVariationAxis;)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
	android::graphics::fonts::Font_Builder Font_Builder::setFontVariationSettings(jstring arg0)
	{
		return callObjectMethod(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
	android::graphics::fonts::Font_Builder Font_Builder::setSlant(jint arg0)
	{
		return callObjectMethod(
			"setSlant",
			"(I)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
	android::graphics::fonts::Font_Builder Font_Builder::setTtcIndex(jint arg0)
	{
		return callObjectMethod(
			"setTtcIndex",
			"(I)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
	android::graphics::fonts::Font_Builder Font_Builder::setWeight(jint arg0)
	{
		return callObjectMethod(
			"setWeight",
			"(I)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
} // namespace android::graphics::fonts


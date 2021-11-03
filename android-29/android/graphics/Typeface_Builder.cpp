#include "../content/res/AssetManager.hpp"
#include "./Typeface.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "./Typeface_Builder.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	Typeface_Builder::Typeface_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Typeface_Builder::Typeface_Builder(java::io::File arg0)
		: JObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	Typeface_Builder::Typeface_Builder(java::io::FileDescriptor arg0)
		: JObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	Typeface_Builder::Typeface_Builder(jstring arg0)
		: JObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Typeface_Builder::Typeface_Builder(android::content::res::AssetManager arg0, jstring arg1)
		: JObject(
			"android.graphics.Typeface$Builder",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::graphics::Typeface Typeface_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/Typeface;"
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setFallback(jstring arg0)
	{
		return callObjectMethod(
			"setFallback",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setFontVariationSettings(jarray arg0)
	{
		return callObjectMethod(
			"setFontVariationSettings",
			"([Landroid/graphics/fonts/FontVariationAxis;)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setFontVariationSettings(jstring arg0)
	{
		return callObjectMethod(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setItalic(jboolean arg0)
	{
		return callObjectMethod(
			"setItalic",
			"(Z)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setTtcIndex(jint arg0)
	{
		return callObjectMethod(
			"setTtcIndex",
			"(I)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setWeight(jint arg0)
	{
		return callObjectMethod(
			"setWeight",
			"(I)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
} // namespace android::graphics


#include "../../JArray.hpp"
#include "../content/res/AssetManager.hpp"
#include "./Typeface.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../JString.hpp"
#include "./Typeface_Builder.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	Typeface_Builder::Typeface_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
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
	Typeface_Builder::Typeface_Builder(JString arg0)
		: JObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Typeface_Builder::Typeface_Builder(android::content::res::AssetManager arg0, JString arg1)
		: JObject(
			"android.graphics.Typeface$Builder",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::graphics::Typeface Typeface_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/Typeface;"
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setFallback(JString arg0) const
	{
		return callObjectMethod(
			"setFallback",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$Builder;",
			arg0.object<jstring>()
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setFontVariationSettings(JArray arg0) const
	{
		return callObjectMethod(
			"setFontVariationSettings",
			"([Landroid/graphics/fonts/FontVariationAxis;)Landroid/graphics/Typeface$Builder;",
			arg0.object<jarray>()
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setFontVariationSettings(JString arg0) const
	{
		return callObjectMethod(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$Builder;",
			arg0.object<jstring>()
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setItalic(jboolean arg0) const
	{
		return callObjectMethod(
			"setItalic",
			"(Z)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setTtcIndex(jint arg0) const
	{
		return callObjectMethod(
			"setTtcIndex",
			"(I)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	android::graphics::Typeface_Builder Typeface_Builder::setWeight(jint arg0) const
	{
		return callObjectMethod(
			"setWeight",
			"(I)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
} // namespace android::graphics


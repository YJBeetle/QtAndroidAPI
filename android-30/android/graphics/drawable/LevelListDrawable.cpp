#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer_DrawableContainerState.hpp"
#include "./LevelListDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	LevelListDrawable::LevelListDrawable(QAndroidJniObject obj) : android::graphics::drawable::DrawableContainer(obj) {}
	
	// Constructors
	LevelListDrawable::LevelListDrawable()
		: android::graphics::drawable::DrawableContainer(
			"android.graphics.drawable.LevelListDrawable",
			"()V"
		) {}
	
	// Methods
	void LevelListDrawable::addLevel(jint arg0, jint arg1, android::graphics::drawable::Drawable arg2) const
	{
		callMethod<void>(
			"addLevel",
			"(IILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void LevelListDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
	{
		callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	android::graphics::drawable::Drawable LevelListDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
} // namespace android::graphics::drawable


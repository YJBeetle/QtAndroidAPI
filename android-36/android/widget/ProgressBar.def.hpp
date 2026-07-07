#pragma once

#include "../view/View.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics
{
	class BlendMode;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics::drawable
{
	class Drawable;
}
class JString;

namespace android::widget
{
	class ProgressBar : public android::view::View
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProgressBar(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		ProgressBar(QJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		ProgressBar(android::content::Context arg0);
		ProgressBar(android::content::Context arg0, JObject arg1);
		ProgressBar(android::content::Context arg0, JObject arg1, jint arg2);
		ProgressBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void drawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		JString getAccessibilityClassName() const;
		android::graphics::drawable::Drawable getCurrentDrawable() const;
		android::graphics::drawable::Drawable getIndeterminateDrawable() const;
		android::graphics::BlendMode getIndeterminateTintBlendMode() const;
		android::content::res::ColorStateList getIndeterminateTintList() const;
		android::graphics::PorterDuff_Mode getIndeterminateTintMode() const;
		JObject getInterpolator() const;
		jint getMax() const;
		jint getMaxHeight() const;
		jint getMaxWidth() const;
		jint getMin() const;
		jint getMinHeight() const;
		jint getMinWidth() const;
		jint getProgress() const;
		android::graphics::BlendMode getProgressBackgroundTintBlendMode() const;
		android::content::res::ColorStateList getProgressBackgroundTintList() const;
		android::graphics::PorterDuff_Mode getProgressBackgroundTintMode() const;
		android::graphics::drawable::Drawable getProgressDrawable() const;
		android::graphics::BlendMode getProgressTintBlendMode() const;
		android::content::res::ColorStateList getProgressTintList() const;
		android::graphics::PorterDuff_Mode getProgressTintMode() const;
		jint getSecondaryProgress() const;
		android::graphics::BlendMode getSecondaryProgressTintBlendMode() const;
		android::content::res::ColorStateList getSecondaryProgressTintList() const;
		android::graphics::PorterDuff_Mode getSecondaryProgressTintMode() const;
		void incrementProgressBy(jint arg0) const;
		void incrementSecondaryProgressBy(jint arg0) const;
		void invalidateDrawable(android::graphics::drawable::Drawable arg0) const;
		jboolean isAnimating() const;
		jboolean isIndeterminate() const;
		void jumpDrawablesToCurrentState() const;
		void onRestoreInstanceState(JObject arg0) const;
		JObject onSaveInstanceState() const;
		void onVisibilityAggregated(jboolean arg0) const;
		void postInvalidate() const;
		void setIndeterminate(jboolean arg0) const;
		void setIndeterminateDrawable(android::graphics::drawable::Drawable arg0) const;
		void setIndeterminateDrawableTiled(android::graphics::drawable::Drawable arg0) const;
		void setIndeterminateTintBlendMode(android::graphics::BlendMode arg0) const;
		void setIndeterminateTintList(android::content::res::ColorStateList arg0) const;
		void setIndeterminateTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setInterpolator(JObject arg0) const;
		void setInterpolator(android::content::Context arg0, jint arg1) const;
		void setMax(jint arg0) const;
		void setMaxHeight(jint arg0) const;
		void setMaxWidth(jint arg0) const;
		void setMin(jint arg0) const;
		void setMinHeight(jint arg0) const;
		void setMinWidth(jint arg0) const;
		void setProgress(jint arg0) const;
		void setProgress(jint arg0, jboolean arg1) const;
		void setProgressBackgroundTintBlendMode(android::graphics::BlendMode arg0) const;
		void setProgressBackgroundTintList(android::content::res::ColorStateList arg0) const;
		void setProgressBackgroundTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setProgressDrawable(android::graphics::drawable::Drawable arg0) const;
		void setProgressDrawableTiled(android::graphics::drawable::Drawable arg0) const;
		void setProgressTintBlendMode(android::graphics::BlendMode arg0) const;
		void setProgressTintList(android::content::res::ColorStateList arg0) const;
		void setProgressTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setSecondaryProgress(jint arg0) const;
		void setSecondaryProgressTintBlendMode(android::graphics::BlendMode arg0) const;
		void setSecondaryProgressTintList(android::content::res::ColorStateList arg0) const;
		void setSecondaryProgressTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setStateDescription(JString arg0) const;
	};
} // namespace android::widget


#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"

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

namespace android::widget
{
	class ProgressBar : public android::view::View
	{
	public:
		// Fields
		
		ProgressBar(QAndroidJniObject obj);
		// Constructors
		ProgressBar(android::content::Context arg0);
		ProgressBar(android::content::Context arg0, __JniBaseClass arg1);
		ProgressBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		ProgressBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		ProgressBar() = default;
		
		// Methods
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		jstring getAccessibilityClassName();
		QAndroidJniObject getCurrentDrawable();
		QAndroidJniObject getIndeterminateDrawable();
		QAndroidJniObject getIndeterminateTintBlendMode();
		QAndroidJniObject getIndeterminateTintList();
		QAndroidJniObject getIndeterminateTintMode();
		QAndroidJniObject getInterpolator();
		jint getMax();
		jint getMaxHeight();
		jint getMaxWidth();
		jint getMin();
		jint getMinHeight();
		jint getMinWidth();
		jint getProgress();
		QAndroidJniObject getProgressBackgroundTintBlendMode();
		QAndroidJniObject getProgressBackgroundTintList();
		QAndroidJniObject getProgressBackgroundTintMode();
		QAndroidJniObject getProgressDrawable();
		QAndroidJniObject getProgressTintBlendMode();
		QAndroidJniObject getProgressTintList();
		QAndroidJniObject getProgressTintMode();
		jint getSecondaryProgress();
		QAndroidJniObject getSecondaryProgressTintBlendMode();
		QAndroidJniObject getSecondaryProgressTintList();
		QAndroidJniObject getSecondaryProgressTintMode();
		void incrementProgressBy(jint arg0);
		void incrementSecondaryProgressBy(jint arg0);
		void invalidateDrawable(android::graphics::drawable::Drawable arg0);
		jboolean isAnimating();
		jboolean isIndeterminate();
		void jumpDrawablesToCurrentState();
		void onRestoreInstanceState(__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
		void onVisibilityAggregated(jboolean arg0);
		void postInvalidate();
		void setIndeterminate(jboolean arg0);
		void setIndeterminateDrawable(android::graphics::drawable::Drawable arg0);
		void setIndeterminateDrawableTiled(android::graphics::drawable::Drawable arg0);
		void setIndeterminateTintBlendMode(android::graphics::BlendMode arg0);
		void setIndeterminateTintList(android::content::res::ColorStateList arg0);
		void setIndeterminateTintMode(android::graphics::PorterDuff_Mode arg0);
		void setInterpolator(__JniBaseClass arg0);
		void setInterpolator(android::content::Context arg0, jint arg1);
		void setMax(jint arg0);
		void setMaxHeight(jint arg0);
		void setMaxWidth(jint arg0);
		void setMin(jint arg0);
		void setMinHeight(jint arg0);
		void setMinWidth(jint arg0);
		void setProgress(jint arg0);
		void setProgress(jint arg0, jboolean arg1);
		void setProgressBackgroundTintBlendMode(android::graphics::BlendMode arg0);
		void setProgressBackgroundTintList(android::content::res::ColorStateList arg0);
		void setProgressBackgroundTintMode(android::graphics::PorterDuff_Mode arg0);
		void setProgressDrawable(android::graphics::drawable::Drawable arg0);
		void setProgressDrawableTiled(android::graphics::drawable::Drawable arg0);
		void setProgressTintBlendMode(android::graphics::BlendMode arg0);
		void setProgressTintList(android::content::res::ColorStateList arg0);
		void setProgressTintMode(android::graphics::PorterDuff_Mode arg0);
		void setSecondaryProgress(jint arg0);
		void setSecondaryProgressTintBlendMode(android::graphics::BlendMode arg0);
		void setSecondaryProgressTintList(android::content::res::ColorStateList arg0);
		void setSecondaryProgressTintMode(android::graphics::PorterDuff_Mode arg0);
	};
} // namespace android::widget


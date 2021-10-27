#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/ColorFilter.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../net/Uri.hpp"
#include "./ImageView_ScaleType.hpp"
#include "./ImageView.hpp"

namespace android::widget
{
	// Fields
	
	ImageView::ImageView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ImageView::ImageView(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ImageView::ImageView(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ImageView::ImageView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ImageView::ImageView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void ImageView::animateTransform(android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"animateTransform",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageView::clearColorFilter()
	{
		__thiz.callMethod<void>(
			"clearColorFilter",
			"()V"
		);
	}
	void ImageView::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jstring ImageView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ImageView::getAdjustViewBounds()
	{
		return __thiz.callMethod<jboolean>(
			"getAdjustViewBounds",
			"()Z"
		);
	}
	jint ImageView::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jboolean ImageView::getBaselineAlignBottom()
	{
		return __thiz.callMethod<jboolean>(
			"getBaselineAlignBottom",
			"()Z"
		);
	}
	QAndroidJniObject ImageView::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	jboolean ImageView::getCropToPadding()
	{
		return __thiz.callMethod<jboolean>(
			"getCropToPadding",
			"()Z"
		);
	}
	QAndroidJniObject ImageView::getDrawable()
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ImageView::getImageAlpha()
	{
		return __thiz.callMethod<jint>(
			"getImageAlpha",
			"()I"
		);
	}
	QAndroidJniObject ImageView::getImageMatrix()
	{
		return __thiz.callObjectMethod(
			"getImageMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	QAndroidJniObject ImageView::getImageTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getImageTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject ImageView::getImageTintList()
	{
		return __thiz.callObjectMethod(
			"getImageTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject ImageView::getImageTintMode()
	{
		return __thiz.callObjectMethod(
			"getImageTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jint ImageView::getMaxHeight()
	{
		return __thiz.callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	jint ImageView::getMaxWidth()
	{
		return __thiz.callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	QAndroidJniObject ImageView::getScaleType()
	{
		return __thiz.callObjectMethod(
			"getScaleType",
			"()Landroid/widget/ImageView$ScaleType;"
		);
	}
	jboolean ImageView::hasOverlappingRendering()
	{
		return __thiz.callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	void ImageView::invalidateDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ImageView::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	void ImageView::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	jintArray ImageView::onCreateDrawableState(jint arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateDrawableState",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	void ImageView::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	void ImageView::onVisibilityAggregated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void ImageView::setAdjustViewBounds(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAdjustViewBounds",
			"(Z)V",
			arg0
		);
	}
	void ImageView::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void ImageView::setBaseline(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBaseline",
			"(I)V",
			arg0
		);
	}
	void ImageView::setBaselineAlignBottom(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBaselineAlignBottom",
			"(Z)V",
			arg0
		);
	}
	void ImageView::setColorFilter(android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageView::setColorFilter(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(I)V",
			arg0
		);
	}
	void ImageView::setColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ImageView::setCropToPadding(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCropToPadding",
			"(Z)V",
			arg0
		);
	}
	void ImageView::setImageAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImageAlpha",
			"(I)V",
			arg0
		);
	}
	void ImageView::setImageBitmap(android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setImageBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageView::setImageDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setImageDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageView::setImageIcon(android::graphics::drawable::Icon arg0)
	{
		__thiz.callMethod<void>(
			"setImageIcon",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageView::setImageLevel(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImageLevel",
			"(I)V",
			arg0
		);
	}
	void ImageView::setImageMatrix(android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"setImageMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageView::setImageResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImageResource",
			"(I)V",
			arg0
		);
	}
	void ImageView::setImageState(jintArray arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setImageState",
			"([IZ)V",
			arg0,
			arg1
		);
	}
	void ImageView::setImageTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setImageTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageView::setImageTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setImageTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageView::setImageTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setImageTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageView::setImageURI(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setImageURI",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageView::setMaxHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxHeight",
			"(I)V",
			arg0
		);
	}
	void ImageView::setMaxWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0
		);
	}
	void ImageView::setScaleType(android::widget::ImageView_ScaleType arg0)
	{
		__thiz.callMethod<void>(
			"setScaleType",
			"(Landroid/widget/ImageView$ScaleType;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageView::setSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void ImageView::setVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

